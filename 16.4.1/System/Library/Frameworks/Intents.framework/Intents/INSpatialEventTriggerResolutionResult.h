@interface INSpatialEventTriggerResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithSpatialEventTriggerToConfirm:(id)a0;
+ (id)disambiguationWithSpatialEventTriggersToDisambiguate:(id)a0;
+ (id)successWithResolvedSpatialEventTrigger:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
