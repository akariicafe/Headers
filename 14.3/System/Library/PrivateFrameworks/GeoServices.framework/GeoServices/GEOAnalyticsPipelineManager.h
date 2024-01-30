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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)useProxyClass:(Class)a0;
+ (id)sharedManager;

- (BOOL)GEOImproveMaps;
- (id)init;
- (BOOL)GEOMapsLocationAuth;
- (void)showEvalDataWithPredicate:(id)a0 visitorBlock:(id /* block */)a1 summaryBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)getEvalStatus;
- (void)dealloc;
- (int)functionalAppGroup;
- (void)logToDiagAndUsageUnderBugId:(id)a0 filePrefix:(id)a1 logData:(id)a2;
- (BOOL)getEvDirectionsFeedbackAuth;
- (BOOL)getEvDirectionsFeedbackAllowed;
- (void)initiateUploadOfType:(int)a0;
- (BOOL)PlatformDiagAndUsageOrAppleInternal;
- (BOOL)PlatformDiagAndUsage;
- (void)reportMapKitCountType:(int)a0;
- (void)reportLogMsgType:(int)a0 handlingPolicyId:(int)a1 logMsg:(id)a2 completion:(id /* block */)a3 completionQueue:(id)a4;
- (void)reportCuratedCollectionActionType:(unsigned long long)a0 collectionId:(unsigned long long)a1;
- (void)setShortSessionValues:(id)a0 withCompletion:(id /* block */)a1;
- (void)shortSessionValuesWithCompletion:(id /* block */)a0;
- (void)runAggregationTasks;
- (void)reportDailySettingsStates:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (void)reportDailySettingsStates:(id)a0;
- (void)reportMapKitCountType:(int)a0 appId:(id)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (void)toggleEVDirectionsFeedbackAllowed;
- (void)flushEvalData;
- (void)reportCuratedCollectionActionType:(unsigned long long)a0 collectionId:(unsigned long long)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (BOOL)AppleInternal;
- (void)setEvalMode:(BOOL)a0;
- (void)reportDailyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3 completion:(id /* block */)a4 completionQueue:(id)a5;
- (void)reportDailyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3;

@end
