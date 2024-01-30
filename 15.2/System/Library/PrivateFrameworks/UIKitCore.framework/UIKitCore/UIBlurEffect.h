@class UIColor, _UIBlurEffectImpl;

@interface UIBlurEffect : UIVisualEffect {
    _UIBlurEffectImpl *_impl;
}

@property (readonly, nonatomic) BOOL _canProvideVibrancyEffect;
@property (readonly, nonatomic) BOOL _canProvideCoreMaterialVibrancyEffect;
@property (readonly, nonatomic) long long _style;
@property (readonly, nonatomic) UIColor *_tintColor;
@property (readonly, nonatomic) BOOL _invertAutomaticStyle;

+ (BOOL)supportsSecureCoding;
+ (id)_effectWithStyle:(long long)a0 tintColor:(id)a1 invertAutomaticStyle:(BOOL)a2;
+ (id)_effectForLightMaterial:(id)a0 darkMaterial:(id)a1 bundle:(id)a2;
+ (id)_effectWithStyle:(long long)a0 invertAutomaticStyle:(BOOL)a1;
+ (id)effectWithStyle:(long long)a0;
+ (id)_effectWithInfiniteRadiusScale:(double)a0;
+ (id)effectWithBlurRadius:(double)a0;
+ (id)_effectWithInfiniteRadius;
+ (id)_effectWithTintColor:(id)a0;
+ (id)_effectWithBlurRadius:(double)a0 scale:(double)a1;

- (id)_initWithImplementation:(id)a0;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isATVStyle;
- (long long)_expectedUsage;
- (id)effectForUserInterfaceStyle:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)_isAutomaticStyle;
- (id)effectSettings;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
