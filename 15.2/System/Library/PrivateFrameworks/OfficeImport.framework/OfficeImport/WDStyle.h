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

- (BOOL)hidden;
- (void)setName:(id)a0;
- (id)id;
- (id)description;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (int)type;
- (id)paragraphProperties;
- (id)tableProperties;
- (BOOL)isAnythingOverridden;
- (id)characterProperties;
- (id)initWithStyleSheet:(id)a0 id:(id)a1 type:(int)a2;
- (id)tableRowProperties;
- (id)tableCellProperties;
- (id)tableStyleOverrideForPart:(int)a0;

@end
