@class NSManagedObjectID;

@interface PHAssetCloudLocalStateProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSManagedObjectID *cloudMasterObjectID;
@property (readonly, nonatomic) unsigned short assetCloudLocalState;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)propertySetName;
+ (id)additionalPropertiesToFetchOnPrimaryObject;
+ (BOOL)inverseIsToMany;
+ (id)keyPathFromPrimaryObject;
+ (unsigned short)_assetCloudLocalStateFromAssetLocalState:(short)a0 masterLocalState:(short)a1;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
