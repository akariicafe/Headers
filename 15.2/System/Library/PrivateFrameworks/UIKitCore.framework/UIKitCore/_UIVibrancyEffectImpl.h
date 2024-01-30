@interface _UIVibrancyEffectImpl : NSObject

+ (id)implementationFromCoder:(id)a0;

- (id)implementationForUserInterfaceStyle:(long long)a0;
- (BOOL)invertAutomaticStyle;
- (void)appendDescriptionTo:(id)a0;
- (long long)style;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (void)encodeWithCoder:(id)a0;
- (void)setEffect:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)implementationReplacingTintColor:(id)a0;
- (long long)vibrancyStyle;
- (unsigned long long)hash;

@end
