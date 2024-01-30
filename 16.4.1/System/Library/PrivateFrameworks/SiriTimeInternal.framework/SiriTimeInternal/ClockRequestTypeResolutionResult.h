@interface ClockRequestTypeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithClockRequestTypeToConfirm:(long long)a0;
+ (id)successWithResolvedClockRequestType:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
