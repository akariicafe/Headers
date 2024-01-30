@class PLCPLDownloadContext, PHAdjustmentDataResult, PHAdjustmentDataRequestBehaviorSpec, NSObject;
@protocol PHAdjustmentDataRequestDelegate, OS_dispatch_semaphore;

@interface PHAdjustmentDataRequest : PHMediaRequest {
    PLCPLDownloadContext *_legacyDownloadContext;
    PHAdjustmentDataResult *_adjustmentDataResult;
    NSObject<OS_dispatch_semaphore> *_syncDownloadWaitSemaphore;
}

@property (readonly, weak, nonatomic) id<PHAdjustmentDataRequestDelegate> delegate;
@property (readonly, nonatomic) PHAdjustmentDataRequestBehaviorSpec *behaviorSpec;

- (void)startRequest;
- (void)cancel;
- (BOOL)isSynchronous;
- (void).cxx_destruct;
- (void)_cplDownloadStatusNotification:(id)a0;
- (void)_finishFromAsynchronousCallback;
- (id)initWithRequestID:(int)a0 requestIndex:(unsigned long long)a1 contextType:(long long)a2 managerID:(unsigned long long)a3 asset:(id)a4 behaviorSpec:(id)a5 delegate:(id)a6;

@end
