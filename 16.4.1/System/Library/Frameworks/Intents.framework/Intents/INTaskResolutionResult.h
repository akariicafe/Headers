@interface INTaskResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithTaskToConfirm:(id)a0;
+ (id)disambiguationWithTasksToDisambiguate:(id)a0;
+ (id)successWithResolvedTask:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
