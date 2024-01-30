@class ICURLBag, NSString, ICUserIdentityStore, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface ICURLBagMonitor : NSObject <ICEnvironmentMonitorObserver> {
    ICURLBag *_bag;
    NSObject<OS_dispatch_source> *_bagExpirationTimer;
    ICUserIdentityStore *_identityStore;
    NSMutableDictionary *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) ICURLBagMonitor *sharedBagMonitor;

@property (readonly) ICURLBag *bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_description;
- (void).cxx_destruct;
- (void)_endObservingBag;
- (void)_beginObservingBag;
- (void)_requestBagWithPolicy:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_invalidateBagExpirationTimer;
- (void)_updateWithBag:(id)a0;
- (void)_handleBagExpirationTimerFired;
- (void)_scheduleBagExpirationTimerForDate:(id)a0;
- (id)beginObservingBagWithHandler:(id /* block */)a0;
- (void)endObservingBagWithToken:(id)a0;
- (void)dealloc;
- (id)_init;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)_handleUserIdentityStoreDidChange:(id)a0;

@end
