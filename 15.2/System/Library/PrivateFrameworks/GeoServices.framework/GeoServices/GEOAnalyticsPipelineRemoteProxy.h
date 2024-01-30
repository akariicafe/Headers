@class NSString, NSOperationQueue, geo_isolater;

@interface GEOAnalyticsPipelineRemoteProxy : NSObject <GEOAnalyticsPipelineProxy> {
    NSOperationQueue *_opQueue;
    unsigned long long _maxOpCount;
    unsigned long long _droppedLogMsgCount;
    geo_isolater *_enqueueLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showEvalDataWithVisitorBlock:(id /* block */)a0;
- (void)reportLogMsg:(id)a0 uploadBatchId:(unsigned long long)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (void)reportRRLogMessage:(id)a0;
- (void)_reportCuratedCollectionActionType:(unsigned long long)a0 collectionId:(unsigned long long)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (void)processMapsDeletionWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)_reportLogMsg:(id)a0 uploadBatchId:(unsigned long long)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)_enqueueOperation:(id)a0;
- (void)_reportDailySettings:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (void)flushEvalData;
- (void)reportCuratedCollectionActionType:(unsigned long long)a0 collectionId:(unsigned long long)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (void)_reportDailyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3 completion:(id /* block */)a4 completionQueue:(id)a5;
- (void)runAggregationTasks;
- (void)reportDailySettings:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (void)setEvalMode:(BOOL)a0;
- (void)reportDailyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3 completion:(id /* block */)a4 completionQueue:(id)a5;

@end
