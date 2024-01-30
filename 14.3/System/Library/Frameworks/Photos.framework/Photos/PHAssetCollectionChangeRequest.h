@class PHObjectPlaceholder, PHRelationshipChangeRequestHelper, NSString, PHAssetCollection, NSManagedObjectID;

@interface PHAssetCollectionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (retain, nonatomic) PHAssetCollection *originalAssetCollection;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *assetsHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *customKeyAssetHelper;
@property (nonatomic) unsigned int customSortKey;
@property (nonatomic) BOOL customSortAscending;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedAssetCollection;
@property (retain, nonatomic) NSString *title;
@property (readonly) BOOL isNewRequest;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)validateAssetCollectionTitle:(id)a0 error:(id *)a1;
+ (void)deleteAssetCollections:(id)a0;
+ (id)_changeRequestForAssetCollection:(id)a0 optionalAssets:(id)a1;
+ (id)changeRequestForAssetCollection:(id)a0;
+ (id)changeRequestForAssetCollection:(id)a0 assets:(id)a1;
+ (id)creationRequestForAssetCollectionWithTitle:(id)a0;
+ (void)expungeAssetCollections:(id)a0;
+ (id)creationRequestForAssetCollectionCopyFromAssetCollection:(id)a0;
+ (void)undeleteAssetCollections:(id)a0;
+ (void)_deleteAssetCollections:(id)a0 withOperation:(long long)a1 topLevelSelector:(SEL)a2;

- (void)encodeToXPCDict:(id)a0;
- (void)removeAssetsAtIndexes:(id)a0;
- (void)insertAssets:(id)a0 atIndexes:(id)a1;
- (void)addAssets:(id)a0;
- (void)removeAssets:(id)a0;
- (void).cxx_destruct;
- (void)_prepareKeyAssetIDIfNeeded;
- (void)moveAssetsAtIndexes:(id)a0 toIndex:(unsigned long long)a1;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (void)_prepareWithFetchResult:(id)a0;
- (void)_prepareAssetIDsIfNeeded;
- (BOOL)validateInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (BOOL)isPinned;
- (BOOL)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (id)_mutableKeyAssetObjectIDsAndUUIDs;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (void)setIsPinned:(BOOL)a0;
- (void)removeAsset:(id)a0;
- (void)replaceAssetsAtIndexes:(id)a0 withAssets:(id)a1;
- (void)setCustomKeyAsset:(id)a0;
- (void)_setOriginalAssetCollection:(id)a0;
- (id)_mutableAssetsObjectIDsAndUUIDs;
- (void)insertAsset:(id)a0 inAssetsAtIndex:(unsigned long long)a1;
- (void)removeAssetFromAssetsAtIndex:(unsigned long long)a0;
- (void)replaceAssetInAssetsAtIndex:(unsigned long long)a0 withAsset:(id)a1;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (BOOL)validateMutationsToManagedObject:(id)a0 error:(id *)a1;
- (id)initForNewObject;
- (void)addAsset:(id)a0;

@end
