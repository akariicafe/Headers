@class MSVSQLDatabase, NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface MPServerObjectDatabase : NSObject <MPMediaKitEntityRelationshipPayloadProvider>

@property (class, nonatomic) BOOL prefersInMemoryDatabase;
@property (class, readonly, nonatomic) MPServerObjectDatabase *sharedServerObjectDatabase;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) MSVSQLDatabase *database;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_assetsMatchingIdentifierSet:(id)a0 query:(id)a1;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)assetsWithMiniSINFsMatchingIdentifierSet:(id)a0;
- (id)_initWithDatabaseCreationBlock:(id /* block */)a0;
- (id)payloadForRelatedEntityWithIdentifierSet:(id)a0;
- (id)assetsMatchingIdentifierSet:(id)a0;
- (id)relatedIdentifierSetsForParentIdentifierSet:(id)a0 childKey:(id)a1;
- (id)modelObjectMatchingIdentifierSet:(id)a0 propertySet:(id)a1;
- (id)importObjectsFromRequest:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)enumerateAssetsMissingSINFsForHashedPersonID:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)importAssetsFromRequest:(id)a0 error:(id *)a1;
- (BOOL)_createDatabaseSchema;

@end
