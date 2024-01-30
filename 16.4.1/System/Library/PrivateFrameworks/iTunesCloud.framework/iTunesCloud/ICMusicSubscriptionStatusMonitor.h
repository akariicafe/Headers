@class NSNumber, NSMutableDictionary, NSArray, ICMusicSubscriptionStatus, ICUserIdentityContext, ICUserIdentity;

@interface ICMusicSubscriptionStatusMonitor : NSObject {
    ICUserIdentityContext *_identityContext;
    NSNumber *_DSID;
    NSMutableDictionary *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_notificationHandlers;
}

@property (readonly, nonatomic) ICUserIdentity *identity;
@property (readonly, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus;

+ (id)_sharedInstanceManager;
+ (id)sharedMonitorForIdentity:(id)a0 identityStore:(id)a1;
+ (id)sharedMonitorForIdentity:(id)a0;

- (void)_beginObservingSubscriptionStatus;
- (void)_handleSubscriptionStatusDidChange:(id)a0;
- (void)_handleUserIdentityStoreDidChange:(id)a0;
- (void)refreshSubscriptionStatus;
- (void)endObservingSubscriptionStatusWithToken:(id)a0;
- (id)_initWithIdentityContext:(id)a0;
- (BOOL)_isMonitoringSubscriptionStatusForAutoupdatingIdentity;
- (void)dealloc;
- (id)_effectiveIdentityForRequestingSubscriptionStatus;
- (void)_requestSubscriptionStatusWithCachingPolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_endObservingSubscriptionStatus;
- (id)beginObservingSubscriptionStatusWithHandler:(id /* block */)a0;
- (id)description;
- (void)_updateWithSubscriptionStatus:(id)a0;
- (void)_handleActiveUserIdentityDidChangeRemoteNotification;
- (void).cxx_destruct;

@end
