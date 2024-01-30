@class NSSet, NSPersistentStoreMap;

@interface NSMappedObjectStore : NSPersistentStore {
    NSPersistentStoreMap *_theMap;
    NSSet *_entitiesToFetch;
}

+ (BOOL)setMetadata:(id)a0 forPersistentStoreWithURL:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)metadataForPersistentStoreWithURL:(id)a0 options:(id)a1 error:(id *)a2;

- (id)obtainPermanentIDsForObjects:(id)a0 error:(id *)a1;
- (id)initWithPersistentStoreCoordinator:(id)a0 configurationName:(id)a1 URL:(id)a2 options:(id)a3;
- (id)identifier;
- (id)newValuesForObjectWithID:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)_rawMetadata__;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)a0;
- (id)executeRequest:(id)a0 withContext:(id)a1 error:(id *)a2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)a0;
- (id)newValueForRelationship:(id)a0 forObjectWithID:(id)a1 withContext:(id)a2 error:(id *)a3;
- (void)setMetadata:(id)a0;
- (id)metadata;
- (void)saveDocumentToPath:(id)a0;
- (id)init;
- (void)dealloc;

@end
