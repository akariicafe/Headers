@interface INTemporalEventTriggerTypeOptionsResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithTemporalEventTriggerTypeOptionsToConfirm:(unsigned long long)a0;
+ (id)successWithResolvedTemporalEventTriggerTypeOptions:(unsigned long long)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
