@class NSString;

@interface _UIVibrancyEffectCoreMaterialImpl : _UIVibrancyEffectImpl {
    long long _blurStyle;
    long long _vibrancyStyle;
    NSString *_lightMaterial;
    NSString *_darkMaterial;
}

- (BOOL)invertAutomaticStyle;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (id)initWithStyle:(long long)a0 vibrancyStyle:(long long)a1;
- (void)appendDescriptionTo:(id)a0;
- (long long)vibrancyStyle;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)style;
- (id)initWithLightMaterial:(id)a0 darkMaterial:(id)a1 vibrancyStyle:(long long)a2;
- (void).cxx_destruct;

@end
