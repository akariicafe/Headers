@interface INIntentExecutionResultResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithIntentExecutionResultToConfirm:(id)a0;
+ (id)disambiguationWithIntentExecutionResultsToDisambiguate:(id)a0;
+ (id)successWithResolvedIntentExecutionResult:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
