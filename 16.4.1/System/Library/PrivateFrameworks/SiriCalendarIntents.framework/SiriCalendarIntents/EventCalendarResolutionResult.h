@interface EventCalendarResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithEventCalendarToConfirm:(id)a0;
+ (id)disambiguationWithEventCalendarsToDisambiguate:(id)a0;
+ (id)successWithResolvedEventCalendar:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
