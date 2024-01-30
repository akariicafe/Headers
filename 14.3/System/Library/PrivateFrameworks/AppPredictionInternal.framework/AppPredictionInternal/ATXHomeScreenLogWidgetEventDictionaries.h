@class NSMutableDictionary;

@interface ATXHomeScreenLogWidgetEventDictionaries : NSObject {
    NSMutableDictionary *_widgetEventDictionaries;
}

+ (id)widgetEventDictionaryAccumulatorKeys;
+ (id)widgetEventDictionaryAccumulatorSplitByLocationKeys;

- (id)init;
- (void).cxx_destruct;
- (void)sendToCoreAnalytics;
- (id)dryRunResult;
- (id)_widgetEventDictionaryForHomeScreenEvent:(id)a0;
- (id)_widgetEventDictionaryForWidgetId:(id)a0 widgetKind:(id)a1 widgetSize:(unsigned long long)a2;
- (id)_widgetEventDictionaryKeyWithWidgetId:(id)a0 widgetKind:(id)a1 widgetSize:(unsigned long long)a2;
- (id)_createNewWidgetEventDictionaryForBundleId:(id)a0 kind:(id)a1 size:(unsigned long long)a2;
- (id)_widgetEventDictionaryForATXHomeScreenWidgetIdentifiable:(id)a0;
- (void)updateWidgetLevelSummaryForHomeScreenEvent:(id)a0 lastStackEvent:(id)a1;
- (void)updateWidgetLevelSummaryForHomeScreenPages:(id)a0;
- (void)updateWidgetLevelSummaryForWidgetPseudoTapWithStackShownEvent:(id)a0;
- (void)updateUnlockSessionsWithWidgetDwell:(id)a0;

@end
