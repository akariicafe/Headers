@interface _UIBlurEffectImpl : NSObject

+ (id)implementationFromCoder:(id)a0;

- (BOOL)invertAutomaticStyle;
- (id)tintColor;
- (void)encodeWithCoder:(id)a0;
- (id)implementationForUserInterfaceStyle:(long long)a0;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (BOOL)requiresCopying;
- (void)setEffect:(id)a0;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (void)appendDescriptionTo:(id)a0;
- (BOOL)canProvideCoreMaterialVibrancyEffect;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)canProvideVibrancyEffect;
- (long long)style;

@end
