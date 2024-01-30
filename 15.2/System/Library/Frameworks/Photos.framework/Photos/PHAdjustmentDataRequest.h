@class PHAdjustmentDataRequestBehaviorSpec, PHAdjustmentDataResult, PLCPLDownloadContext;
@protocol PHAdjustmentDataRequestDelegate;

@interface PHAdjustmentDataRequest : PHMediaRequest {
    PLCPLDownloadContext *_legacyDownloadContext;
    PHAdjustmentDataResult *_adjustmentDataResult;
}

@property (readonly, weak, nonatomic) id<PHAdjustmentDataRequestDelegate> delegate;
@property (readonly, nonatomic) PHAdjustmentDataRequestBehaviorSpec *behaviorSpec;

- (id)initWithRequestID:(int)a0 requestIndex:(unsigned long long)a1 contextType:(long long)a2 managerID:(unsigned long long)a3 asset:(id)a4 behaviorSpec:(id)a5 delegate:(id)a6;
- (void)_cplDownloadStatusNotification:(id)a0;
- (void)startRequest;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isSynchronous;

@end
