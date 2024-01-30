@class NSString, NSBundle;

@interface _UIBlurEffectCoreMaterialImpl : _UIBlurEffectImpl {
    long long _style;
    NSString *_lightMaterial;
    NSString *_darkMaterial;
    NSBundle *_bundle;
}

- (BOOL)invertAutomaticStyle;
- (id)tintColor;
- (void)encodeWithCoder:(id)a0;
- (id)implementationForUserInterfaceStyle:(long long)a0;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (id)initWithStyle:(long long)a0;
- (void)appendDescriptionTo:(id)a0;
- (BOOL)canProvideCoreMaterialVibrancyEffect;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithLightMaterial:(id)a0 darkMaterial:(id)a1 bundle:(id)a2;
- (BOOL)canProvideVibrancyEffect;
- (long long)style;
- (void).cxx_destruct;

@end
