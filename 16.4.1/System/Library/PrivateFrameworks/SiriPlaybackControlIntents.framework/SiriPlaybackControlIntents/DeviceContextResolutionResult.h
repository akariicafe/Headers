@interface DeviceContextResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithDeviceContextToConfirm:(id)a0;
+ (id)disambiguationWithDeviceContextsToDisambiguate:(id)a0;
+ (id)successWithResolvedDeviceContext:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
