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

- (BOOL)load:(id *)a0;
- (id)executeRequest:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)_rawMetadata__;
- (id)obtainPermanentIDsForObjects:(id)a0 error:(id *)a1;
- (id)cacheNodes;
- (BOOL)save:(id *)a0;
- (id)initWithPersistentStoreCoordinator:(id)a0 configurationName:(id)a1 URL:(id)a2 options:(id)a3;
- (id)newValuesForObjectWithID:(id)a0 withContext:(id)a1 error:(id *)a2;
- (void)_preflightCrossCheck;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)a0;
- (void)_didLoadMetadata;
- (id)referenceObjectForObjectID:(id)a0;
- (id)newValueForRelationship:(id)a0 forObjectWithID:(id)a1 withContext:(id)a2 error:(id *)a3;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)a0;
- (void)setMetadata:(id)a0;
- (id)objectIDForEntity:(id)a0 referenceObject:(id)a1;
- (void)updateCacheNode:(id)a0 fromManagedObject:(id)a1;
- (id)metadata;
- (id)newReferenceObjectForManagedObject:(id)a0;
- (void)willRemoveCacheNodes:(id)a0;
- (id)cacheNodeForObjectID:(id)a0;
- (id)newCacheNodeForManagedObject:(id)a0;
- (void)dealloc;
- (void)addCacheNodes:(id)a0;
- (id)init;

@end
