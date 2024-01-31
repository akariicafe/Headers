@class NSDictionary;

@interface NSIncrementalStore : NSPersistentStore {
    NSDictionary *_storeMetadata;
    unsigned long long _lastIdentifier;
    void *_reserveda;
    void *_reservedb;
}

+ (id)identifierForNewStoreAtURL:(id)a0;
+ (id)metadataForPersistentStoreWithURL:(id)a0 error:(id *)a1;
+ (BOOL)setMetadata:(id)a0 forPersistentStoreWithURL:(id)a1 error:(id *)a2;

- (BOOL)load:(id *)a0;
- (id)_rawMetadata__;
- (BOOL)loadMetadata:(id *)a0;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)a0;
- (id)executeRequest:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)newValueForRelationship:(id)a0 forObjectWithID:(id)a1 withContext:(id)a2 error:(id *)a3;
- (id)obtainPermanentIDsForObjects:(id)a0 error:(id *)a1;
- (BOOL)_prepareForExecuteRequest:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)newValuesForObjectWithID:(id)a0 withContext:(id)a1 error:(id *)a2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)a0;
- (void)_preflightCrossCheck;
- (void)dealloc;
- (id)_newObjectIDForEntityDescription:(id)a0 pk:(long long)a1;
- (void)setMetadata:(id)a0;
- (id)referenceObjectForObjectID:(id)a0;
- (id)newObjectIDForEntity:(id)a0 referenceObject:(id)a1;
- (id)metadata;
- (void)_setMetadata:(id)a0 includeVersioning:(BOOL)a1;

@end
