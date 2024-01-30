@class NSObject;
@protocol OS_dispatch_queue;

@interface CKDMetadataCache : CKSQLite

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)dbFileName;
+ (id)sharedCache;

- (id)containerInfoForContainerID:(id)a0 accountID:(id)a1;
- (void)setApplicationMetadata:(id)a0 forApplicationID:(id)a1;
- (void).cxx_destruct;
- (void)removeContainerID:(id)a0;
- (void)setDateOfLastTokenUpdate:(id)a0;
- (id)publicKeyOfType:(id)a0 withIdentifier:(id)a1;
- (id)applicationMetadataForApplicationID:(id)a0;
- (id)appContainerIntersectionMetadataForAppContainerAccountTuple:(id)a0;
- (id)knownApplicationBundleIDs;
- (void)setAppContainerIntersectionMetadata:(id)a0 forAppContainerAccountTuple:(id)a1;
- (id)knownAppContainerTuplesForAccountID:(id)a0;
- (id)dateOfLastTokenUpdate;
- (void)inlock_expungeDataForAccountID:(id)a0;
- (void)expungeOldData;
- (id)_initWithCacheDir:(id)a0;
- (id)cachedDSIDForAccountID:(id)a0;
- (id)knownContainerizedApplicationBundleIDs;
- (void)willCreateDatabase;
- (id)globalConfiguration;
- (void)setPublicKey:(id)a0 ofType:(id)a1 withIdentifier:(id)a2;
- (void)expungeDataForAccountID:(id)a0;
- (void)expungeAllData;
- (void)removeKnownApplicationID:(id)a0;
- (void)setGlobalConfiguration:(id)a0;
- (void)setPushToken:(id)a0 forAppContainerAccountTuple:(id)a1;
- (id)inlock_containerInfoForContainerID:(id)a0 accountID:(id)a1;
- (id)inlock_applicationMetadataForApplicationID:(id)a0;
- (void)expungeStaleAccountIDs;
- (void)setContainerInfo:(id)a0 forContainerID:(id)a1 accountID:(id)a2;
- (void)setCachedDSID:(id)a0 forAccountID:(id)a1;
- (void)inlock_setDateOfLastTokenUpdate:(id)a0;
- (id)pushTokenForAppContainerAccountTuple:(id)a0 filterOldTokens:(BOOL)a1;
- (id)knownAppContainerAccountTuples;

@end
