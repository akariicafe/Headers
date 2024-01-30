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

+ (BOOL)mingleBatch:(id)a0 forStore:(id)a1 onPutBatchInPullQueue:(id /* block */)a2 error:(id *)a3;

- (void)_launch;
- (id)initWithEngineLibrary:(id)a0 session:(id)a1;
- (void)_notifySchedulerPullQueueIsFullNowIfNecessary;
- (id)taskIdentifier;
- (void)taskDidFinishWithError:(id)a0;
- (void)_processNextBatch;
- (void).cxx_destruct;
- (BOOL)_checkContinueMinglingInTransaction:(id)a0;
- (void)_reallyNotifySchedulerPullQueueIsFull;
- (void)_taskDidFinishWithError:(id)a0;
- (void)launch;
- (void)cancel;
- (void)_notifySchedulerPullQueueIsFull;

@end
