@interface TSTTableStyle : TSSStyle

+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (void)initDefaultPropertyMap:(id)a0 presetIndex:(unsigned long long)a1 colors:(id)a2 alternate:(int)a3;
+ (id)styleIDForPreset:(unsigned long long)a0;
+ (id)nonEmphasisTableProperties;
+ (void)initDefaultStrokePresetListInPropertyMap:(id)a0 presetIndex:(unsigned long long)a1 colors:(id)a2;
+ (void)p_populateParagraphStyle:(id)a0;

- (void)validate;
- (void)dealloc;
- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (SEL)mapThemePropertyMapSelector;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)a0;
- (id)verticalStrokeForStrokePreset:(unsigned long long)a0;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)a0;
- (unsigned int)maskForStrokePreset:(unsigned long long)a0;
- (id)strokeForStrokePreset:(unsigned long long)a0;

@end
