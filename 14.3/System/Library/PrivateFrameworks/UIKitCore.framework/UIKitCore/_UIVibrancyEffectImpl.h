@interface _UIVibrancyEffectImpl : NSObject

+ (id)implementationFromCoder:(id)a0;

- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (long long)vibrancyStyle;
- (id)implementationReplacingTintColor:(id)a0;
- (long long)style;
- (id)implementationForUserInterfaceStyle:(long long)a0;
- (BOOL)invertAutomaticStyle;
- (void)setEffect:(id)a0;
- (void)appendDescriptionTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
