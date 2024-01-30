@class NSMutableDictionary, NSString, NSXPCConnection, NSOperationQueue, NSObject, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source, NSCopying;

@interface ICMusicSubscriptionStatusController : NSObject <ICMusicSubscriptionStatusRemoteRequestingClient> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    unsigned long long _numberOfActiveRemoteRequests;
    NSOperationQueue *_operationQueue;
    id<NSCopying> _privacyAcknowledgementObservationToken;
    NSXPCConnection *_remoteRequestingClientConnection;
    NSUUID *_remoteRequestingClientConnectionIdentifier;
    NSObject<OS_dispatch_source> *_remoteRequestingClientConnectionInvalidationTimer;
    NSMutableDictionary *_statusHandlersForPendingIdenticalRequests;
    NSMutableDictionary *_pendingRequests;
}

@property (class, readonly, nonatomic) ICMusicSubscriptionStatusController *sharedStatusController;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_hasEntitlementForMusicSubscriptionStatusService;

- (void)_deliverSubscriptionStatusResponse:(id)a0 forRequest:(id)a1 error:(id)a2;
- (void)_cancelPendingRequests;
- (void)refreshSubscriptionForUserIdentity:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)enableSubscriptionForUserIdentity:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)refreshSubscriptionUsingRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_handleSubscriptionStatusDidChangeDistributedNotification:(id)a0;
- (void)_cancelRemoteRequestingClientConnectionInvalidationTimer;
- (void)invalidateCachedSubscriptionStatusWithCompletionHandler:(id /* block */)a0;
- (void)_handleSubscriptionStatusCacheDidChangeNotification:(id)a0;
- (void)refreshSubscriptionWithCompletionHandler:(id /* block */)a0;
- (void)performSubscriptionStatusRequest:(id)a0 withStatusHandler:(id /* block */)a1;
- (void)deliverSubscriptionStatusResponse:(id)a0 forRemoteRequestWithUniqueIdentifier:(id)a1 error:(id)a2;
- (void)disableSubscriptionForUserIdentity:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)performSubscriptionStatusRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_remoteRequestingClientConnectionInvalidationTimerDidExpire;
- (id)_remoteRequestingClientConnection;
- (void).cxx_destruct;
- (void)getSubscriptionStatusForUserIdentity:(id)a0 bypassingCache:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)_didEndRemoteRequestWithUniqueIdentifier:(id)a0;
- (void)getSubscriptionStatusWithCompletionHandler:(id /* block */)a0;
- (void)invalidateCachedSubscriptionStatusForUserIdentity:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)init;
- (void)_handleSeveredRemoteClientConnectionWithIdentifier:(id)a0;
- (void)_handleSubscriptionStatusCacheUnderlyingCachingPropertiesDidChangeNotification:(id)a0;
- (void)_willBeginRemoteRequestWithUniqueIdentifier:(id)a0 statusHandler:(id /* block */)a1;
- (void)getSubscriptionStatusForUserIdentity:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)disableSubscriptionWithCompletionHandler:(id /* block */)a0;
- (void)_handleSubscriptionStatusDidChangeFollowingPrivacyAcknowledgementNotification:(id)a0;
- (void)_scheduleInvalidationOfRemoteRequestingClientConnection;
- (void)_handlePrivacyAcknowledgementRequirementChanged:(BOOL)a0;
- (void)dealloc;
- (BOOL)_willPerformSubscriptionStatusRequest:(id)a0 withStatusHandler:(id /* block */)a1;
- (void)enableSubscriptionWithCompletionHandler:(id /* block */)a0;
- (void)_invalidateRemoteRequestingClientConnection;

@end
