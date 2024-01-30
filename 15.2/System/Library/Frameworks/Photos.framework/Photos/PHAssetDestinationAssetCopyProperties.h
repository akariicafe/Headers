@interface PHAssetDestinationAssetCopyProperties : PHAssetPropertySet

@property (readonly, nonatomic) long long destinationAssetCopyState;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
