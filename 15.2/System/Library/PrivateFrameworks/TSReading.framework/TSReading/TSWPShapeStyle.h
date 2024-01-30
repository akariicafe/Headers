@class NSString;

@interface TSWPShapeStyle : TSDShapeStyle <TSSPreset>

@property (readonly, nonatomic) NSString *presetKind;

+ (id)properties;
+ (id)defaultValueForProperty:(int)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (id)propertiesAllowingNSNull;
+ (id)presetStyleDescriptor;
+ (id)layoutProperties;

- (id)defaultParagraphStyle;
- (void)setDefaultParagraphStyle:(id)a0;
- (SEL)mapThemePropertyMapSelector;
- (id)boxedValueForProperty:(int)a0 oldBoxedValue:(id)a1 transformedByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;

@end
