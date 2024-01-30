@interface PHAssetImportProperties : PHAssetPropertySet

@property (readonly, nonatomic) long long importedBy;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
