@class NSData, NSString, SSVPlaybackLeaseConfiguration, SSVFairPlaySubscriptionController, NSDate, SSVBarrierOperationQueue, SSURLBag, NSObject, NSMutableArray, SSVPlaybackLeaseRequest, SSVRefreshSubscriptionRequest;
@protocol OS_dispatch_queue, SSVPlaybackLeaseDelegate, OS_dispatch_source;

@interface SSVPlaybackLease : NSObject {
    NSMutableArray *_assetOperations;
    NSData *_certificateData;
    NSString *_certificateURLBagKey;
    SSVPlaybackLeaseConfiguration *_configuration;
    id<SSVPlaybackLeaseDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    SSVFairPlaySubscriptionController *_fairPlaySubscriptionController;
    unsigned long long _kdMovieIdentifier;
    SSVPlaybackLeaseRequest *_lastKDLeaseRequest;
    int _leaseDidEndNotificationToken;
    NSDate *_leaseExpirationDate;
    long long _leaseType;
    SSVRefreshSubscriptionRequest *_offlineSlotRequest;
    SSVBarrierOperationQueue *_operationQueue;
    BOOL _refreshesAutomatically;
    NSObject<OS_dispatch_source> *_refreshTimer;
    NSObject<OS_dispatch_queue> *_serialQueue;
    SSURLBag *_urlBag;
}

@property (weak) id<SSVPlaybackLeaseDelegate> delegate;
@property BOOL refreshesAutomatically;
@property (copy) NSData *certificateData;
@property (copy) NSString *certificateURLBagKey;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshLeaseWithRequest:(id)a0 completionBlock:(id /* block */)a1;
- (id)_initSSVPlaybackLease;
- (id)initWithURLBag:(id)a0 leaseType:(long long)a1;
- (id)_addOperationWithRequest:(id)a0 configurationURL:(id)a1 completionBlock:(id /* block */)a2;
- (void)getCertificateDataWithCompletionBlock:(id /* block */)a0;
- (void)_startRefreshTimerIfNecessary;
- (void)_cancelRefreshTimer;
- (void)_updateWithLeaseResponseError:(id)a0;
- (void)_updateForLeaseResponse:(id)a0 error:(id)a1;
- (void)_fireRefreshTimer;
- (id)initWithLeaseConfiguration:(id)a0;
- (BOOL)_shouldEndLeaseForError:(id)a0 returningEndReasonType:(unsigned long long *)a1;
- (void)_sendLeaseDidEndWithEndReasonType:(unsigned long long)a0;
- (void)beginLeaseWithRequest:(id)a0 completionBlock:(id /* block */)a1;
- (void)cancelAllAssetRequests;
- (void)getAssetWithRequest:(id)a0 completionBlock:(id /* block */)a1;
- (void)preheatLeaseRequestsWithCompletionBlock:(id /* block */)a0;
- (void)updateWithExternalLeaseResponseError:(id)a0;
- (void)endLease;
- (id)initWithURLBag:(id)a0;
- (void)_endLease;

@end
