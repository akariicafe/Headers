@interface PHAssetMonoskiMediaProperties : PHAssetPropertySet

@property (readonly, nonatomic) short monoskiMediaType;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
+ (id)keyPathToPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
