@interface AlarmPeriodResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedAlarmPeriod:(long long)a0;
+ (id)confirmationRequiredWithAlarmPeriodToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
