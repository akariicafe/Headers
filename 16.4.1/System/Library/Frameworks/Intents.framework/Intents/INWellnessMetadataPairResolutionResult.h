@interface INWellnessMetadataPairResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithWellnessMetadataPairToConfirm:(id)a0;
+ (id)disambiguationWithWellnessMetadataPairsToDisambiguate:(id)a0;
+ (id)successWithResolvedWellnessMetadataPair:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
