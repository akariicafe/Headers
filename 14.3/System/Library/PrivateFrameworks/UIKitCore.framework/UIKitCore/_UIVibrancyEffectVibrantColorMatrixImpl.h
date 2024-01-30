@class UIColor;

@interface _UIVibrancyEffectVibrantColorMatrixImpl : _UIVibrancyEffectImpl {
    long long _systemName;
    struct CAColorMatrix { float m11; float m12; float m13; float m14; float m15; float m21; float m22; float m23; float m24; float m25; float m31; float m32; float m33; float m34; float m35; float m41; float m42; float m43; float m44; float m45; } _lightVibrantColorMatrix;
    struct CAColorMatrix { float m11; float m12; float m13; float m14; float m15; float m21; float m22; float m23; float m24; float m25; float m31; float m32; float m33; float m34; float m35; float m41; float m42; float m43; float m44; float m45; } _darkVibrantColorMatrix;
    UIColor *_reducedTransperancyColor;
    double _alpha;
    BOOL _hasDarkVariant;
}

- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (id)initWithLightCAColorMatrix:(struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })a0 darkCAColorMatrix:(struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })a1 alpha:(double)a2;
- (void).cxx_destruct;
- (id)implementationReplacingTintColor:(id)a0;
- (void)appendDescriptionTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (id)initWithCAColorMatrix:(struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })a0 alpha:(double)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithSystemName:(long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
