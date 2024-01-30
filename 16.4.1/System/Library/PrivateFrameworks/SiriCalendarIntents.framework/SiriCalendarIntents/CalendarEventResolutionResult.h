@interface CalendarEventResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithCalendarEventToConfirm:(id)a0;
+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithCalendarEventsToDisambiguate:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedCalendarEvent:(id)a0;
+ (id)successWithResolvedObject:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
