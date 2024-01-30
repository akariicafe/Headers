@class TSWPShapeStyle, TSWPParagraphStyle, TSTTableStyle, TSTCellStyle;

@interface TSTTableStyleNetwork : TSPObject <NSFastEnumeration> {
    unsigned long long mPresetIndex;
    TSTTableStyle *mTableStyle;
    TSTCellStyle *mHeaderRowCellStyle;
    TSTCellStyle *mHeaderColumnCellStyle;
    TSTCellStyle *mFooterRowCellStyle;
    TSTCellStyle *mBodyCellStyle;
    TSWPParagraphStyle *mHeaderRowTextStyle;
    TSWPParagraphStyle *mHeaderColumnTextStyle;
    TSWPParagraphStyle *mFooterRowTextStyle;
    TSWPParagraphStyle *mBodyTextStyle;
    TSWPParagraphStyle *mTableNameStyle;
    TSWPShapeStyle *mTableNameShapeStyle;
}

@property (retain, nonatomic) TSTTableStyle *tableStyle;
@property (readonly, nonatomic) TSTCellStyle *bodyCellStyle;
@property (readonly, nonatomic) TSTCellStyle *headerColumnCellStyle;
@property (readonly, nonatomic) TSTCellStyle *footerRowCellStyle;
@property (readonly, nonatomic) TSTCellStyle *headerRowCellStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *bodyTextStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *headerColumnTextStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *footerRowTextStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *headerRowTextStyle;
@property (retain, nonatomic) TSWPParagraphStyle *tableNameStyle;
@property (retain, nonatomic) TSWPShapeStyle *tableNameShapeStyle;
@property (nonatomic) unsigned long long presetIndex;

+ (id)tableNameStyleIDForPreset:(unsigned long long)a0;
+ (id)defaultTableNameShapeStyleWithContext:(id)a0;
+ (id)tableNameShapeStyleIDForPreset:(unsigned long long)a0;
+ (id)networkFromStylesheet:(id)a0 presetIndex:(unsigned long long)a1;
+ (id)networkFromTableModel:(id)a0;
+ (id)networkWithContext:(id)a0 presetIndex:(unsigned long long)a1 colors:(id)a2 alternate:(int)a3;
+ (id)createStylesInStylesheet:(id)a0 presetIndex:(unsigned long long)a1 colors:(id)a2 alternate:(int)a3;
+ (id)networkFromTheme:(id)a0 presetIndex:(unsigned long long)a1;
+ (id)identifiersForPresetIndex:(unsigned long long)a0;

- (BOOL)valid;
- (id)initWithContext:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (unsigned long long)hash;
- (void)dealloc;
- (id)copyWithContext:(id)a0;
- (void)setBodyTextStyle:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 context:(id)a1;
- (void)setStylesFromTableModel:(id)a0;
- (void)setCellStyle:(id)a0 forTableArea:(unsigned int)a1;
- (void)setTextStyle:(id)a0 forTableArea:(unsigned int)a1;
- (void)setBodyCellStyle:(id)a0;
- (void)setHeaderColumnCellStyle:(id)a0;
- (void)setFooterRowCellStyle:(id)a0;
- (void)setHeaderRowCellStyle:(id)a0;
- (void)setHeaderColumnTextStyle:(id)a0;
- (void)setFooterRowTextStyle:(id)a0;
- (void)setHeaderRowTextStyle:(id)a0;
- (id)initWithContext:(id)a0 fromArray:(id)a1 presetIndex:(unsigned long long)a2;
- (BOOL)stylesInStylesheet:(id)a0;
- (id)cellStyleForTableArea:(unsigned int)a0;
- (id)textStyleForTableArea:(unsigned int)a0;
- (id)styleArray;
- (id)dictionaryWithPreset:(unsigned long long)a0;
- (id)initWithContext:(id)a0 fromDictionary:(id)a1 withPreset:(unsigned long long)a2;

@end
