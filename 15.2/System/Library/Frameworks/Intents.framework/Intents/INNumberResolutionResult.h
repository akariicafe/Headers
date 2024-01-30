@interface INNumberResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedNumber:(id)a0;
+ (id)disambiguationWithNumbersToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithNumberToConfirm:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
