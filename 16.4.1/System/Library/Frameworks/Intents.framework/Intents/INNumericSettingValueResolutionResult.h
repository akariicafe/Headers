@interface INNumericSettingValueResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithNumericSettingValueToConfirm:(id)a0;
+ (id)disambiguationWithNumericSettingValuesToDisambiguate:(id)a0;
+ (id)successWithResolvedNumericSettingValue:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
