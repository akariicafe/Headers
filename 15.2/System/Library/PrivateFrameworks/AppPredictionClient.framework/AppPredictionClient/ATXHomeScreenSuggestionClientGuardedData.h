@class NSHashTable, NSString, ATXHomeScreenCachedSuggestions, ATXInformationStore, NSSet, NSMutableDictionary, NSDictionary, ATXHomeScreenEventLogger, NSMutableArray, NSObject, ATXWidgetSuggestionDismissManager;
@protocol OS_dispatch_source;

@interface ATXHomeScreenSuggestionClientGuardedData : NSObject {
    NSHashTable *observers;
    NSObject<OS_dispatch_source> *rotationSuppressionTimer;
    NSObject<OS_dispatch_source> *layoutUpdateSuppressionTimer;
    BOOL isUserInteractingWithProactiveWidget;
    NSSet *knownHomeScreenProactiveWidgetUniqueIdsAtTimeOfBlending;
    BOOL shouldUpdateKnownHomeScreenWidgetUniqueIdsAtTimeOfBlending;
    NSSet *knownTodayPageProactiveWidgetUniqueIdsAtTimeOfBlending;
    BOOL shouldUpdateKnownTodayPageWidgetUniqueIdsAtTimeOfBlending;
    ATXHomeScreenCachedSuggestions *suppressedSuggestions;
    NSMutableDictionary *appPanelIdentifierToPageIndex;
    NSDictionary *previousSuggestedSuggestionWidgetLayouts;
    NSDictionary *currentSuggestionWidgetLayouts;
    NSDictionary *currentAppPredictionPanelLayouts;
    NSDictionary *currentStackSuggestions;
    NSMutableArray *currentFallbacks;
    NSMutableDictionary *pagesToUsedFallbackAppSuggestions;
    NSString *currentBlendingCacheId;
    NSMutableArray *stacksAffectedByDebugRotation;
    ATXInformationStore *store;
    ATXHomeScreenEventLogger *logger;
    ATXWidgetSuggestionDismissManager *widgetDismissManager;
}

- (void).cxx_destruct;

@end
