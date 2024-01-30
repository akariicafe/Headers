@interface GeoFenceActionResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedGeoFenceAction:(long long)a0;
+ (id)confirmationRequiredWithGeoFenceActionToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
