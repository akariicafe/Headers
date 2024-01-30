@interface PHAssetCoarseLocationProperties : PHAssetPropertySet

@property (readonly, nonatomic) double gpsHorizontalAccuracy;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
