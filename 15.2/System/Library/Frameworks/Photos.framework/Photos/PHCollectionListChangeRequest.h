@class PHObjectPlaceholder, NSString, PHRelationshipChangeRequestHelper, PHCollectionList, NSManagedObjectID;

@interface PHCollectionListChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    PHCollectionList *_originalCollectionList;
}

@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *collectionsHelper;
@property (nonatomic) unsigned int customSortKey;
@property (nonatomic) BOOL customSortAscending;
@property (nonatomic) BOOL isTopLevelUserCollection;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedCollectionList;
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

+ (id)_changeRequestForCollectionList:(id)a0 optionalChildCollections:(id)a1;
+ (id)changeRequestForCollectionList:(id)a0;
+ (id)changeRequestForCollectionList:(id)a0 childCollections:(id)a1;
+ (void)deleteCollectionLists:(id)a0;
+ (id)changeRequestForTopLevelCollectionListUserCollections:(id)a0;
+ (id)creationRequestForCollectionListWithTitle:(id)a0;
+ (void)expungeCollectionLists:(id)a0;
+ (void)undeleteCollectionLists:(id)a0;
+ (void)_deleteCollectionLists:(id)a0 withOperation:(long long)a1 topLevelSelector:(SEL)a2;

- (void)encodeToXPCDict:(id)a0;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (void).cxx_destruct;
- (BOOL)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (void)addChildCollection:(id)a0;
- (id)initForNewObject;
- (void)_setOriginalCollectionList:(id)a0;
- (void)_prepareWithFetchResult:(id)a0;
- (void)_prepareAssetIDsIfNeeded;
- (void)insertChildCollection:(id)a0 inChildCollectionsAtIndex:(unsigned long long)a1;
- (void)removeChildCollectionFromChildCollectionsAtIndex:(unsigned long long)a0;
- (void)insertChildCollections:(id)a0 atIndexes:(id)a1;
- (void)removeChildCollectionsAtIndexes:(id)a0;
- (void)replaceChildCollectionsAtIndex:(unsigned long long)a0 withChildCollection:(id)a1;
- (void)replaceChildCollectionsAtIndexes:(id)a0 withChildCollections:(id)a1;
- (void)moveChildCollectionsAtIndexes:(id)a0 toIndex:(unsigned long long)a1;
- (void)removeChildCollection:(id)a0;
- (void)addChildCollections:(id)a0;
- (void)removeChildCollections:(id)a0;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (id)_mutableObjectIDsAndUUIDs;

@end
