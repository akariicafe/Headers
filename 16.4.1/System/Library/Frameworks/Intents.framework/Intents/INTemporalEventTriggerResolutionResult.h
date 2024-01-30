@interface INTemporalEventTriggerResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithTemporalEventTriggerToConfirm:(id)a0;
+ (id)disambiguationWithTemporalEventTriggersToDisambiguate:(id)a0;
+ (id)successWithResolvedTemporalEventTrigger:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
