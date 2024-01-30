@class UIVibrancyEffect;

@interface _UIVibrancyEffectLegacyImpl : _UIVibrancyEffectImpl {
    long long _style;
    BOOL _invertAutomaticStyle;
    BOOL _ignoreSimpleVibrancy;
}

@property (nonatomic) UIVibrancyEffect *effect;

- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (id)initWithStyle:(long long)a0 invertAutomaticStyle:(BOOL)a1;
- (long long)style;
- (id)implementationForUserInterfaceStyle:(long long)a0;
- (BOOL)invertAutomaticStyle;
- (void)appendDescriptionTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (id)initWithStyle:(long long)a0 invertAutomaticStyle:(BOOL)a1 ignoreSimpleVibrancy:(BOOL)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
