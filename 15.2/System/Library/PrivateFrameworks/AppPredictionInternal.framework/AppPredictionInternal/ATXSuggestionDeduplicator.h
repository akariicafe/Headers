@class NSString, NSDictionary;

@interface ATXSuggestionDeduplicator : NSObject <ATXSuggestionDeduplicatorProtocol> {
    NSDictionary *_visibleAppsByPage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duplicateWidgetForWidgetSuggestion:(id)a0 otherWidgets:(id)a1;
- (BOOL)suggestionsAreDuplicateWidgetAndAction:(id)a0 otherSuggestion:(id)a1;
- (BOOL)widgetSuggestionIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (BOOL)isWidget:(id)a0 showingIdenticalContentOfSuggestion:(id)a1;
- (BOOL)suggestionIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1;
- (BOOL)suggestionIsDuplicateAppOrWidget:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (id)stacksToConsiderForLeftOfHomeForStackId:(id)a0 stacksOnPage:(id)a1;
- (BOOL)suggestionIsDuplicate:(id)a0 existingSuggestions:(id)a1 shouldCompareAcrossTypes:(BOOL)a2;
- (BOOL)suggestionIsDuplicate:(id)a0 appsOnHomeScreenPageAtIndex:(unsigned long long)a1;
- (BOOL)_isWidget:(id)a0 showingContentOfAction:(id)a1;
- (BOOL)suggestionIsDuplicate:(id)a0 existingSuggestions:(id)a1;
- (BOOL)suggestionIsDuplicateOfDeweyUI:(id)a0;
- (BOOL)suggestionIsDuplicate:(id)a0 otherApps:(id)a1;
- (void).cxx_destruct;
- (id)_initWithVisibleAppsByPage:(id)a0;
- (id)init;
- (BOOL)executableSpecsAreDuplicates:(id)a0 otherExecutableSpec:(id)a1;
- (id)stacksWithDuplicateWidgetExtensionId:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (BOOL)widgetExtensionIdIsPinned:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (id)executableClassStringsToUnarchiveDuringComparison;
- (id)stacksWithDuplicateWidgetSuggestion:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (BOOL)widgetSuggestionIsPinned:(id)a0 homeScreenPage:(id)a1 excludingStackConfigId:(id)a2;
- (BOOL)_isContactsWidgetIntent:(id)a0 overlappingContactsWithOtherContactsWidgetIntent:(id)a1;
- (BOOL)suggestionsAreDuplicateAppAndAction:(id)a0 otherSuggestion:(id)a1;
- (BOOL)_isWidget:(id)a0 showingContentOfInfoSuggestion:(id)a1;
- (BOOL)widgetExtensionIdIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (id)pinnedWidgetIdentifiablesWithExtensionId:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2 shouldStopAfterFindingFirstOne:(BOOL)a3;

@end
