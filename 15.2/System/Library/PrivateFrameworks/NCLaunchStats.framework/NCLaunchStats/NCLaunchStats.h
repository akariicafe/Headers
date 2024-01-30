@class _DASActivity, NSMutableDictionary, _DKPredictionTimeline, NSSet, _DKPredictor, NSObject, _DKEventStream;
@protocol _DKKnowledgeDeleting, OS_os_log, _DKKnowledgeSaving, _DASActivityScheduler, OS_dispatch_queue, _DKKnowledgeQuerying;

@interface NCLaunchStats : NSObject {
    NSMutableDictionary *prewarmTimeTracker;
    NSMutableDictionary *prewarmDurationTracker;
    NSMutableDictionary *launchTracker;
    long long numRepeatedPrewarms;
    long long numPrewarmedLaunches;
    int classCLockedToken;
    BOOL isClassCLocked;
    BOOL backgroundAppRefreshSwitchedOn;
    double kTimeGuardBand;
    int predictedWidgetsToken;
    int generatePredictionToken;
    int appSpecificTriggerToken;
}

@property (copy, nonatomic) id /* block */ asyncRecommendHandler;
@property (retain, nonatomic) NSObject<OS_os_log> *ncLog;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) unsigned long long defaultSchedulingPriority;
@property (nonatomic) BOOL defaultRequiresNetwork;
@property (retain, nonatomic) NSMutableDictionary *widgetViewTime;
@property (retain, nonatomic) _DKEventStream *widgetStream;
@property (retain, nonatomic) id<_DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying> store;
@property (retain, nonatomic) _DKPredictor *predictor;
@property (retain, nonatomic) _DKPredictionTimeline *predictionTimeline;
@property (retain, nonatomic) NSSet *bootstrapWidgetIds;
@property (retain, nonatomic) _DKPredictionTimeline *bootstrapWidgetTimeline;
@property (retain, nonatomic) _DASActivity *bootstrapWidgetPrewarmActivity;
@property (retain, nonatomic) id<_DASActivityScheduler> scheduler;
@property (retain, nonatomic) _DASActivity *predictionUpdateActivity;
@property (retain, nonatomic) _DASActivity *widgetPrewarmActivity;
@property (retain, nonatomic) _DASActivity *historyDeletionActivity;
@property (retain, nonatomic) NSMutableDictionary *appsRequestingRefresh;
@property (retain, nonatomic) NSMutableDictionary *appUpdateTimes;

+ (void)scheduleDeletionActivity:(id)a0 store:(id)a1 stream:(id)a2;
+ (double)minTimeBetweenRefreshes;
+ (double)minTimeBootstrappingRandomizationSeed;

- (void)startEvent:(id)a0;
- (void)requestRefreshForWidget:(id)a0 afterDate:(id)a1;
- (void)endEvent:(id)a0;
- (id)initWithKnowledgeStore:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)initAfterClassCUnlocked;
- (id)predictedWidgetUsage;
- (void)scheduleWidgetRefresh:(id)a0 withRequestedRefreshes:(id)a1;
- (id)initWithKnowledgeStore:(id)a0 defaultSchedulingPriority:(unsigned long long)a1 defaultRequiresNetwork:(BOOL)a2;
- (void)scheduleWidgetRefresh:(id)a0 withRequestedRefreshes:(id)a1 cancelExisting:(BOOL)a2;
- (id)nextPredictedRefreshDate:(id)a0 afterDate:(id)a1;
- (id)earliestRequestedRefresh:(id)a0 atDate:(id)a1;
- (void)schedulePredictionUpdateBeforeDate:(id)a0;
- (void)updateWidgetsAtDate:(id)a0 withTimeline:(id)a1 withCompletion:(id /* block */)a2;
- (id)bootstrapStartAfterDate:(id)a0;
- (void)scheduleBootstrapWidgetRefresh;
- (void)updateBootstrapWidgetsAtDate:(id)a0 withCompletion:(id /* block */)a1;
- (id)predictedWidgetsForDate:(id)a0 withTimeline:(id)a1;
- (BOOL)canUpdateWidgetsUnsafe;
- (id)widgetsToRefreshAtDate:(id)a0 withTimeline:(id)a1;
- (void)unprotectedRemoveRequestsForWidget:(id)a0 beforeDate:(id)a1;
- (void)recordOccurrenceForKey:(id)a0;
- (void)incrementOccurrencesForKey:(id)a0 byCount:(long long)a1;
- (void)recordPrewarmStatisticsRaw:(id)a0;
- (void)unprotectedRemoveAllRequestsBeforeDate:(id)a0;
- (BOOL)immediateUpdatesAllowedForWidgetUnsafe:(id)a0;
- (void)setNCLaunchRecommendationHandler:(id /* block */)a0;
- (void)setNCLaunchRecommendationHandlerWithCompletion:(id /* block */)a0;
- (void)updateBARSwitch;
- (void)preWarmHasStarted:(id)a0 withResult:(unsigned long long)a1 withTriggerType:(int)a2 withSequence:(unsigned long long)a3;
- (void)preWarmHasEnded:(id)a0 withResult:(unsigned long long)a1 withTriggerType:(int)a2 withSequence:(unsigned long long)a3;
- (void)setBootstrapWidgetIDs:(id)a0;
- (void)cancelRequestedRefreshForWidget:(id)a0;

@end
