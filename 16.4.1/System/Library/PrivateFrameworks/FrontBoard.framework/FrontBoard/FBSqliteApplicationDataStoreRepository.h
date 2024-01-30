@class NSString, BSSqliteDatabaseConnection, NSURL, NSObject;
@protocol OS_dispatch_queue, FBApplicationDataStoreRepositoryDelegate;

@interface FBSqliteApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository> {
    NSURL *_storeURL;
    NSObject<OS_dispatch_queue> *_dbQueue;
    BSSqliteDatabaseConnection *_dbQueue_dbConnection;
    unsigned long long _dbQueue_batchDepth;
    int _dbQueue_firstUnlockToken;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (weak, nonatomic) id<FBApplicationDataStoreRepositoryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_objectRequiresSerialization:(id)a0;
+ (id)_generateParameterizedQuery:(id)a0 forKeyList:(id)a1 outBindings:(id *)a2;
+ (id)_objectForResultRow:(id)a0 index:(unsigned long long)a1;

- (id)objectForKey:(id)a0 forApplication:(id)a1;
- (BOOL)_dbQueue_containsKey:(id)a0 forApplication:(id)a1;
- (BOOL)_isEligibleForSaving:(id)a0;
- (void)_dbQueue_notifyDelegateOfStoreInvalidationForIdentifier:(id)a0;
- (BOOL)_dbQueue_executeStatement:(id)a0 bindings:(id)a1 resultRowHandler:(id /* block */)a2 error:(out id *)a3;
- (BOOL)_inAlternateSystemApp;
- (BOOL)_dbQueue_executeStatement:(id)a0 bindings:(id)a1 resultRowHandler:(id /* block */)a2;
- (long long)_dbQueue_databaseVersion;
- (id)keysForApplication:(id)a0;
- (id)_dbQueue_objectsForKeys:(id)a0;
- (void)removeObjectForKey:(id)a0 forApplication:(id)a1;
- (id)urlByAppendingString:(id)a0 toURL:(id)a1;
- (void)removeObjectsForKeys:(id)a0 forApplication:(id)a1;
- (BOOL)_dbQueue_truncateDamagedDatabase;
- (void)_dbQueue_createTables;
- (id)initWithStorePath:(id)a0;
- (id)_dbQueue_keysForApplication:(id)a0;
- (void)_dbQueue_performWithSavepoint:(id)a0 handler:(id /* block */)a1;
- (void)_dbQueue_notifyDelegateOfChangeForKeys:(id)a0 application:(id)a1;
- (id)_dbQueue_applicationIdentifiersWithState;
- (id)_dbQueue_openDatabase;
- (void)_dbQueue_notifyDelegateOfLateLoad;
- (void)dealloc;
- (BOOL)containsKey:(id)a0 forApplication:(id)a1;
- (void)_dbQueue_load;
- (id)applicationIdentifiersWithState;
- (void)close;
- (BOOL)_preserveFileAtURL:(id)a0;
- (id)_dbQueue_objectForKey:(id)a0 forApplication:(id)a1;
- (void)flushSynchronously;
- (BOOL)_dbQueue_loadDatabase;
- (BOOL)_dbQueue_tryPreserveDamagedDatabase;
- (id)allObjectsForKeys:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 forApplication:(id)a2;
- (void)beginBatchedUpdate;
- (void)removeAllObjectsForApplication:(id)a0;
- (void)endBatchedUpdate;
- (void).cxx_destruct;
- (BOOL)_dbQueue_databaseIntegrityCheck;

@end
