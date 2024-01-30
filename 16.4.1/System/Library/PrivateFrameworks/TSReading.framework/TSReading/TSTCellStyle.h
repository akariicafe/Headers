@interface TSTCellStyle : TSSStyle

+ (id)properties;
+ (void)initDefaultPropertyMap:(id)a0 forTableArea:(unsigned int)a1 presetIndex:(unsigned long long)a2 colors:(id)a3 alternate:(int)a4;
+ (id)nonEmphasisCellProperties;
+ (void)p_initBodyRegionPropertyMap:(id)a0 presetIndex:(unsigned long long)a1 colors:(id)a2 alternate:(int)a3;
+ (void)p_initFooterRowRegionPropertyMap:(id)a0 presetIndex:(unsigned long long)a1 colors:(id)a2 alternate:(int)a3;
+ (void)p_initHeaderColumnRegionPropertyMap:(id)a0 presetIndex:(unsigned long long)a1 colors:(id)a2 alternate:(int)a3;
+ (void)p_initHeaderRowRegionPropertyMap:(id)a0 presetIndex:(unsigned long long)a1 colors:(id)a2 alternate:(int)a3;
+ (id)propertiesAllowingNSNull;
+ (id)regionStringForTableArea:(unsigned int)a0;
+ (id)styleIDForPreset:(unsigned long long)a0 andTableArea:(unsigned int)a1;
+ (id)textStyleIDForPreset:(unsigned long long)a0 andTableArea:(unsigned int)a1;

- (void)validate;
- (void)dealloc;
- (SEL)mapThemePropertyMapSelector;
- (void)tstMapCellStylePropertyMap:(id)a0;

@end
