@class NSString, geo_isolater;
@protocol GEOAnalyticsPipelineProxy;

@interface GEOAnalyticsPipelineManager : NSObject <GEOAnalyticsPipelineProxy> {
    id<GEOAnalyticsPipelineProxy> _proxy;
    id _evDirectionsFeedbackAllowedListener;
    id _evDirectionsFeedbackAuthListener;
    geo_isolater *_evInfoIsolator;
}

@property (readonly, nonatomic) BOOL evDirectionsFeedbackAuth;
@property (nonatomic) BOOL evDirectionsFeedbackAllowed;
@property (nonatomic) BOOL directionsFeedbackAllowed;
@property (readonly, nonatomic) BOOL evalModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (void)useProxyClass:(Class)a0;

- (BOOL)getEvDirectionsFeedbackAuth;
- (BOOL)AppleInternal;
- (void)reportDailySettings:(id)a0;
- (void)showEvalDataWithVisitorBlock:(id /* block */)a0;
- (void)reportLogMsg:(id)a0 uploadBatchId:(unsigned long long)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (void)logToDiagAndUsageUnderBugId:(id)a0 filePrefix:(id)a1 logData:(id)a2;
- (void)reportRRLogMessage:(id)a0;
- (void)toggleEVDirectionsFeedbackAllowed;
- (void)processMapsDeletionWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (int)functionalAppGroup;
- (void).cxx_destruct;
- (BOOL)getEvDirectionsFeedbackAllowed;
- (id)init;
- (void)flushEvalData;
- (void)reportCuratedCollectionActionType:(unsigned long long)a0 collectionId:(unsigned long long)a1;
- (void)reportCuratedCollectionActionType:(unsigned long long)a0 collectionId:(unsigned long long)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (BOOL)PlatformDiagAndUsage;
- (void)runAggregationTasks;
- (void)reportDailySettings:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (BOOL)PlatformDiagAndUsageOrAppleInternal;
- (void)reportDailyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3;
- (void)dealloc;
- (void)reportMapKitCountType:(int)a0;
- (void)setEvalMode:(BOOL)a0;
- (void)reportDailyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3 completion:(id /* block */)a4 completionQueue:(id)a5;

@end
