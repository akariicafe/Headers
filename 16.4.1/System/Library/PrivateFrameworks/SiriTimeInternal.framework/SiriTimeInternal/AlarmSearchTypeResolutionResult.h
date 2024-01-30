@interface AlarmSearchTypeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithAlarmSearchTypeToConfirm:(long long)a0;
+ (id)successWithResolvedAlarmSearchType:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
