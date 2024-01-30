@class ATXActionNotificationServer, _ATXDataStore, ATXAppIntentMonitor, NSArray, PETDistributionEventTracker, PETScalarEventTracker, ATXUserMetricsLogger, ATXRecentActionEngagementCache, ATXActionFeedbackWeights, _ATXAppLaunchHistogramManager;
@protocol ATXPETEventTracker2Protocol, ATXPredictionContextBuilderProtocol;

@interface ATXActionFeedback : NSObject <ATXFeedbackSessionListenerDelegateProtocol> {
    id<ATXPredictionContextBuilderProtocol> _predictionContextBuilder;
    ATXActionFeedbackWeights *_actionFeedbackWeights;
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    ATXActionNotificationServer *_notificationServer;
    ATXRecentActionEngagementCache *_recentEngagementCache;
    ATXAppIntentMonitor *_appIntentMonitor;
    _ATXDataStore *_dataStore;
    NSArray *_abGroupIdentifiers;
    PETDistributionEventTracker *_predictionsTracker;
    PETScalarEventTracker *_predictionItemsTracker;
    PETScalarEventTracker *_engagedInitTracker;
    PETScalarEventTracker *_engagementTracker;
    PETScalarEventTracker *_tvEngagementTracker;
    PETScalarEventTracker *_tvShownTracker;
    PETDistributionEventTracker *_predictedSlotTracker;
    PETDistributionEventTracker *_engagedSlotTracker;
    PETScalarEventTracker *_captureRateTracker;
    PETDistributionEventTracker *_durationTracker;
    ATXUserMetricsLogger *_userMetricsLogger;
    id<ATXPETEventTracker2Protocol> _petTracker;
}

+ (id)sharedInstance;

- (void)logHeuristicFeedbackToSuggestionsForAction:(id)a0 withActionType:(unsigned short)a1;
- (void)_assertHistogram:(id)a0 weight:(float)a1;
- (void)_updateAppLaunchCategoricalHistogram:(long long)a0 bundleId:(id)a1 category:(id)a2 context:(id)a3 weight:(float)a4;
- (id)init;
- (void).cxx_destruct;
- (void)_updateAppLaunchHistogram:(long long)a0 bundleId:(id)a1 context:(id)a2 weight:(float)a3;
- (void)receiveLockscreenFeedbackWithAction:(id)a0 actionResponse:(id)a1 engagement:(BOOL)a2 triggeredByUserInteraction:(BOOL)a3;
- (void)receiveClientModelResult:(id)a0;
- (void)logCacheAgeMetricForLockscreenWithActionResponse:(id)a0;
- (id)_actionResponseFromClientModelResult:(id)a0 shownActions:(id)a1 rejectedActions:(id)a2 engagedAction:(id)a3 engagedSuggestion:(id)a4;
- (void)applyFinalFeedbackForActionResponse:(id)a0 engagementType:(unsigned long long)a1 context:(id)a2;
- (id)_scoredActionsFromProactiveSuggestions:(id)a0;
- (void)logHeuristicFeedbackToPortraitForAction:(id)a0 withActionType:(unsigned short)a1;
- (void)receiveLockscreenFeedbackWithAction:(id)a0 actionResponse:(id)a1 engagement:(BOOL)a2 triggeredByUserInteraction:(BOOL)a3 currentDate:(id)a4;
- (void)sessionLogWithActionResponse:(id)a0 engagementType:(unsigned long long)a1 context:(id)a2;
- (id)initWithPredictionContextBuilder:(id)a0 actionFeedbackWeights:(id)a1 appLaunchHistogramManager:(id)a2 actionNotificationServer:(id)a3 recentEngagmentCache:(id)a4 appIntentMonitor:(id)a5 dataStore:(id)a6 abGroupIdentifiers:(id)a7 userMetricsLogger:(id)a8 predictionsTracker:(id)a9 predictionItemsTracker:(id)a10 engagedInitTracker:(id)a11 engagementTracker:(id)a12 predictedSlotTracker:(id)a13 engagedSlotTracker:(id)a14 captureRateTracker:(id)a15 tvEngagementTracker:(id)a16 tvShownTracker:(id)a17 durationTracker:(id)a18 petTracker:(id)a19;
- (void)receiveFeedbackWithActionResponse:(id)a0 context:(id)a1;
- (void)decayCounts;
- (unsigned long long)_feedbackStageForClientModelResult:(id)a0 engagedSuggestion:(id)a1;
- (void)resetData;
- (id)clientModelIds;
- (void)logHeuristicFeedback:(id)a0;

@end
