@interface DeviceLocalityResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedDeviceLocality:(long long)a0;
+ (id)confirmationRequiredWithDeviceLocalityToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
