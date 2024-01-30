@class UIColor, UIBlurEffect;

@interface _UIBlurEffectLegacyImpl : _UIBlurEffectImpl {
    long long _style;
    UIColor *_tintColor;
    BOOL _invertAutomaticStyle;
}

@property (nonatomic) UIBlurEffect *effect;

- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (BOOL)canProvideVibrancyEffect;
- (void).cxx_destruct;
- (id)tintColor;
- (long long)style;
- (id)implementationForUserInterfaceStyle:(long long)a0;
- (BOOL)invertAutomaticStyle;
- (void)appendDescriptionTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (id)initWithStyle:(long long)a0 tintColor:(id)a1 invertAutomaticStyle:(BOOL)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
