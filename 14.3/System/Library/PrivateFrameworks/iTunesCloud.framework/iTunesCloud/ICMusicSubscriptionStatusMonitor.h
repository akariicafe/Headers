@class NSMutableDictionary, ICMusicSubscriptionStatus, ICUserIdentityContext, ICUserIdentity;

@interface ICMusicSubscriptionStatusMonitor : NSObject {
    ICUserIdentityContext *_identityContext;
    NSMutableDictionary *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) ICUserIdentity *identity;
@property (readonly, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus;

+ (id)_sharedInstanceManager;
+ (id)sharedMonitorForIdentity:(id)a0 identityStore:(id)a1;
+ (id)sharedMonitorForIdentity:(id)a0;

- (id)_initWithIdentityContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshSubscriptionStatus;
- (void)_beginObservingSubscriptionStatus;
- (void)_updateWithSubscriptionStatus:(id)a0;
- (void)endObservingSubscriptionStatusWithToken:(id)a0;
- (id)description;
- (void)_requestSubscriptionStatusWithCachingPolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)beginObservingSubscriptionStatusWithHandler:(id /* block */)a0;
- (void)_handleUserIdentityStoreDidChange:(id)a0;
- (void)_handleSubscriptionStatusDidChange:(id)a0;
- (void)_endObservingSubscriptionStatus;
- (id)_effectiveIdentityForRequestingSubscriptionStatus;

@end
