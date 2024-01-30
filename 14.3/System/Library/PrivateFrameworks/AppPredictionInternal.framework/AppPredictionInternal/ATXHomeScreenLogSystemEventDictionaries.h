@class NSMutableDictionary;

@interface ATXHomeScreenLogSystemEventDictionaries : NSObject {
    NSMutableDictionary *_systemLevelEventDictionary;
    NSMutableDictionary *_unlockSessionEngagementDictionary;
}

+ (id)systemLevelDictionaryAccumulatorKeys;
+ (id)systemLevelDictionaryAccumulatorSplitByLocationKeys;
+ (id)_suggestionReasonToWidgetEventDictionariesProactiveWidgetRotationsKey:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (void)sendToCoreAnalytics;
- (id)dryRunResult;
- (id)_createNewSystemLevelDictionary;
- (void)_populateDeprecatedKeys;
- (void)_addKey:(id)a0 splitByLocation:(unsigned long long)a1 toAggregateKey:(id)a2;
- (void)populateUnlockSessionEngagementSummaryFromManager:(id)a0;
- (void)updateSystemLevelSummaryTotalUnlockSessions:(unsigned long long)a0;
- (void)updateSystemLevelUnlockSessionsWithWidgetDwell:(id)a0;
- (void)updateSystemLevelSummaryForHomeScreenEvent:(id)a0;
- (void)updateSystemLevelSummaryForHomeScreenPages:(id)a0 startDate:(id)a1;
- (void)updateSystemLevelSummaryWithRotationSession:(id)a0;
- (void)updateSystemLevelSummaryForWidgetPseudoTapWithStackShownEvent:(id)a0;

@end
