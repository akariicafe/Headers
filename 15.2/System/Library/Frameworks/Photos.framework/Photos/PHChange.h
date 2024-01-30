@class NSManagedObjectContext, NSArray, NSSet, NSMutableDictionary, NSDictionary, PHPersistentChangeToken, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface PHChange : NSObject {
    NSSet *_insertedObjectIDs;
    NSSet *_changedObjectIDs;
    NSSet *_deletedObjectIDs;
    NSDictionary *_changedAttributesByOID;
    NSDictionary *_changedRelationshipsByOID;
    NSMutableDictionary *_updatedObjectsChangedAttributesByEntityName;
    NSMutableDictionary *_updatedObjectsChangedRelationshipsByEntityName;
    NSArray *_changedObjectIDsArray;
    NSMutableDictionary *_changeDetailsForObjects;
    NSMutableDictionary *_collectionChangeDetailsForObjects;
    NSObject<OS_dispatch_queue> *_changeDetailIsolation;
    NSMapTable *_changeHandlingMap;
    BOOL _unknownMergeEvent;
    NSMutableDictionary *_objectIDsByLocalIdentifier;
}

@property (readonly, nonatomic) NSManagedObjectContext *context;
@property (readonly, nonatomic) NSDictionary *deletedUuidsByObjectId;
@property (readonly, nonatomic) BOOL hasIncrementalChanges;
@property (readonly, nonatomic) PHPersistentChangeToken *changeToken;
@property (readonly, nonatomic) unsigned long long totalChangeCount;

+ (id)mergePersistedChanges:(id)a0;
+ (void)pl_simulateChangeWithAssetContainerList:(id)a0 photoLibrary:(id)a1 handler:(id /* block */)a2;
+ (id)handlerQueue;

- (BOOL)highlightGroupRelationshipChangedForPhotosHighlightWithIdentifier:(id)a0;
- (id)changeDetailsForObject:(id)a0;
- (id)updatedObjectIDs;
- (id)initWithInsertedObjectIDs:(id)a0 updatedObjectIDs:(id)a1 deletedObjectIDs:(id)a2 deletedUuidsByObjectId:(id)a3 changedAttributesByOID:(id)a4 changedRelationshipsByOID:(id)a5 unknownMergeEvent:(BOOL)a6 changeToken:(id)a7 managedObjectContext:(id)a8;
- (void)preloadSimulatedChangeDetailsForManualFetchResults:(id)a0 handler:(id /* block */)a1;
- (id)insertedObjectIDs;
- (id)changedLocalIdentifiersForEntityClass:(Class)a0 context:(id)a1;
- (BOOL)keyFaceChangedForPersonOID:(id)a0;
- (BOOL)assetCloudLocalStateChangedForAsset:(id)a0;
- (id)_formatedDeletedUUidsByObjectId;
- (id)changedPropertyNamesForObject:(id)a0;
- (id)_propertyNamesForObjectID:(id)a0 entityClass:(Class)a1;
- (id)changedRelationshipNamesForObject:(id)a0;
- (BOOL)trashedStateChangedForPHAssetOID:(id)a0;
- (id)deletedObjectIDs;
- (BOOL)intersectsWithDetectionCriteria:(id)a0 managedObjectContext:(id)a1;
- (BOOL)userCuratedAssetsChangedForPHMemoryOID:(id)a0;
- (id)description;
- (void)preloadChangeDetailsForFetchResults:(id)a0 inManagedObjectContext:(id)a1 handler:(id /* block */)a2;
- (id)_formatEncodedDictionary:(id)a0 withDecodeBlock:(id /* block */)a1;
- (id)changedAttributesByOID;
- (BOOL)userFeedbackRelationshipChangedForObject:(id)a0;
- (BOOL)anyUpdatedObjectsWithChangedAttributes:(unsigned long long)a0 ofEntity:(id)a1;
- (id)fetchUUIDMapForObjectIDs:(id)a0 entityClass:(Class)a1 context:(id)a2;
- (BOOL)keyAssetsChangedForPHAssetCollectionOID:(id)a0;
- (id)initWithChangedIdentifiers:(id)a0 unknownMergeEvent:(BOOL)a1 changeToken:(id)a2;
- (id)changeDetailsForFetchResult:(id)a0;
- (void).cxx_destruct;
- (BOOL)hiddenStateChangedForPHAssetOID:(id)a0;
- (BOOL)packedBadgeAttributesChangedForPHAssetOID:(id)a0;
- (id)init;
- (id)changedRelationshipsByOID;
- (BOOL)containsChangesForEntityClass:(Class)a0;
- (id)_preloadChangeDetailsWithRefetchForFetchResults:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)contentOrThumbnailChangedForAsset:(id)a0;
- (id)_preloadChangeDetailsWithClearCacheForFetchResults:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)contentOrThumbnailChangedForPHAssetOID:(id)a0;
- (id)changedPropertyNamesForLocalIdentifier:(id)a0 entityClass:(Class)a1;
- (BOOL)momentRelationshipChangedForPhotosHighlightWithIdentifier:(id)a0;
- (BOOL)favoriteStateChangedForPHAssetOID:(id)a0;
- (id)_pl_prettyDescriptionWithIndent:(long long)a0;
- (BOOL)personRelationshipChangedForFaceWithLocalIdentifier:(id)a0;
- (BOOL)hasRelationshipChangesForLocalIdentifier:(id)a0;
- (id)_relationshipNamesForObjectID:(id)a0 entityClass:(Class)a1;
- (id)changedLocalIdentifiersForEntityClass:(Class)a0;
- (void)_prepareCachedValuesForEntity:(id)a0;
- (BOOL)anyUpdatedObjectsWithChangedRelationships:(unsigned long long)a0 ofEntity:(id)a1;
- (BOOL)faceRelationshipChangedForPersonWithLocalIdentifier:(id)a0;
- (id)initWithChangedIdentifiers:(id)a0 unknownMergeEvent:(BOOL)a1;
- (id)changedRelationshipNamesForLocalIdentifier:(id)a0 entityClass:(Class)a1;

@end
