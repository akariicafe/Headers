@class NSMutableDictionary;

@interface ATXHomeScreenLogWidgetAddSheetDictionaries : NSObject {
    NSMutableDictionary *_widgetAddSheetDictionaries;
}

+ (id)rankKeysSplitBySize;

- (id)init;
- (void).cxx_destruct;
- (void)sendToCoreAnalytics;
- (id)_createNewWidgetAddSheetDictionaryForBundleId:(id)a0 kind:(id)a1;
- (void)_updateWidgetAddSheetDictionariesForDescriptor:(id)a0 inStack:(BOOL)a1 rank:(unsigned long long)a2;
- (void)_updateWidgetAddSheetDictionariesForStack:(id)a0 suggestedSize:(unsigned long long)a1;
- (void)_updateWidgetAddSheetDictionariesWithDictionary:(id)a0 suggestedSize:(unsigned long long)a1 inStack:(BOOL)a2 rank:(unsigned long long)a3;
- (id)_widgetAddSheetDictionaryForDescriptor:(id)a0;
- (id)_widgetAddSheetDictionaryForStack;
- (id)_widgetAddSheetDictionaryForWidgetId:(id)a0 widgetKind:(id)a1;
- (id)dryRunResult;
- (void)updateWidgetAddSheetSummaryForDefaultStack:(id)a0;
- (void)updateWidgetAddSheetSummaryForSuggestions:(id)a0;
- (id)widgetAddSheetDictionaryKeyWithWidgetId:(id)a0 widgetKind:(id)a1;

@end
