@class WDTableRowProperties, WDDocument, WDStyle, WDParagraphProperties, WDCharacterProperties, WDTableCellProperties;

@interface WDTableStyleOverride : NSObject <NSCopying> {
    WDDocument *mDocument;
    int mPart;
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellStyleProperties;
    unsigned char mParagraphPropertiesOverridden : 1;
    unsigned char mCharacterPropertiesOverridden : 1;
    unsigned char mTableRowPropertiesOverridden : 1;
    unsigned char mTableCellStylePropertiesOverridden : 1;
}

@property (weak) WDStyle *style;

- (int)part;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDocument:(id)a0;
- (id)description;
- (void)setPart:(int)a0;
- (id)paragraphProperties;
- (id)characterProperties;
- (BOOL)isCharacterPropertiesOverridden;
- (id)tableProperties;
- (id)mutableCharacterProperties;
- (id)tableRowProperties;
- (id)mutableParagraphProperties;
- (BOOL)isParagraphPropertiesOverridden;
- (void)setParagraphPropertiesOverridden:(BOOL)a0;
- (void)setCharacterPropertiesOverridden:(BOOL)a0;
- (BOOL)isTablePropertiesOverridden;
- (id)mutableTableRowProperties;
- (BOOL)isTableRowPropertiesOverridden;
- (void)setTableRowPropertiesOverridden:(BOOL)a0;
- (id)tableCellStyleProperties;
- (id)mutableTableCellStyleProperties;
- (BOOL)isTableCellStylePropertiesOverridden;
- (void)setTableCellStylePropertiesOverridden:(BOOL)a0;

@end
