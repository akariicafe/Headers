@interface TSTCellStyle : TSSStyle <TSTCellDiffing, TSDMixing>

+ (id)properties;
+ (id)nonEmphasisCellProperties;
+ (id)propertiesAllowingNSNull;
+ (id)categoriesCellProperties;
+ (id)cellDiffProperties;
+ (void)initDefaultPropertyMap:(id)a0 forTableStyleArea:(unsigned long long)a1 presetID:(unsigned long long)a2 colors:(id)a3 alternate:(unsigned long long)a4;
+ (void)p_initBodyRegionPropertyMap:(id)a0 presetID:(unsigned long long)a1 colors:(id)a2 alternate:(unsigned long long)a3;
+ (void)p_initFooterRowRegionPropertyMap:(id)a0 presetID:(unsigned long long)a1 colors:(id)a2 alternate:(unsigned long long)a3;
+ (void)p_initHeaderColumnRegionPropertyMap:(id)a0 presetID:(unsigned long long)a1 colors:(id)a2 alternate:(unsigned long long)a3;
+ (void)p_initHeaderRowRegionPropertyMap:(id)a0 presetID:(unsigned long long)a1 colors:(id)a2 alternate:(unsigned long long)a3;
+ (id)p_regionStringForTableStyleArea:(unsigned long long)a0;
+ (id)styleIDForPreset:(unsigned long long)a0 andTableStyleArea:(unsigned long long)a1;
+ (id)textStyleIDForPreset:(unsigned long long)a0 andTableStyleArea:(unsigned long long)a1;

- (void)validate;
- (BOOL)isObsolete;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (struct CGSize { double x0; double x1; })targetSizeForImageData:(id)a0 associatedHint:(id)a1;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)loadCellStyleFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadCellStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const void *)a1 unarchiver:(id)a2;
- (id)objectByRemovingPropertiesInMap:(id)a0 addingPropertiesInMap:(id)a1 updateInverseResetPropertyMap:(id)a2 updateInverseSetPropertyMap:(id)a3;
- (id)objectByRemovingPropertiesInMap:(id)a0 addingPropertiesInMap:(id)a1 updateInverseResetPropertyMap:(id)a2 updateInverseSetPropertyMap:(id)a3 optionalConcurrentStylesheet:(id)a4;
- (void)saveCellStylePropertiesToArchive:(void *)a0 archiver:(id)a1;
- (void)saveCellStyleToArchive:(void *)a0 archiver:(id)a1;
- (void)upgradeIfNecessary;

@end
