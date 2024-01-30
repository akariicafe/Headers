@class _UIVibrancyEffectImpl;

@interface UIVibrancyEffect : UIVisualEffect {
    _UIVibrancyEffectImpl *_impl;
}

@property (readonly, nonatomic, getter=_vibrancyStyle) long long _vibrancyStyle;

+ (id)_darkVibrantEffectWithLightenColor:(id)a0 dodgeColor:(id)a1 compositingColor:(id)a2;
+ (id)darkVibrantEffectWithDodgeColor:(id)a0 lightenColor:(id)a1 compositingColor:(id)a2;
+ (id)_lightVibrantEffectWithDarkenColor:(id)a0 burnColor:(id)a1 compositingColor:(id)a2;
+ (id)lightVibrantEffectWithBurnColor:(id)a0 darkenColor:(id)a1 compositingColor:(id)a2;
+ (id)_vibrancyEntryWithType:(id)a0 inputColor1:(id)a1 inputColor2:(id)a2 inputReversed:(BOOL)a3;
+ (id)_vibrantEffectForLightMaterial:(id)a0 darkMaterial:(id)a1 vibrancyStyle:(long long)a2;
+ (id)vibrantEffectWithCompositingMode:(long long)a0 compositingColor:(id)a1;
+ (BOOL)supportsSecureCoding;
+ (id)_effectForBlurEffect:(id)a0 vibrancyStyle:(long long)a1;
+ (id)_vibrantEffectWithCAColorMatrix:(struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })a0 alpha:(double)a1;
+ (id)_effectWithStyle:(long long)a0 ignoreSimpleVibrancy:(BOOL)a1;
+ (id)effectForBlurEffect:(id)a0 style:(long long)a1;
+ (id)vibrantMediumShadowEffect;
+ (id)vibrantChromeShadowEffect;
+ (id)effectForBlurEffect:(id)a0;
+ (id)_vibrantShadowEffect;
+ (id)vibrantHeavyShadowEffect;

- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (BOOL)_isATVStyle;
- (id)_reduceTransparencyEffectConfig;
- (id)_effectReplacingTintColor:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (long long)_blurStyle;
- (id)initWithCoder:(id)a0;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (id)description;
- (id)effectConfigForQuality:(long long)a0;
- (id)effectConfig;
- (BOOL)isEqual:(id)a0;
- (id)effectConfigForReducedTransperancy:(BOOL)a0;
- (id)_initWithImplementation:(id)a0;
- (long long)_expectedUsage;
- (id)effectForUserInterfaceStyle:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isAutomaticStyle;

@end
