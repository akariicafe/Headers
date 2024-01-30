@class UIColor, UIBlurEffect;

@interface _UIBlurEffectLegacyImpl : _UIBlurEffectImpl {
    long long _style;
    UIColor *_tintColor;
    BOOL _invertAutomaticStyle;
}

@property (nonatomic) UIBlurEffect *effect;

- (id)implementationForUserInterfaceStyle:(long long)a0;
- (BOOL)invertAutomaticStyle;
- (void)appendDescriptionTo:(id)a0;
- (long long)style;
- (BOOL)canProvideVibrancyEffect;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)tintColor;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithStyle:(long long)a0 tintColor:(id)a1 invertAutomaticStyle:(BOOL)a2;

@end
