@class NSRecursiveLock, ICMusicSubscriptionLeaseStatus, NSDate, ICStoreRequestContext, NSObject;
@protocol ICMusicSubscriptionLeaseSessionDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface ICMusicSubscriptionLeaseSession : NSObject {
    NSRecursiveLock *_lock;
    long long _automaticRefreshCount;
    NSObject<OS_dispatch_source> *_automaticRefreshTimerSource;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _isPerformingAutomaticRefresh;
    ICMusicSubscriptionLeaseStatus *_leaseStatus;
    long long _pendingLeaseAcquisitionRevisionID;
    BOOL _hasPendingLeaseDidEndPushNotification;
}

@property (readonly, weak, nonatomic) id<ICMusicSubscriptionLeaseSessionDelegate> delegate;
@property (readonly, copy, nonatomic) NSDate *leaseExpirationDate;
@property (readonly, nonatomic, getter=isDelegatedLeaseSession) BOOL delegatedLeaseSession;
@property (readonly, copy, nonatomic) ICStoreRequestContext *requestContext;
@property (readonly, copy, nonatomic) ICMusicSubscriptionLeaseStatus *leaseStatus;
@property (readonly, nonatomic, getter=isAutomaticallyRefreshingLease) BOOL automaticallyRefreshingLease;

+ (id)_sharedOperationQueue;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handlePlaybackLeaseDidEndPushNotification;
- (void)beginAutomaticallyRefreshingLease;
- (void)endAutomaticallyRefreshingLease;
- (id)_initWithRequestContext:(id)a0 isDelegatedLeaseSession:(BOOL)a1 delegate:(id)a2 leaseStatus:(id)a3;
- (id)performPlaybackRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)reloadFairPlayKeyStatusWithCompletionHandler:(id /* block */)a0;
- (void)_handleRemoteServerDidBecomeLikelyReachable;
- (void)_receivedUserInteractionEvent;
- (void)_setLeaseStatus:(id)a0 updatedLeaseExpirationDate:(id)a1;
- (id)_newOperationForPlaybackRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_locked_performAutomaticRefresh;
- (void)_locked_setLeaseStatus:(id)a0 updatedLeaseExpirationDate:(id)a1;
- (void)_locked_updateAutomaticRefreshProperties;
- (void)_locked_handlePendingPlaybackLeaseDidEndPushNotificationIfReady;

@end
