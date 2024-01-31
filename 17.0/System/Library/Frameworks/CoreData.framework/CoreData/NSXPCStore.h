@class NSString, NSSQLCore, NSXPCStoreNotificationObserver, NSGenerationalRowCache, NSDictionary, NSXPCStoreConnectionManager, NSObject, NSSQLModel;
@protocol OS_dispatch_semaphore;

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
    NSDictionary *_ancillaryModels;
    NSDictionary *_ancillarySQLModels;
    int _outstandingRequests;
    NSObject<OS_dispatch_semaphore> *_requestTerminationSem;
}

@property (readonly, copy) NSString *remoteStoreChangedNotificationName;

+ (BOOL)_isOnExtendedTimeout;
+ (void)initialize;
+ (void)setDebugDefault:(int)a0;
+ (BOOL)_allowCoreDataFutures;
+ (id)archiver:(id)a0 willEncodeObject:(id)a1;
+ (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
+ (int)debugDefault;

- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)a0 generation:(id)a1;
- (id)objectIDFactoryForEntity:(id)a0;
- (id)currentQueryGeneration;
- (BOOL)load:(id *)a0;
- (Class)_objectIDClass;
- (id)_storeInfoForEntityDescription:(id)a0;
- (void)willRemoveFromPersistentStoreCoordinator:(id)a0;
- (id)_rawMetadata__;
- (id)initWithPersistentStoreCoordinator:(id)a0 configurationName:(id)a1 URL:(id)a2 options:(id)a3;
- (BOOL)loadMetadata:(id *)a0;
- (id)ancillaryModels;
- (void)freeQueryGenerationWithIdentifier:(id)a0;
- (id)executeRequest:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)currentChangeToken;
- (BOOL)supportsConcurrentRequestHandling;
- (id)newValueForRelationship:(id)a0 forObjectWithID:(id)a1 withContext:(id)a2 error:(id *)a3;
- (id)reopenQueryGenerationWithIdentifier:(id)a0 error:(id *)a1;
- (id)obtainPermanentIDsForObjects:(id)a0 error:(id *)a1;
- (BOOL)supportsGenerationalQuerying;
- (BOOL)_hasActiveGenerations;
- (id)newValuesForObjectWithID:(id)a0 withContext:(id)a1 error:(id *)a2;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)a0 generation:(id)a1;
- (void)_prepareStoreForRemovalFromCoordinator:(id)a0;
- (void)dealloc;
- (id)model;
- (Class)objectIDFactoryForSQLEntity:(id)a0;
- (void)setIdentifier:(id)a0;
- (id)_newObjectIDForEntityDescription:(id)a0 pk:(long long)a1;
- (void)setMetadata:(id)a0;
- (id)ancillarySQLModels;
- (BOOL)_allowCoreDataFutures;
- (id)newObjectIDForEntity:(id)a0 pk:(long long)a1;
- (id)newForeignKeyID:(long long)a0 entity:(id)a1;
- (id)connectionManager;
- (id)metadata;
- (void)_setMetadata:(id)a0 includeVersioning:(BOOL)a1;
- (id)sqlCore;
- (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
- (void)setURL:(id)a0;
- (id)type;
- (id)fileBackedFuturesDirectory;

@end
