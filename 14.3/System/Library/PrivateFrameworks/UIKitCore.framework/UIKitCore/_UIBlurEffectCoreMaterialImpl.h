@class NSString, NSBundle;

@interface _UIBlurEffectCoreMaterialImpl : _UIBlurEffectImpl {
    long long _style;
    NSString *_lightMaterial;
    NSString *_darkMaterial;
    NSBundle *_bundle;
}

- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (BOOL)canProvideCoreMaterialVibrancyEffect;
- (id)initWithStyle:(long long)a0;
- (BOOL)canProvideVibrancyEffect;
- (void).cxx_destruct;
- (id)tintColor;
- (long long)style;
- (id)implementationForUserInterfaceStyle:(long long)a0;
- (BOOL)invertAutomaticStyle;
- (void)appendDescriptionTo:(id)a0;
- (unsigned long long)hash;
- (id)initWithLightMaterial:(id)a0 darkMaterial:(id)a1 bundle:(id)a2;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
