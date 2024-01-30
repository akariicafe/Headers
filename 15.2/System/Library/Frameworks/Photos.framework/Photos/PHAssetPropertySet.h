@class NSString, PHAsset;

@interface PHAssetPropertySet : NSObject <PHAssetPropertySet>

@property (class, readonly, nonatomic) NSString *propertySetName;

@property (readonly, weak, nonatomic) PHAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToPrefetch;
+ (BOOL)inverseIsToMany;
+ (id)keyPathFromPrimaryObject;
+ (BOOL)isToMany;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
