@class NSString, NSBundle;

@interface _UIBlurEffectCoreMaterialImpl : _UIBlurEffectImpl {
    long long _style;
    NSString *_lightMaterial;
    NSString *_darkMaterial;
    NSBundle *_bundle;
}

- (id)implementationForUserInterfaceStyle:(long long)a0;
- (BOOL)invertAutomaticStyle;
- (void)appendDescriptionTo:(id)a0;
- (long long)style;
- (BOOL)canProvideVibrancyEffect;
- (BOOL)canProvideCoreMaterialVibrancyEffect;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLightMaterial:(id)a0 darkMaterial:(id)a1 bundle:(id)a2;
- (id)tintColor;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
