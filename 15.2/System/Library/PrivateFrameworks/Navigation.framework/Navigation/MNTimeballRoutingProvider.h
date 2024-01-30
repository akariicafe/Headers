@class MNTimeballCache, MNTimeballNetworkRequester, NSObject;
@protocol OS_dispatch_queue;

@interface MNTimeballRoutingProvider : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    MNTimeballCache *_cache;
    MNTimeballNetworkRequester *_networkRequester;
}

- (void)setNetworkRequester:(id)a0;
- (void).cxx_destruct;
- (id)initWithCache:(id)a0;
- (void)requestRoutingOptions:(long long)a0 forDestinations:(id)a1 freshness:(id)a2 fromOrigin:(id)a3 auditToken:(id)a4 callbackBlock:(id /* block */)a5 callbackQueue:(id)a6;
- (void)_gotoNetworkForOptions:(long long)a0 forDestinations:(id)a1 fromOrigin:(id)a2 auditToken:(id)a3 callbackBlock:(id /* block */)a4 callbackQueue:(id)a5;
- (void)_checkCacheForOptions:(long long)a0 forDestinations:(id)a1 freshness:(id)a2 fromOrigin:(id)a3 callbackBlock:(id /* block */)a4 callbackQueue:(id)a5 completionBlock:(id /* block */)a6;

@end
