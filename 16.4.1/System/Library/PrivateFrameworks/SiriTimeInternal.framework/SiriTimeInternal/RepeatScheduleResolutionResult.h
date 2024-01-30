@interface RepeatScheduleResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithRepeatScheduleToConfirm:(long long)a0;
+ (id)successWithResolvedRepeatSchedule:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
