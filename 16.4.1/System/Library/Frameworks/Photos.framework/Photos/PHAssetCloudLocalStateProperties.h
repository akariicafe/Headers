@class NSManagedObjectID;

@interface PHAssetCloudLocalStateProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSManagedObjectID *cloudMasterObjectID;
@property (readonly, nonatomic) unsigned short assetCloudLocalState;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
+ (BOOL)inverseIsToMany;
+ (unsigned short)_assetCloudLocalStateFromAssetLocalState:(short)a0 masterLocalState:(short)a1;
+ (id)additionalPropertiesToFetchOnPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
