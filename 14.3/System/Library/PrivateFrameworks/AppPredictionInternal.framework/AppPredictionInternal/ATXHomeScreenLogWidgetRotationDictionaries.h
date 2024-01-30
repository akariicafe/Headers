@class NSMutableDictionary;

@interface ATXHomeScreenLogWidgetRotationDictionaries : NSObject {
    NSMutableDictionary *_widgetRotationDictionaries;
}

+ (id)_sourceKeyForWidgetRotationForRotationSession:(id)a0;
+ (id)widgetRotationDictionaryAccumulatorKeys;
+ (id)_suggestionReasonToWidgetRotationDictionariesSourceKey:(int)a0;
+ (id)_sourceKeyOfNonProactiveWidgetRotationForReason:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_widgetRotationDictionaryForWidgetBundleId:(id)a0 kind:(id)a1 size:(unsigned long long)a2 source:(id)a3 location:(id)a4;
- (id)_widgetRotationDictionaryKeyWithWidgetId:(id)a0 widgetKind:(id)a1 widgetSize:(unsigned long long)a2 source:(id)a3 location:(id)a4;
- (id)_createNewWidgetRotationDictionaryForBundleId:(id)a0 kind:(id)a1 size:(unsigned long long)a2 source:(id)a3 location:(id)a4;
- (void)updateWithRotationSession:(id)a0;
- (void)sendToCoreAnalytics;
- (id)dryRunResult;

@end
