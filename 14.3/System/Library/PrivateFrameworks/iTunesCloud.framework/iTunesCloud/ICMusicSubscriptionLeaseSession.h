@class ICMusicSubscriptionLeaseStatus, NSDate, ICStoreRequestContext, NSObject;
@protocol ICMusicSubscriptionLeaseSessionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ICMusicSubscriptionLeaseSession : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    long long _automaticRefreshCount;
    NSObject<OS_dispatch_source> *_automaticRefreshTimerSource;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _isPerformingAutomaticRefresh;
    ICMusicSubscriptionLeaseStatus *_leaseStatus;
    long long _pendingLeaseAcquisitionRevisionID;
}

@property (readonly, weak, nonatomic) id<ICMusicSubscriptionLeaseSessionDelegate> delegate;
@property (readonly, copy, nonatomic) NSDate *leaseExpirationDate;
@property (readonly, nonatomic, getter=isDelegatedLeaseSession) BOOL delegatedLeaseSession;
@property (readonly, copy, nonatomic) ICStoreRequestContext *requestContext;
@property (readonly, copy, nonatomic) ICMusicSubscriptionLeaseStatus *leaseStatus;
@property (readonly, nonatomic, getter=isAutomaticallyRefreshingLease) BOOL automaticallyRefreshingLease;

+ (id)_sharedOperationQueue;

- (void).cxx_destruct;
- (id)performPlaybackRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)_updateAutomaticRefreshProperties;
- (id)_newOperationForPlaybackRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_onQueue_setLeaseStatus:(id)a0 updatedLeaseExpirationDate:(id)a1;
- (void)_performAutomaticRefresh;
- (id)_initWithRequestContext:(id)a0 isDelegatedLeaseSession:(BOOL)a1 delegate:(id)a2 leaseStatus:(id)a3;
- (void)reloadFairPlayKeyStatusWithCompletionHandler:(id /* block */)a0;
- (void)_handleRemoteServerDidBecomeLikelyReachable;
- (void)_receivedUserInteractionEvent;
- (void)_setLeaseStatus:(id)a0 updatedLeaseExpirationDate:(id)a1;
- (void)_handlePlaybackLeaseDidEndPushNotification;
- (id)description;
- (void)beginAutomaticallyRefreshingLease;
- (void)endAutomaticallyRefreshingLease;

@end
