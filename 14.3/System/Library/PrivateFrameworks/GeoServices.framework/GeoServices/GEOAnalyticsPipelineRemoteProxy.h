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

- (void)_enqueueOperation:(id)a0;
- (void)_reportLogMsgType:(int)a0 handlingPolicyId:(int)a1 logMsg:(id)a2 completion:(id /* block */)a3 completionQueue:(id)a4;
- (id)init;
- (void)showEvalDataWithPredicate:(id)a0 visitorBlock:(id /* block */)a1 summaryBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)getEvalStatus;
- (void)_reportMapKitCountType:(int)a0 appId:(id)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (void)initiateUploadOfType:(int)a0;
- (void)reportLogMsgType:(int)a0 handlingPolicyId:(int)a1 logMsg:(id)a2 completion:(id /* block */)a3 completionQueue:(id)a4;
- (void)_reportCuratedCollectionActionType:(unsigned long long)a0 collectionId:(unsigned long long)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (void)setShortSessionValues:(id)a0 withCompletion:(id /* block */)a1;
- (void)shortSessionValuesWithCompletion:(id /* block */)a0;
- (void)runAggregationTasks;
- (void)reportDailySettingsStates:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (void)reportMapKitCountType:(int)a0 appId:(id)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (void)_reportDailySettingsStates:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (void)_reportDailyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3 completion:(id /* block */)a4 completionQueue:(id)a5;
- (void)flushEvalData;
- (void)reportCuratedCollectionActionType:(unsigned long long)a0 collectionId:(unsigned long long)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (void)setEvalMode:(BOOL)a0;
- (void)reportDailyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3 completion:(id /* block */)a4 completionQueue:(id)a5;

@end
