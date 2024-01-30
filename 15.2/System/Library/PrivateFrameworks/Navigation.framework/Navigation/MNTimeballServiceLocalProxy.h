@class MNTimeballCache, NSString, MNObserverHashTable, MNTimeballServicePeer, MNRouteRefreshPolicyScheduler, NSMutableDictionary, MNXPCTransactionCounter, MNTimeballRoutingProvider, MNTimeballLocationManager, NSObject;
@protocol MNTimeballServiceProxyDelegate, OS_dispatch_queue;

@interface MNTimeballServiceLocalProxy : NSObject <MNTimeballServiceProxyInterface, MNTimeballInternalProvider, MNTimeballInternalObserver> {
    MNObserverHashTable *_observers;
    MNTimeballCache *_cache;
    MNRouteRefreshPolicyScheduler *_scheduler;
    MNTimeballRoutingProvider *_routingProvider;
    MNTimeballLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_operationQueue;
    MNXPCTransactionCounter *_xpcTransactionCounter;
    NSMutableDictionary *_destinationOptions;
    BOOL _isLeeching;
}

@property (readonly, nonatomic) MNTimeballServicePeer *peer;
@property (nonatomic) id<MNTimeballServiceProxyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_enqueOperation:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_delegate;
- (void)provider:(id)a0 didReceiveError:(id)a1 forDestination:(id)a2;
- (void)provider:(id)a0 didReceiveUpdate:(id)a1 forDestination:(id)a2;
- (void)_requestHighMemoryThreshold:(id)a0;
- (void)_removeHighMemoryThreshold;
- (void)_invokeDelegateHandlerWithID:(id)a0 forDestination:(id)a1 update:(id)a2 error:(id)a3;
- (void)_receivedNetworkUpdate:(id)a0 forDestination:(id)a1;
- (void)_receivedNetworkError:(id)a0 forDestination:(id)a1;
- (void)_completedUpdateForDelegateHandlerID:(id)a0;
- (void)_handleResult:(id)a0 forDestination:(id)a1 error:(id)a2 fromNetwork:(BOOL)a3 requestingClientID:(id)a4 handlerID:(id)a5 completed:(BOOL)a6;
- (void)_requestOptions:(long long)a0 forDestinations:(id)a1 fromLocation:(id)a2 freshness:(id)a3 handlerID:(id)a4;
- (void)requestRoutingOptions:(long long)a0 forDestinations:(id)a1 freshness:(id)a2 handlerID:(id)a3;
- (void)subscribeToDestination:(id)a0 options:(long long)a1 refreshPolicy:(unsigned long long)a2;
- (void)unsubscribeFromDestination:(id)a0;
- (void)subscribeToAllDestinations;
- (void)unsubscribeFromAllDestinations;
- (id)initWithPeer:(id)a0 targetQueue:(id)a1 cache:(id)a2 locationManager:(id)a3 routingProvider:(id)a4 scheduler:(id)a5;

@end
