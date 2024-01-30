@class NSString, NSDictionary;

@interface UIColorEffect : UIVisualEffect {
    NSString *_filterType;
    NSDictionary *_configurationValues;
    NSDictionary *_identityValues;
    NSDictionary *_requestedValues;
    BOOL _disableInPlaceFiltering;
}

+ (BOOL)supportsSecureCoding;
+ (id)colorEffectMultiply:(id)a0;
+ (id)colorEffectAdd:(id)a0;
+ (id)colorEffectMonochromeTint:(id)a0 blendingAmount:(double)a1 brightnessAdjustment:(double)a2;
+ (id)_colorEffectSourceOver:(struct { double x0; double x1; double x2; double x3; })a0;
+ (id)colorEffectSaturate:(double)a0;
+ (id)colorEffectBrightness:(double)a0;
+ (id)colorEffectColor:(id)a0;
+ (id)colorEffectInvert;
+ (id)colorEffectCurvesRed:(id)a0 green:(id)a1 blue:(id)a2 alpha:(id)a3;
+ (id)colorEffectMatrix:(struct { struct { double x0; double x1; double x2; double x3; } x0; struct { double x0; double x1; double x2; double x3; } x1; struct { double x0; double x1; double x2; double x3; } x2; struct { double x0; double x1; double x2; double x3; } x3; struct { double x0; double x1; double x2; double x3; } x4; })a0;
+ (id)colorEffectAverageColor;
+ (id)colorEffectLuminanceCurveMap:(id)a0 blendingAmount:(double)a1;
+ (id)colorEffectLuminanceMap:(id)a0 blendingAmount:(double)a1;
+ (id)_colorEffectCAMatrix:(struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })a0;
+ (id)colorEffectSubtract:(id)a0;
+ (id)colorEffectContrast:(double)a0;

- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_filterEntry;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)_expectedUsage;
- (void)encodeWithCoder:(id)a0;

@end
