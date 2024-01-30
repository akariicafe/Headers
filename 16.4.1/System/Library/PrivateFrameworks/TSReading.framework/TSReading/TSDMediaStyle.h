@class NSString;

@interface TSDMediaStyle : TSSStyle <TSDMixing, TSSPreset>

@property (readonly, nonatomic) NSString *presetKind;

+ (void)initialize;
+ (id)properties;
+ (id)imageStylePresetStyleDescriptor;
+ (id)movieStylePresetStyleDescriptor;
+ (BOOL)validateFloatValue:(float *)a0 forProperty:(int)a1;
+ (float)defaultFloatValueForProperty:(int)a0;
+ (id)defaultValueForProperty:(int)a0;
+ (id)p_magicMoveProperties;
+ (id)propertiesAllowingNSNull;

- (id)boxedValueForProperty:(int)a0 oldBoxedValue:(id)a1 transformedByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (SEL)mapThemePropertyMapSelector;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;

@end
