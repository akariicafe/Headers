@class NSString;

@interface TSDMediaStyle : TSSStyle <TSDMixing, TSSPreset>

@property (readonly, nonatomic) NSString *presetKind;

+ (void)initialize;
+ (id)properties;
+ (id)defaultValueForProperty:(int)a0;
+ (float)defaultFloatValueForProperty:(int)a0;
+ (BOOL)validateFloatValue:(float *)a0 forProperty:(int)a1;
+ (id)propertiesAllowingNSNull;
+ (id)p_magicMoveProperties;
+ (id)imageStylePresetStyleDescriptor;
+ (id)movieStylePresetStyleDescriptor;

- (SEL)mapThemePropertyMapSelector;
- (id)boxedValueForProperty:(int)a0 oldBoxedValue:(id)a1 transformedByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;

@end
