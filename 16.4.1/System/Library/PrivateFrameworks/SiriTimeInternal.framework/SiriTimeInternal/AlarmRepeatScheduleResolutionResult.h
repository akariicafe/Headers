@interface AlarmRepeatScheduleResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithAlarmRepeatScheduleToConfirm:(id)a0;
+ (id)disambiguationWithAlarmRepeatSchedulesToDisambiguate:(id)a0;
+ (id)successWithResolvedAlarmRepeatSchedule:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
