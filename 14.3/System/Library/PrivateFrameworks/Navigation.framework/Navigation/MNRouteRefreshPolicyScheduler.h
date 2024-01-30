@class MNTimeballCache, NSString, NSDate, MNObserverHashTable, NSMutableDictionary, MNXPCTransactionCounter, MNTimeballRoutingProvider, NSObject, MNTimeballLocationManager;
@protocol OS_dispatch_queue, MNRouteRefreshPolicySchedulerTimedActivity, OS_dispatch_source;

@interface MNRouteRefreshPolicyScheduler : NSObject <MNTimeballInternalProvider> {
    NSMutableDictionary *_refreshPolicyByDestination;
    NSMutableDictionary *_optionsByDestination;
    NSMutableDictionary *_auditTokenByDestination;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    MNTimeballRoutingProvider *_routingProvider;
    NSDate *_deferredRefreshDate;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSObject<OS_dispatch_source> *_deferTimer;
    MNTimeballCache *_cache;
    MNTimeballLocationManager *_locationManager;
    MNXPCTransactionCounter *_transactionCounter;
    MNObserverHashTable *_observers;
}

@property (copy, nonatomic) id /* block */ refreshCompletion;
@property (nonatomic) double tolerance;
@property (retain, nonatomic) id<MNRouteRefreshPolicySchedulerTimedActivity> timedActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)scheduleUpdatesForDestination:(id)a0 options:(long long)a1 policy:(unsigned long long)a2 auditToken:(id)a3;
- (void)unscheduleUpdateForDestination:(id)a0;
- (void)_performDeferredRefresh;
- (void)_handleSchedulingUpdatesForDestination:(id)a0 options:(long long)a1 policy:(unsigned long long)a2 auditToken:(id)a3;
- (void)_handleSchedulingThisDestinationAndRefreshAllDestinations:(id)a0 nextRefreshDate:(id)a1;
- (void)_scheduleNextRefreshDateForDestination:(id)a0 routeUpdate:(id)a1 fromDate:(id)a2 completion:(id /* block */)a3;
- (void)_refreshAllDestinationsAtDate:(id)a0;
- (void)_deferRefreshForScheduledDestinationsAfter:(id)a0;
- (void)_updateNextRefreshDate:(id)a0 destination:(id)a1 completion:(id /* block */)a2;
- (void)_enterActiveWorkload;
- (void)_handleRefreshingCacheEntries:(id)a0 atDate:(id)a1;
- (void)_leaveActiveWorkload;
- (void)_handleRefreshingCacheEntries:(id)a0 atDate:(id)a1 userLocation:(id)a2;
- (void)_handleCompletionOfRefresh;
- (id)_refreshPolicyForDestination:(id)a0;
- (double)_timeIntervalForRefreshOfDestination:(id)a0 routeUpdate:(id)a1 atDate:(id)a2;
- (id)_newActivityFromRefreshPolicyRules:(id)a0;
- (id)initWithRoutingProvider:(id)a0 cache:(id)a1 locationManager:(id)a2;
- (void)refreshScheduledDestinations;

@end
