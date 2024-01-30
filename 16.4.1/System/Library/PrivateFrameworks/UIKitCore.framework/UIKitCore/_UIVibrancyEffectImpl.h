@interface _UIVibrancyEffectImpl : NSObject

+ (id)implementationFromCoder:(id)a0;

- (BOOL)invertAutomaticStyle;
- (void)encodeWithCoder:(id)a0;
- (id)implementationForUserInterfaceStyle:(long long)a0;
- (id)implementationReplacingTintColor:(id)a0;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (void)setEffect:(id)a0;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (void)appendDescriptionTo:(id)a0;
- (long long)vibrancyStyle;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)style;

@end
