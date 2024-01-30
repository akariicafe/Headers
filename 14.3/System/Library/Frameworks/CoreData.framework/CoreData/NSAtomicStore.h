@class NSMutableDictionary;

@interface NSAtomicStore : NSPersistentStore {
    NSMutableDictionary *_nodeCache;
    NSMutableDictionary *_entityCache;
    NSMutableDictionary *_storeMetadata;
    long long _nextReference;
    void *_reserved4;
    void *_reserved5;
}

+ (void)initialize;
+ (id)metadataForPersistentStoreWithURL:(id)a0 error:(id *)a1;

- (void)_preflightCrossCheck;
- (id)newValueForRelationship:(id)a0 forObjectWithID:(id)a1 withContext:(id)a2 error:(id *)a3;
- (BOOL)save:(id *)a0;
- (id)_rawMetadata__;
- (id)obtainPermanentIDsForObjects:(id)a0 error:(id *)a1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)a0;
- (void)_didLoadMetadata;
- (void)setMetadata:(id)a0;
- (BOOL)load:(id *)a0;
- (id)executeRequest:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)newValuesForObjectWithID:(id)a0 withContext:(id)a1 error:(id *)a2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)a0;
- (void)willRemoveCacheNodes:(id)a0;
- (id)init;
- (id)executeSaveChangesRequest:(id)a0 withContext:(id)a1;
- (void)_addObject:(id)a0;
- (void)_storeNextReferenceInMetadata;
- (void)updateCacheNode:(id)a0 fromManagedObject:(id)a1;
- (id)objectIDForEntity:(id)a0 referenceObject:(id)a1;
- (void)dealloc;
- (void)_deleteNodeFromEntityCache:(id)a0;
- (id)metadata;
- (id)newCacheNodeForManagedObject:(id)a0;
- (id)_retrieveNodeForObjectID:(id)a0;
- (id)initWithPersistentStoreCoordinator:(id)a0 configurationName:(id)a1 URL:(id)a2 options:(id)a3;
- (void)_removeObject:(id)a0;
- (void)_deleteNodeFromMainCache:(id)a0;
- (id)_retrieveNodesSatisfyingRequest:(id)a0;
- (id)cacheNodeForObjectID:(id)a0;
- (id)referenceObjectForObjectID:(id)a0;
- (id)cacheNodes;
- (void)addCacheNodes:(id)a0;
- (id)_retainedObjectIDForEntity:(id)a0 referenceObject:(id)a1;
- (id)executeCountRequest:(id)a0 withContext:(id)a1;
- (void)_insertNodeIntoEntityCache:(id)a0;
- (id)newReferenceObjectForManagedObject:(id)a0;
- (void)_insertNodeIntoMainCache:(id)a0;
- (void)_updateObject:(id)a0;
- (id)_retrieveNodeForObject:(id)a0;
- (id)executeFetchRequest:(id)a0 withContext:(id)a1;
- (id)_getNewIDForObject:(id)a0;
- (void)_registerCacheNode:(id)a0;

@end
