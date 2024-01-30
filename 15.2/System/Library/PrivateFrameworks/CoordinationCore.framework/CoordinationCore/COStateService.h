@class NSArray, NSDictionary, COEndpointMonitor, NSString, NSUserDefaults;

@interface COStateService : COService <COStateAddOnDelegate, COEndpointMonitorDelegate, COStateManagerServiceInterface>

@property (copy, nonatomic) NSDictionary *connectedClients;
@property (readonly, nonatomic) NSUserDefaults *SoundBoardDefaults;
@property (copy, nonatomic) NSArray *mediaObservers;
@property (copy, nonatomic) NSArray *roleObservers;
@property (copy, nonatomic) COEndpointMonitor *endpointMonitor;
@property (nonatomic) double doorbellDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceWithDelegate:(id)a0;

- (void)registerForMediaSystemLeaderChange;
- (void)stateForAddOn:(id)a0 withCallback:(id /* block */)a1;
- (void)_notifyRoleObserver:(id)a0 roleOfMember:(id)a1 inCluster:(id)a2 didChangeTo:(id)a3;
- (void)removeKeyPaths:(id)a0 clusters:(id)a1 withCallback:(id /* block */)a2;
- (void)doorbellDelayWithCallback:(id /* block */)a0;
- (void)setDictionary:(id)a0 clusters:(id)a1 withCallback:(id /* block */)a2;
- (void)requestCompositionForCluster:(id)a0 withCallback:(id /* block */)a1;
- (void)checkinClientWithSuite:(id)a0 clusters:(id)a1 withCallback:(id /* block */)a2;
- (void)addOn:(id)a0 receivedUpdates:(id)a1 removals:(id)a2;
- (id)_roleForCurrentDevice;
- (void)unregisterForRoleChangesOfMember:(id)a0 inCluster:(id)a1;
- (void)_addOnAdded:(id)a0;
- (void)_clientLost:(id)a0;
- (void)isMediaSystemLeader:(id /* block */)a0;
- (id)_stateSetByClientsForSuite:(id)a0 cluster:(id)a1;
- (void).cxx_destruct;
- (void)addObserverWithPredicate:(id)a0;
- (void)registerForRoleChangesOfMember:(id)a0 inCluster:(id)a1;
- (void)unregisterForMediaSystemLeaderChange;
- (id)_roleForMember:(id)a0 inCluster:(id)a1;
- (void)_setIsWriting:(BOOL)a0 forClient:(id)a1;
- (void)_informClientsOfUpdates:(id)a0 removals:(id)a1 inCluster:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_notifyRoleObservers;
- (void)dealloc;
- (void)removeObserverWithPredicate:(id)a0;
- (BOOL)isMediaSystemLeader;
- (void)endpointAvailableInHomeChanged:(BOOL)a0;
- (void)_addOnRemoved:(id)a0;
- (void)_cleanupDisconnectedClient:(id)a0;
- (void)_configureServiceInterfacesOnConnection:(id)a0;
- (id)initWithListenerProvider:(id)a0 addOnProvider:(id)a1 delegate:(id)a2;

@end
