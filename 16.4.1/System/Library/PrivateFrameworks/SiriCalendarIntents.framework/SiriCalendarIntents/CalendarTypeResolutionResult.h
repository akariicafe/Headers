@interface CalendarTypeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithCalendarTypeToConfirm:(long long)a0;
+ (id)successWithResolvedCalendarType:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
