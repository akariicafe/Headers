@class NSString, WDParagraphProperties, WDCharacterProperties, WDTableRowProperties, WDTableCellProperties, WDStyleSheet, WDTableStyleOverride;

@interface WDStyle : NSObject <NSCopying> {
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellProperties;
    WDTableStyleOverride *mTableStyleOverrides[12];
    BOOL mHidden;
    NSString *mName;
    NSString *mId;
    int mStyleType;
}

@property (readonly, weak) WDStyleSheet *styleSheet;
@property (weak) WDStyle *baseStyle;
@property (weak) WDStyle *nextStyle;

- (id)id;
- (void)setName:(id)a0;
- (BOOL)hidden;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHidden:(BOOL)a0;
- (id)description;
- (int)type;
- (id)name;
- (id)paragraphProperties;
- (id)characterProperties;
- (id)tableCellProperties;
- (id)tableProperties;
- (BOOL)isAnythingOverridden;
- (id)initWithStyleSheet:(id)a0 id:(id)a1 type:(int)a2;
- (id)tableRowProperties;
- (id)tableStyleOverrideForPart:(int)a0;

@end
