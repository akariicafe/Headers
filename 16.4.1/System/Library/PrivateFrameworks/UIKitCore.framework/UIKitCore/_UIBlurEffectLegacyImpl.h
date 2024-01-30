@class UIColor, UIBlurEffect;

@interface _UIBlurEffectLegacyImpl : _UIBlurEffectImpl {
    long long _style;
    UIColor *_tintColor;
    BOOL _invertAutomaticStyle;
}

@property (nonatomic) UIBlurEffect *effect;

- (BOOL)invertAutomaticStyle;
- (id)tintColor;
- (void)encodeWithCoder:(id)a0;
- (id)implementationForUserInterfaceStyle:(long long)a0;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (void)appendDescriptionTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)canProvideVibrancyEffect;
- (long long)style;
- (id)initWithStyle:(long long)a0 tintColor:(id)a1 invertAutomaticStyle:(BOOL)a2;
- (void).cxx_destruct;

@end
