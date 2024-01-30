@interface DeviceSpecificityLevelResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedDeviceSpecificityLevel:(long long)a0;
+ (id)confirmationRequiredWithDeviceSpecificityLevelToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
