@interface _UILegacyEffectConverter : NSObject

+ (id)sharedConverter;

- (id)vibrancyConfigForHighQualityVibrancyStyle:(long long)a0;
- (id)backdropSettingsForBlurStyle:(long long)a0;
- (id)vibrancyConfigForReducedTransperancyVibrancyStyle:(long long)a0;
- (id)vibrancyConfigForLowQualityVibrancyStyle:(long long)a0;
- (void)applyBackdropSettings:(id)a0 toEffectDescriptor:(id)a1 environment:(id)a2;
- (void)applyVibrancyConfig:(id)a0 toEffectDescriptor:(id)a1;

@end
