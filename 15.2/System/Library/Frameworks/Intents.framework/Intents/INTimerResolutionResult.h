@interface INTimerResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedTimer:(id)a0;
+ (id)disambiguationWithTimersToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithTimerToConfirm:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
