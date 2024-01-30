@class RTProximityEventStore, NSString, RTTimer, RTDefaultsManager, NSObject, RTPDiscoveryContactRecord, CLLocationManagerGathering, RTTimerManager;
@protocol OS_dispatch_queue;

@interface RTPDiscoveryProvider : RTService <RTPDiscoveryContactRecordObserver>

@property (retain, nonatomic) RTPDiscoveryContactRecord *contactRecord;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTProximityEventStore *proximityEventStore;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTTimer *backupTimer;
@property (retain, nonatomic) CLLocationManagerGathering *advertisementManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *adv_queue;
@property (nonatomic) BOOL available;
@property (nonatomic) BOOL hasLoadedPersistedRecords;
@property (nonatomic) double expirationInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)computeAdvMetrics:(long long)a0 identities:(id)a1 numOfResolvedAdvs:(long long)a2;

- (void)fetchPCountEventsHistory:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setup;
- (void)fetchProximityHistoryFromEventIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchProximityHistoryFromStartDate:(id)a0 endDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_addProximityEvent:(id)a0 handler:(id /* block */)a1;
- (void)_armNewInteractionsTimer;
- (void)_didCloseProximityEvent:(id)a0;
- (id)_fetchAllIdentities;
- (void)_fetchAndReconcileAdvertisements;
- (void)_fetchPCountEventsHistory:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchProximityHistoryFromEventIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchProximityHistoryFromStartDate:(id)a0 endDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)_loadAndMergeContactRecords;
- (void)_monitorProximityEvents;
- (BOOL)_resolveIdentity:(id)a0 identities:(id)a1;
- (void)_updateDateContext:(id)a0 isStartDate:(BOOL)a1 relationship:(long long)a2;
- (void)addProximityEvent:(id)a0 handler:(id /* block */)a1;
- (void)clearProximityEvents:(id /* block */)a0;
- (void)didCloseProximityEvent:(id)a0;
- (id)getStoreURL;
- (id)initWithDefaultManager:(id)a0 proximityEventStore:(id)a1 advertisementManager:(id)a2 timerManager:(id)a3;
- (id)initWithDefaultManager:(id)a0 proximityEventStore:(id)a1 timerManager:(id)a2;
- (void)injectAdv:(id)a0 handler:(id /* block */)a1;
- (id)loadContactRecord;
- (void)onProximityStoreNotification:(id)a0;
- (void)saveContactRecord;

@end
