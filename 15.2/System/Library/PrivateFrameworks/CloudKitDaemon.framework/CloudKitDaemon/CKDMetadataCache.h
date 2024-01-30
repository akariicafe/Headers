@class NSObject;
@protocol OS_dispatch_queue;

@interface CKDMetadataCache : CKDSQLiteCache

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)dbFileName;
+ (id)cacheDatabaseSchema;
+ (id)sharedCache;

- (void)setCachedDSID:(id)a0 forAccountID:(id)a1;
- (void)resetThrottles;
- (void)willCreateDatabase;
- (id)globalConfiguration;
- (void)removeThrottle:(id)a0;
- (id)knownApplicationIDs;
- (void)addThrottle:(id)a0;
- (void)expungeAllData;
- (id)cachedDSIDForAccountID:(id)a0;
- (id)initWithCacheDir:(id)a0;
- (void)expungeStaleAccountIDs;
- (id)knownAppContainerTuples;
- (id)containerServerInfoForContainerID:(id)a0 accountID:(id)a1;
- (id)knownAppContainerAccountTuples;
- (id)throttles;
- (id)appContainerAccountMetadataForAppContainerAccountTuple:(id)a0;
- (void)setGlobalConfiguration:(id)a0;
- (void)setPublicKey:(id)a0 ofType:(id)a1 withIdentifier:(id)a2;
- (void)removeKnownApplicationID:(id)a0;
- (void)setPushToken:(id)a0 forAppContainerAccountTuple:(id)a1;
- (void)setApplicationMetadata:(id)a0 forApplicationID:(id)a1;
- (id)inlock_applicationMetadataForApplicationID:(id)a0;
- (id)applicationMetadataForApplicationID:(id)a0;
- (id)dateOfLastTokenUpdate;
- (id)pushTokenForAppContainerAccountTuple:(id)a0 filterOldTokens:(BOOL)a1;
- (void)expungeOldData;
- (void)inlock_setDateOfLastTokenUpdate:(id)a0;
- (void).cxx_destruct;
- (id)inlock_containerServerInfoForContainerID:(id)a0 accountID:(id)a1;
- (id)knownAppContainerAccountTuplesForAccountID:(id)a0;
- (void)setContainerServerInfo:(id)a0 forContainerID:(id)a1 accountID:(id)a2;
- (id)knownContainerizedApplicationIDs;
- (void)expungeDataForAccountID:(id)a0;
- (void)inlock_expungeDataForAccountID:(id)a0;
- (id)publicKeyOfType:(id)a0 withIdentifier:(id)a1;
- (void)setAppContainerAccountMetadata:(id)a0 forAppContainerAccountTuple:(id)a1;
- (void)removeContainerID:(id)a0;
- (void)setDateOfLastTokenUpdate:(id)a0;

@end
