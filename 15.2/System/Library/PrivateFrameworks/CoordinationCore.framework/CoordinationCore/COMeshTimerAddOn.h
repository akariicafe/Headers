@class NSArray, COTimerReadRequest, NSDictionary, COHomeHubAdapter, COHomeKitAdapter, MTTimerManager;
@protocol COMeshTimerAddOnDelegate;

@interface COMeshTimerAddOn : COMeshAddOn {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) MTTimerManager *observedTimerManager;
@property (readonly, nonatomic) BOOL performsLocalActions;
@property (readonly, nonatomic) COHomeKitAdapter *homekit;
@property (readonly, nonatomic) COHomeHubAdapter *homehub;
@property (copy, nonatomic) NSArray *deletes;
@property (copy, nonatomic) NSArray *mergingNodes;
@property (retain, nonatomic) COTimerReadRequest *mergeRequest;
@property (retain, nonatomic) NSDictionary *mergeResponses;
@property (copy, nonatomic) NSArray *queuedCommands;
@property (weak, nonatomic) id<COMeshTimerAddOnDelegate> delegate;
@property (readonly, nonatomic) MTTimerManager *timerManager;

- (id)timers;
- (id)removeTimer:(id)a0;
- (void)handleTimerFiringTimerDismissedNotification:(id)a0;
- (id)dismissTimerWithIdentifier:(id)a0;
- (id)addTimer:(id)a0;
- (void)_addCompletionsToFuture:(id)a0 withXPCCallback:(id /* block */)a1 transactionDescription:(const char *)a2;
- (id)updateTimer:(id)a0;
- (void)_concludeMerge:(id)a0 usingLocalTimers:(id)a1;
- (void)meshController:(id)a0 didTransitionToState:(unsigned long long)a1;
- (void)handleTimerUpdateRequest:(id)a0 callback:(id /* block */)a1;
- (id)_sendRequest:(id)a0;
- (void)dismissTimerWithIdentifier:(id)a0 cluster:(id)a1 withCallback:(id /* block */)a2;
- (void)canDispatchForAccessoryUniqueIdentifier:(id)a0 categoryType:(id)a1 asInstance:(id)a2 cluster:(id)a3 reply:(id /* block */)a4;
- (void)_timerManagerTimerFired:(id)a0;
- (void)handleTimerReadRequest:(id)a0 callback:(id /* block */)a1;
- (void)willStartMeshController:(id)a0;
- (id)initWithTimerManager:(id)a0 homekitAdapter:(id)a1 hubAdapter:(id)a2;
- (void)_primeMerge:(id)a0 withNodes:(id)a1;
- (void)didChangeNodesForMeshController:(id)a0;
- (void)_timerManagerTimersRemoved:(id)a0;
- (void)handleTimersChangedNotification:(id)a0;
- (BOOL)_isTimer:(id)a0 targetingAccessory:(id)a1;
- (void)_timerManagerTimersChanged:(id)a0;
- (id)_timersForAccessoryIdentifier:(id)a0 allowLocalStorage:(BOOL)a1;
- (void)_startMerge;
- (void)handleTimersUpdatedNotification:(id)a0;
- (id)initWithTimerManager:(id)a0;
- (void)didStopMeshController:(id)a0;
- (void)_addTimerDeleteEvent:(id)a0;
- (void).cxx_destruct;
- (void)handleTimerFiredNotification:(id)a0;
- (id)_commandsForReconciling:(id)a0 toTruth:(id)a1 forNode:(id)a2;
- (id)init;
- (void)updateTimer:(id)a0 cluster:(id)a1 withCallback:(id /* block */)a2;
- (void)handleTimerDeleteRequest:(id)a0 callback:(id /* block */)a1;
- (void)handleTimerCreateRequest:(id)a0 callback:(id /* block */)a1;
- (void)handleTimersAddedNotification:(id)a0;
- (void)_processQueuedCommands;
- (void)_timerManagerTimersUpdated:(id)a0;
- (void)willRemoveFromMeshController:(id)a0;
- (void)_timerManagerTimersAdded:(id)a0;
- (void)addTimer:(id)a0 fromConnection:(id)a1 cluster:(id)a2 withCallback:(id /* block */)a3;
- (void)handleTimerDismissRequest:(id)a0 callback:(id /* block */)a1;
- (void)handleTimerManagerStateResetNotification:(id)a0;
- (void)handleTimersRemovedNotification:(id)a0;
- (id)_filteredTimersList:(id)a0 forAccessory:(id)a1;
- (void)timersforAccessoryUniqueIdentifier:(id)a0 fromConnection:(id)a1 cluster:(id)a2 withCallback:(id /* block */)a3;
- (void)_withLock:(id /* block */)a0;
- (void)removeTimer:(id)a0 cluster:(id)a1 withCallback:(id /* block */)a2;
- (void)_continueMerge:(id)a0 withResponse:(id)a1 fromNode:(id)a2;
- (void)didAddToMeshController:(id)a0;
- (BOOL)_isTimer:(id)a0 targetingAccessoryIdentifiers:(id)a1;
- (void)_timerManagerStateReset:(id)a0;
- (void)_abandonMerge;
- (void)_finishMerge;

@end
