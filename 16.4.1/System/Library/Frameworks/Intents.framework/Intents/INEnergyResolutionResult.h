@interface INEnergyResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithEnergyToConfirm:(id)a0;
+ (id)disambiguationWithEnergyToDisambiguate:(id)a0;
+ (id)successWithResolvedEnergy:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
