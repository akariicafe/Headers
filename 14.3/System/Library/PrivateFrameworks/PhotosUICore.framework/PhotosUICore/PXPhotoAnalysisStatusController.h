@class NSString, NSError, NSMutableArray, NSDate;

@interface PXPhotoAnalysisStatusController : PXObservable {
    struct { BOOL graphStatus; } _needsUpdateFlags;
}

@property (nonatomic, setter=_setGraphStatus:) long long graphStatus;
@property (nonatomic, setter=_setHasBeenReadyForSomeTime:) BOOL hasBeenReadyForSomeTime;
@property (nonatomic, setter=_setGraphFractionCompleted:) double graphFractionCompleted;
@property (nonatomic, setter=_setDidReceiveGraphFractionCompleted:) BOOL _didReceiveGraphFractionCompleted;
@property (retain, nonatomic, setter=_setInitialUpdateDate:) NSDate *_initialUpdateDate;
@property (retain, nonatomic, setter=_setLastGraphBecameReadyDate:) NSDate *_lastGraphBecameReadyDate;
@property (nonatomic, getter=_isGraphReady, setter=_setGraphReady:) BOOL _graphReady;
@property (retain, nonatomic, setter=_setGraphError:) NSError *_graphError;
@property (nonatomic, getter=_isRequestingGraphFractionCompleted, setter=_setRequestingGraphFractionCompleted:) BOOL _requestingGraphFractionCompleted;
@property (readonly, nonatomic) NSMutableArray *_retryBlocks;
@property (readonly, nonatomic) NSString *stateDescription;

+ (id)sharedStatusController;

- (id)init;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)didPerformChanges;
- (BOOL)_needsUpdate;
- (void)update;
- (void)_updateIfNeeded;
- (id)mutableChangeObject;
- (void)registerRetryBlock:(id /* block */)a0;
- (void)_handleInitialGraceDelay;
- (void)_requestGraphReady;
- (void)_handleGraphReadyReplyWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_requestGraphFractionCompleted;
- (void)_handleGraphFractionCompletedReply:(id)a0 error:(id)a1;
- (void)_handleGraphReadyForSomeTimeForDate:(id)a0;
- (BOOL)_isWithinGracePeriod;
- (void)_dequeueAndPerformBlocks:(id)a0;
- (void)_invalidateGraphStatus;
- (void)_updateGraphStatusIfNeeded;

@end
