@interface GeoFenceActionResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithGeoFenceActionToConfirm:(long long)a0;
+ (id)successWithResolvedGeoFenceAction:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
