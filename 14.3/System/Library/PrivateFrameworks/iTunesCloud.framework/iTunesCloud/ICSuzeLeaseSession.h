@class ICSuzeLeaseSessionConfiguration, ICFPLeaseSyncSession, NSDate, NSObject, NSOperationQueue;
@protocol OS_dispatch_queue, OS_dispatch_source, ICSuzeLeaseSessionDelegate;

@interface ICSuzeLeaseSession : NSObject {
    long long _automaticRefreshCount;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _isRunning;
    NSDate *_leaseExpirationDate;
    NSObject<OS_dispatch_source> *_leaseRenewTimer;
    ICFPLeaseSyncSession *_leaseSyncSession;
    NSOperationQueue *_operationQueue;
}

@property (readonly, copy, nonatomic) ICSuzeLeaseSessionConfiguration *configuration;
@property (weak, nonatomic) id<ICSuzeLeaseSessionDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (void)_updateRenewalTimer;
- (id)_newSuzeLeaseRequestWithType:(long long)a0 clientData:(id)a1;
- (void)_updateRenewalTimerWithResponse:(id)a0;
- (void)_renewLeaseTimerAction;
- (void)beginAutomaticallyRefreshingLease;
- (void)endAutomaticallyRefreshingLease;
- (void)startLeaseSessionWithCompletionHandler:(id /* block */)a0;
- (void)stopLeaseSessionWithCompletionHandler:(id /* block */)a0;

@end
