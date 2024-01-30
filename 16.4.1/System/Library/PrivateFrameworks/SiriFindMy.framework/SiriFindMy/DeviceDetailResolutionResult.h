@interface DeviceDetailResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithDeviceDetailToConfirm:(id)a0;
+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithDeviceDetailsToDisambiguate:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedDeviceDetail:(id)a0;
+ (id)successWithResolvedObject:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
