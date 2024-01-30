@class NSMutableDictionary;

@interface ATXHomeScreenLogSystemChangeDictionary : NSObject {
    NSMutableDictionary *_systemChangeDictionary;
}

+ (id)systemChangeDictionaryAccumulatorKeys;

- (void).cxx_destruct;
- (id)init;
- (void)sendToCoreAnalytics;
- (id)dryRunResult;
- (id)_createNewSystemChangeDictionary;
- (BOOL)_fetchHasHadWidgetsOnHomeScreenUserDefault;
- (void)_logSuggestedWidgetDismissalWithEvent:(id)a0;
- (BOOL)_suggestedWidgetWasExplicitlyDismissedWithEvent:(id)a0;
- (void)_logSuggestedWidgetExplicitDismissalWithEvent:(id)a0;
- (void)updateSystemChangeSummaryForHomeScreenPages:(id)a0;
- (void)updateSystemChangeSummaryForHomeScreenEvent:(id)a0;

@end
