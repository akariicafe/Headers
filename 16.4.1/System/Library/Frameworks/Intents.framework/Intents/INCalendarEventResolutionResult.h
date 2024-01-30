@interface INCalendarEventResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithCalendarEventToConfirm:(id)a0;
+ (id)disambiguationWithCalendarEventsToDisambiguate:(id)a0;
+ (id)successWithResolvedCalendarEvent:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
