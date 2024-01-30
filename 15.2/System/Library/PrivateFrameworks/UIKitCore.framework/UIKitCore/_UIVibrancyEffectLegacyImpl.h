@class UIVibrancyEffect;

@interface _UIVibrancyEffectLegacyImpl : _UIVibrancyEffectImpl {
    long long _style;
    BOOL _invertAutomaticStyle;
    BOOL _ignoreSimpleVibrancy;
}

@property (nonatomic) UIVibrancyEffect *effect;

- (id)implementationForUserInterfaceStyle:(long long)a0;
- (BOOL)invertAutomaticStyle;
- (void)appendDescriptionTo:(id)a0;
- (long long)style;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (id)initWithStyle:(long long)a0 invertAutomaticStyle:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithStyle:(long long)a0 invertAutomaticStyle:(BOOL)a1 ignoreSimpleVibrancy:(BOOL)a2;
- (unsigned long long)hash;

@end
