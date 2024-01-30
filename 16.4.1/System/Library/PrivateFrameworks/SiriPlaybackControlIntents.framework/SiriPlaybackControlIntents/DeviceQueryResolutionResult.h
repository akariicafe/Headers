@interface DeviceQueryResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)successWithResolvedDeviceQuery:(id)a0;
+ (id)confirmationRequiredWithDeviceQueryToConfirm:(id)a0;
+ (id)disambiguationWithDeviceQuerysToDisambiguate:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
