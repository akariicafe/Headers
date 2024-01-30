@class NSMutableDictionary;

@interface ATXHomeScreenLogSystemChangeDictionary : NSObject {
    NSMutableDictionary *_systemChangeDictionary;
}

+ (id)systemChangeDictionaryAccumulatorKeys;

- (id)init;
- (void).cxx_destruct;
- (void)sendToCoreAnalytics;
- (id)_createNewSystemChangeDictionary;
- (BOOL)_fetchHasHadWidgetsOnHomeScreenUserDefault;
- (void)_logSuggestedWidgetDismissalWithEvent:(id)a0;
- (void)_logSuggestedWidgetExplicitDismissalWithEvent:(id)a0;
- (BOOL)_suggestedWidgetWasExplicitlyDismissedWithEvent:(id)a0;
- (id)dryRunResult;
- (void)updateSystemChangeSummaryForHomeScreenEvent:(id)a0;
- (void)updateSystemChangeSummaryForHomeScreenPages:(id)a0;

@end
