@class PETScalarEventTracker, PETDistributionEventTracker, _ATXBundleIdSet;

@interface _ATXAggregateLogger : NSObject {
    _ATXBundleIdSet *_bundleIdSet;
    long long _buildType;
    PETScalarEventTracker *_allLaunchesPredictionTracker;
    PETScalarEventTracker *_predictionTracker;
    PETScalarEventTracker *_conversionTracker;
    PETScalarEventTracker *_outcomeTracker;
    PETScalarEventTracker *_outcomeConsumerTracker;
    PETDistributionEventTracker *_outcomeConsumerTrackerWithCacheAge;
    PETDistributionEventTracker *_consumerOutcomeCacheAgeHistogram;
    PETScalarEventTracker *_appOutcomeTracker;
    PETScalarEventTracker *_conversionPositionTracker;
    PETScalarEventTracker *_itemsShownTracker;
    PETScalarEventTracker *_expertOutcomeTracker;
    PETScalarEventTracker *_predictUninstalledAppsTracker;
    PETScalarEventTracker *_widgetBackgroundRefreshTracker;
    PETDistributionEventTracker *_inputsTracker;
    PETDistributionEventTracker *_scoreTracker;
    PETScalarEventTracker *_quietingSuggestionOutcomeTracker;
    PETScalarEventTracker *_promotingSuggestionOutcomeTracker;
    PETScalarEventTracker *_notificationOutcomeTracker;
    PETScalarEventTracker *_suggestionsCountTracker;
    PETScalarEventTracker *_limitedAppLaunchTracker;
}

+ (id)sharedInstance;
+ (id)stringForPredictionOutcome:(unsigned long long)a0;
+ (id)notificationOutcomesMapping;
+ (id)propertyStringForLaunchReason:(id)a0;
+ (id)predictedItemOutcomesMapping;
+ (id)suggestionCountsArray;
+ (id)quietingSuggestionOutcomesMapping;
+ (id)stringForPredictedItemOutcome:(unsigned long long)a0;
+ (BOOL)isConversionOutcome:(unsigned long long)a0;
+ (void)yesWithProbabilityStopMocking;
+ (id)predictionOutcomesMapping;
+ (long long)getBuildType;
+ (BOOL)yesWithProbability:(double)a0;
+ (void)yesWithProbabilityAlwaysSays:(BOOL)a0;

- (void)logPredictUninstalledApps:(unsigned long long)a0 consumerSubType:(unsigned char)a1;
- (void)logQuietingSuggestionOutcome:(long long)a0;
- (void)logNotificationInteraction:(long long)a0 orbed:(BOOL)a1 onscreen:(BOOL)a2;
- (void)logLaunchEventWithLaunchReason:(id)a0 predicted:(BOOL)a1 position:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)logAppLaunch:(id)a0 bundleId:(id)a1;
- (void)logPredictionOfAppWithBundleId:(id)a0 inputs:(const float *)a1 outcome:(unsigned long long)a2 rank:(unsigned long long)a3 score:(float)a4 forABGroup:(id)a5;
- (void)logSuggestionCounts:(id)a0;
- (void)logInputs:(const float *)a0 andScore:(float)a1 withOutcome:(unsigned long long)a2;
- (void)logPredictionEventWith:(id)a0 outcome:(unsigned long long)a1 forABGroup:(id)a2 consumerType:(unsigned long long)a3 andSubType:(unsigned char)a4;
- (void)logPromotingSuggestionOutcome:(long long)a0;
- (void)logRefreshedWidgetInBackground;

@end
