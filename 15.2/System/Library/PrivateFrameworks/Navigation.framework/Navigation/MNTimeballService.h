@class NSString, NSMapTable, NSMutableDictionary, MNObserverHashTable, NSLock;
@protocol MNTimeballServiceProxyInterface;

@interface MNTimeballService : NSObject <MNTimeballServiceProxyDelegate> {
    id<MNTimeballServiceProxyInterface> _proxy;
    NSMapTable *_handlerMap;
    NSLock *_subscribersLock;
    NSMutableDictionary *_subscribersPerDestination;
    MNObserverHashTable *_leechers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithClientID:(id)a0;
- (void)dealloc;
- (void)invokeHandlerWithID:(id)a0 forDestination:(id)a1 update:(id)a2 error:(id)a3;
- (void)completedUpdateForHandlerID:(id)a0;
- (void)didReceiveError:(id)a0 forDestination:(id)a1;
- (void)didReceiveUpdate:(id)a0 forDestination:(id)a1;
- (void)requestRoutingOptions:(long long)a0 forDestinations:(id)a1 freshness:(id)a2 callbackBlock:(id /* block */)a3;
- (id)_addHandler:(id /* block */)a0;
- (void)removeSubscriber:(id)a0 forDestination:(id)a1;
- (id /* block */)_handlerForID:(id)a0;
- (void)_removeHandlerWithID:(id)a0;
- (void)requestRoutingOptions:(long long)a0 forDestination:(id)a1 freshness:(id)a2 completionHandler:(id /* block */)a3;
- (void)addSubscriber:(id)a0 forDestination:(id)a1 options:(long long)a2 refreshPolicy:(unsigned long long)a3;
- (void)removeSubscriberForAllDestinations:(id)a0;
- (void)startLeechingDestinationUpdates:(id)a0;
- (void)stopLeechingDestinationUpdates:(id)a0;

@end
