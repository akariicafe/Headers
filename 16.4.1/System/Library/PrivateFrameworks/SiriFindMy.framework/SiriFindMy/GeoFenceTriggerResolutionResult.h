@interface GeoFenceTriggerResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithGeoFenceTriggerToConfirm:(long long)a0;
+ (id)successWithResolvedGeoFenceTrigger:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
