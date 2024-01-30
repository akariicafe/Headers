@interface INTaskListResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithTaskListToConfirm:(id)a0;
+ (id)disambiguationWithTaskListsToDisambiguate:(id)a0;
+ (id)successWithResolvedTaskList:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
