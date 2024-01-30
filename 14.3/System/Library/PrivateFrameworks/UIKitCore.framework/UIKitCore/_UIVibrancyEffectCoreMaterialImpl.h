@class NSString;

@interface _UIVibrancyEffectCoreMaterialImpl : _UIVibrancyEffectImpl {
    long long _blurStyle;
    long long _vibrancyStyle;
    NSString *_lightMaterial;
    NSString *_darkMaterial;
}

- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (id)initWithLightMaterial:(id)a0 darkMaterial:(id)a1 vibrancyStyle:(long long)a2;
- (void).cxx_destruct;
- (long long)vibrancyStyle;
- (long long)style;
- (BOOL)invertAutomaticStyle;
- (void)appendDescriptionTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithStyle:(long long)a0 vibrancyStyle:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
