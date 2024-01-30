@class CPLScopeFilter, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CPLMinglePulledChangesTask : CPLEngineSyncTask {
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_clientCacheIdentifier;
    BOOL _hasPreparedForMingling;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    BOOL _didNotifySchedulerPullQueueIsFullOnce;
    BOOL _needsToNotifySchedulerPullQueueIsFull;
}

@property (retain, nonatomic) CPLScopeFilter *scopeFilter;

+ (BOOL)mingleBatch:(id)a0 forStore:(id)a1 putBatchesInPullQueue:(BOOL *)a2 error:(id *)a3;

- (void)cancel;
- (void)launch;
- (id)taskIdentifier;
- (void).cxx_destruct;
- (void)_launch;
- (id)initWithEngineLibrary:(id)a0 session:(id)a1;
- (void)_reallyNotifySchedulerPullQueueIsFull;
- (void)_notifySchedulerPullQueueIsFull;
- (void)_notifySchedulerPullQueueIsFullNowIfNecessary;
- (BOOL)_checkContinueMinglingInTransaction:(id)a0;
- (void)_taskDidFinishWithError:(id)a0;
- (void)_processNextBatch;
- (void)taskDidFinishWithError:(id)a0;

@end
