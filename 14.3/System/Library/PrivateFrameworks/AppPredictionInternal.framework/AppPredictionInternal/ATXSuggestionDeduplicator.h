@class NSString, NSDictionary;

@interface ATXSuggestionDeduplicator : NSObject <ATXSuggestionDeduplicatorProtocol> {
    NSDictionary *_visibleAppsByPage;
    NSDictionary *_bundleIdReplacementDict;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)suggestionIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1;
- (id)init;
- (BOOL)suggestionIsDuplicate:(id)a0 otherApps:(id)a1;
- (BOOL)suggestionsAreAppAndAction:(id)a0 otherSuggestion:(id)a1;
- (void).cxx_destruct;
- (BOOL)suggestionIsDuplicateOfDeweyUI:(id)a0;
- (BOOL)widgetSuggestionIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (BOOL)suggestionsAreDuplicateAppAndAction:(id)a0 otherSuggestion:(id)a1;
- (id)pinnedWidgetIdentifiablesWithExtensionId:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2 shouldStopAfterFindingFirstOne:(BOOL)a3;
- (BOOL)suggestionIsDuplicate:(id)a0 appsOnHomeScreenPageAtIndex:(unsigned long long)a1;
- (BOOL)suggestionIsDuplicateAppOrWidget:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (id)_initWithVisibleAppsByPage:(id)a0;
- (BOOL)suggestionIsDuplicate:(id)a0 existingSuggestions:(id)a1;
- (BOOL)widgetSuggestionIsPinned:(id)a0 homeScreenPage:(id)a1 excludingStackConfigId:(id)a2;
- (id)stacksWithDuplicateWidgetExtensionId:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (id)replacementBundleIdForBundleId:(id)a0;
- (id)stacksToConsiderForLeftOfHomeForStackId:(id)a0 stacksOnPage:(id)a1;
- (BOOL)executableSpecsAreDuplicates:(id)a0 otherExecutableSpec:(id)a1;
- (id)stacksWithDuplicateWidgetSuggestion:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (BOOL)widgetExtensionIdIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (BOOL)widgetExtensionIdIsPinned:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (id)executableClassStringsToUnarchiveDuringComparison;
- (id)duplicateWidgetForWidgetSuggestion:(id)a0 otherWidgets:(id)a1;

@end
