@class SCKStartupQueue, NSArray, SCKAsyncSerialQueue, NSMutableDictionary, NSObject, SCKDatabaseSchema;
@protocol OS_dispatch_queue, SCKContainerProxying, SCKDatabaseStoreCoordinator;

@interface SCKDatabase : NSObject <SCKDatabaseStoreCoordinatorObserver>

@property (retain, nonatomic) SCKDatabaseSchema *schema;
@property (retain, nonatomic) id<SCKDatabaseStoreCoordinator> storeCoordinator;
@property (retain, nonatomic) id<SCKContainerProxying> container;
@property (retain, nonatomic) NSArray *mergeHandlers;
@property (retain, nonatomic) SCKStartupQueue *startupQueue;
@property (retain, nonatomic) SCKAsyncSerialQueue *ckSyncQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSMutableDictionary *observersByZoneName;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } observersLock;
@property long long status;
@property (retain, nonatomic) NSMutableDictionary *zoneSnapshotsByZoneName;

- (id)initWithSchema:(id)a0 store:(id)a1 features:(long long)a2 mergeHandlers:(id)a3 containerProxy:(id)a4;
- (void)checkSyncingEnabledWithCompletion:(id /* block */)a0;
- (void)handleRemoteNotification:(id)a0 completion:(id /* block */)a1;
- (BOOL)t_flushChangesWithTimeout:(double)a0;
- (void)_createZoneInContainerWithSchema:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_saveZonesToContainer:(id)a0 allowRecoveryAttempt:(BOOL)a1 completion:(id /* block */)a2;
- (void)_runCKOperation:(id)a0;
- (id)initWithSchema:(id)a0 store:(id)a1 migrationPlan:(id)a2 containerProxy:(id)a3;
- (void)_enqueueStartupSequenceWithFeatures:(long long)a0;
- (id)_zonesNeedingSave;
- (void)_squashZoneForMerge:(id)a0 zoneStore:(id)a1;
- (void)modifyContentsOfZone:(id)a0 withCommand:(id)a1;
- (void)_fetchDatabaseAndZoneChangesWithCompletion:(id /* block */)a0;
- (void)readContentsOfZone:(id)a0 withBlock:(id /* block */)a1;
- (void)_recoverFromIdentityLossWithCompletion:(id /* block */)a0;
- (void)synchronize;
- (id)_zoneWithSchema:(id)a0 zoneStore:(id)a1;
- (id)_zonesNeedingFetch;
- (id)_emptyZonesNeedingFirstSync;
- (id)initWithSchema:(id)a0 store:(id)a1 features:(long long)a2 containerProxy:(id)a3;
- (void)pollForChangesWithCondition:(id)a0 completion:(id /* block */)a1;
- (void)addObserver:(id)a0 forZone:(id)a1;
- (id)_sanitizeErrorForClients:(id)a0;
- (void)storeCoordinatorDiscoveredExternalChanges:(id)a0;
- (void)_saveZoneToContainer:(id)a0 allowRecoveryAttempt:(BOOL)a1 completion:(id /* block */)a2;
- (void)_reloadSnapshotOfZone:(id)a0 fromStore:(id)a1;
- (void)_deleteAndRecreateAllZonesWithCompletion:(id /* block */)a0;
- (void)_fetchZoneChangesForZones:(id)a0 completion:(id /* block */)a1;
- (void)_fetchDatabaseChangesWithCompletion:(id /* block */)a0;
- (id)initWithSchema:(id)a0 store:(id)a1 migrationPlan:(id)a2 features:(long long)a3 containerProxy:(id)a4;
- (void)removeObserver:(id)a0 forZone:(id)a1;
- (void)savePendingChangesToServerWithCompletion:(id /* block */)a0;

@end
