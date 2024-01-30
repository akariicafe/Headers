@class NSArray, NSSet, NSString, ATXHomeScreenWidgetIdentifiable;

@interface ATXFakeSuggestionDeduplicator : NSObject <ATXSuggestionDeduplicatorProtocol> {
    BOOL _blanketValueIsSet;
    BOOL _existingSuggestionsReturnValueIsSet;
    BOOL _homeScreenPageReturnValueIsSet;
    BOOL _duplicateWidgetReturnValueIsSet;
}

@property (nonatomic) BOOL blanketReturnValue;
@property (nonatomic) BOOL existingSuggestionsReturnValue;
@property (nonatomic) BOOL homeScreenPageReturnValue;
@property (retain, nonatomic) ATXHomeScreenWidgetIdentifiable *duplicateWidgetReturnValue;
@property (retain, nonatomic) NSArray *pinnedWidgetSuggestions;
@property (retain, nonatomic) NSSet *appsOnPage;
@property (retain, nonatomic) NSArray *suggestionsInRecentlyEngagedCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)suggestionIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1;
- (id)init;
- (BOOL)suggestionIsDuplicate:(id)a0 otherApps:(id)a1;
- (void).cxx_destruct;
- (BOOL)suggestionIsDuplicateOfDeweyUI:(id)a0;
- (BOOL)widgetSuggestionIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (id)pinnedWidgetIdentifiablesWithExtensionId:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2 shouldStopAfterFindingFirstOne:(BOOL)a3;
- (BOOL)suggestionIsDuplicate:(id)a0 appsOnHomeScreenPageAtIndex:(unsigned long long)a1;
- (BOOL)suggestionIsDuplicateAppOrWidget:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (BOOL)suggestionIsDuplicate:(id)a0 existingSuggestions:(id)a1;
- (BOOL)widgetSuggestionIsPinned:(id)a0 homeScreenPage:(id)a1 excludingStackConfigId:(id)a2;
- (BOOL)widgetExtensionIdIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (BOOL)widgetExtensionIdIsPinned:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (id)duplicateWidgetForWidgetSuggestion:(id)a0 otherWidgets:(id)a1;

@end
