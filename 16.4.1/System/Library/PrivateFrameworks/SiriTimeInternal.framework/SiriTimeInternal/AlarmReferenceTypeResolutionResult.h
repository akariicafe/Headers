@interface AlarmReferenceTypeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithAlarmReferenceTypeToConfirm:(long long)a0;
+ (id)successWithResolvedAlarmReferenceType:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
