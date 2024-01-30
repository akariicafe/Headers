@class NSXPCStoreConnectionManager, NSString, NSDictionary, NSSQLModel, NSSQLCore, NSXPCStoreNotificationObserver, NSGenerationalRowCache;

@interface NSXPCStore : NSIncrementalStore <NSSQLModelProvider, NSCoreDataKeyedArchivingDelegate> {
    NSDictionary *_metadata;
    NSGenerationalRowCache *_cache;
    NSString *_fileBackedFuturesDirectory;
    NSXPCStoreConnectionManager *_connectionManager;
    NSSQLModel *_model;
    NSSQLCore *_core;
    NSString *_sanityCheckToken;
    NSXPCStoreNotificationObserver *_observer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

@property (readonly, copy) NSString *remoteStoreChangedNotificationName;

+ (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
+ (void)initialize;
+ (id)archiver:(id)a0 willEncodeObject:(id)a1;
+ (BOOL)_allowCoreDataFutures;
+ (BOOL)_isOnExtendedTimeout;
+ (void)setDebugDefault:(int)a0;
+ (int)debugDefault;

- (id)reopenQueryGenerationWithIdentifier:(id)a0 error:(id *)a1;
- (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)a0 generation:(id)a1;
- (id)currentQueryGeneration;
- (void)willRemoveFromPersistentStoreCoordinator:(id)a0;
- (id)objectIDFactoryForEntity:(id)a0;
- (id)obtainPermanentIDsForObjects:(id)a0 error:(id *)a1;
- (id)initWithPersistentStoreCoordinator:(id)a0 configurationName:(id)a1 URL:(id)a2 options:(id)a3;
- (BOOL)_allowCoreDataFutures;
- (id)_storeInfoForEntityDescription:(id)a0;
- (id)ancillaryModels;
- (id)_newObjectIDForEntityDescription:(id)a0 pk:(long long)a1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)a0 generation:(id)a1;
- (Class)_objectIDClass;
- (BOOL)loadMetadata:(id *)a0;
- (id)fileBackedFuturesDirectory;
- (id)currentChangeToken;
- (void)freeQueryGenerationWithIdentifier:(id)a0;
- (id)newValuesForObjectWithID:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)_rawMetadata__;
- (BOOL)_hasActiveGenerations;
- (BOOL)load:(id *)a0;
- (id)executeRequest:(id)a0 withContext:(id)a1 error:(id *)a2;
- (void)_setMetadata:(id)a0 includeVersioning:(BOOL)a1;
- (BOOL)supportsGenerationalQuerying;
- (id)newForeignKeyID:(long long)a0 entity:(id)a1;
- (id)newValueForRelationship:(id)a0 forObjectWithID:(id)a1 withContext:(id)a2 error:(id *)a3;
- (BOOL)supportsConcurrentRequestHandling;
- (id)sqlCore;
- (id)connectionManager;
- (void)setMetadata:(id)a0;
- (id)metadata;
- (Class)objectIDFactoryForSQLEntity:(id)a0;
- (id)model;
- (void)setURL:(id)a0;
- (id)ancillarySQLModels;
- (id)type;
- (void)dealloc;
- (void)setIdentifier:(id)a0;

@end
