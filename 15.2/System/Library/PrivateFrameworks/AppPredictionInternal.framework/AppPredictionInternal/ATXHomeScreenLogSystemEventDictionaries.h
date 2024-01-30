@class NSMutableDictionary, NSMutableSet;

@interface ATXHomeScreenLogSystemEventDictionaries : NSObject {
    NSMutableDictionary *_systemLevelEventDictionary;
    NSMutableDictionary *_unlockSessionEngagementDictionary;
    NSMutableSet *_unique3PWidgetsOnHS;
}

+ (id)systemLevelDictionaryAccumulatorKeys;
+ (id)systemLevelDictionaryAccumulatorSplitByLocationKeys;
+ (id)_suggestionReasonToWidgetEventDictionariesProactiveWidgetRotationsKey:(int)a0;

- (void).cxx_destruct;
- (id)init;
- (void)sendToCoreAnalytics;
- (id)dryRunResult;
- (id)_createNewSystemLevelDictionary;
- (void)_populateSystemLevelDictionaryWithWidgetCohortAdoptionMetrics:(id)a0;
- (id)_getOnboardingResultStringAndUpdateStackRemovedDateIfNeededWithDefaults:(id)a0;
- (void)updateNPlusOneLifetimeMetricsWithRotationSession:(id)a0;
- (void)populateUnlockSessionEngagementSummaryFromManager:(id)a0;
- (void)updateSystemLevelSummaryTotalUnlockSessions:(unsigned long long)a0;
- (void)updateSystemLevelUnlockSessionsWithWidgetDwell:(id)a0;
- (void)updateSystemLevelSummaryForHomeScreenEvent:(id)a0;
- (void)updateSystemLevelSummaryForHomeScreenPages:(id)a0 startDate:(id)a1;
- (void)populateLifetimeNPlusOneStatistics;
- (void)updateSystemLevelSummaryWithRotationSession:(id)a0;
- (void)updateSystemLevelSummaryForWidgetPseudoTapWithStackShownEvent:(id)a0;
- (void)_addKey:(id)a0 splitByLocation:(unsigned long long)a1 toAggregateKey:(id)a2;
- (void)populateHasBehavioralData;
- (void)populateUsedKettle;

@end
