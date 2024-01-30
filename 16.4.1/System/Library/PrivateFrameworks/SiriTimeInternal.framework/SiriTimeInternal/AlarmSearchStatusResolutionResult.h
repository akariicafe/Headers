@interface AlarmSearchStatusResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithAlarmSearchStatusToConfirm:(long long)a0;
+ (id)successWithResolvedAlarmSearchStatus:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
