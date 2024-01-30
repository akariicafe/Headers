@class NSString, NSError, NSObject;
@protocol MPRequestResponseControllerDelegate, OS_dispatch_source, OS_dispatch_queue, MPRequestCancellationToken;

@interface MPRequestResponseController : NSObject {
    long long _numberOfObservers;
    NSString *_requestID;
    BOOL _shouldAutomaticallyLoad;
    BOOL _needsReload;
    id<MPRequestCancellationToken> _cancelToken;
    double _retryInterval;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSError *_lastError;
    id _pendingResponse;
    unsigned long long _stateHandle;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) id response;
@property (retain, nonatomic) id request;
@property (weak, nonatomic) id<MPRequestResponseControllerDelegate> delegate;

- (void)_onQueue_reloadIfNeeded;
- (id)_onQueue_stateDictionary;
- (void)_responseDidInvalidate:(id)a0;
- (void)setNeedsReload;
- (void)_onQueue_updateRequestID;
- (void)endAutomaticResponseLoading;
- (void)setNeedsReloadForSignificantRequestChange;
- (void)dealloc;
- (void)reloadIfNeeded;
- (id)init;
- (void)beginAutomaticResponseLoading;
- (void)_onQueue_scheduleRetryAfterInterval:(double)a0;
- (void).cxx_destruct;

@end
