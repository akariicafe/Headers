@class ATXStackStateTracker, NSArray, NSUUID, NSMutableDictionary, NSSet, ATXEngagementRecordManager, ATXHomeScreenCachedSuggestions;
@protocol ATXSuggestionDeduplicatorProtocol;

@interface ATXHomeScreenLayoutSelector : NSObject {
    NSArray *_homeScreenPageConfigs;
    NSArray *_rankedSuggestions;
    BOOL _suggestionsWidgetsShouldBeDisjointOnAPage;
    id<ATXSuggestionDeduplicatorProtocol> _suggestionDeduplicator;
    ATXEngagementRecordManager *_engagementRecordManager;
    ATXStackStateTracker *_stackStateTracker;
    ATXHomeScreenCachedSuggestions *_previousHSCache;
    NSUUID *_cacheUpdateUUID;
    NSMutableDictionary *_stackIdToLayoutDictionary;
    NSMutableDictionary *_sgWidgetIdToLayoutDictionary;
    NSMutableDictionary *_appPanelIdToLayoutDictionary;
    NSSet *_dismissedSuggestionsForSGWidget;
    NSSet *_dismissedSuggestionsForAppPanels;
}

+ (id)sgWidgetsInStack:(id)a0;

- (void)removeWidgetAlreadyOnTopOfStackFromValidSuggestionsForStalenessRotationIfPossible:(id)a0 stackConfig:(id)a1;
- (void)setLayoutForTopOfStackWithConfig:(id)a0 pageState:(id)a1;
- (id)fallbackCandidatesGivenSelectedCandidates;
- (void).cxx_destruct;
- (void)setLayoutsForAddWidgetUI;
- (BOOL)stackIsPinnedSGWidget:(id)a0;
- (id)initWithHomeScreenPageConfigurations:(id)a0 rankedSuggestions:(id)a1 suggestionsWidgetsShouldBeDisjointOnAPage:(BOOL)a2;
- (id)generateLayoutsWithSuggestions:(id)a0 consumerSubType:(unsigned char)a1 stackLayoutSize:(unsigned long long)a2;
- (void)removeSuggestionsWithInferredEngagementIfApplicableFromIndices:(id)a0 validSuggestions:(id)a1;
- (BOOL)suggestionLayoutIsValidForTopOfStack:(id)a0 stackConfig:(id)a1 pageConfig:(id)a2 stackIsStale:(BOOL)a3;
- (id)reorderedSuggestionsBasedOnPreviousLayouts:(id)a0 panelIndex:(unsigned long long)a1 pageState:(id)a2;
- (id)freshPageStateWithPageConfig:(id)a0;
- (void)setLayoutForUnfilledSGWidget:(id)a0 pageState:(id)a1;
- (id)validCandidateSuggestionsForAppPanel:(id)a0 panelIndex:(unsigned long long)a1 pageState:(id)a2;
- (id)selectedLayouts;
- (void)trackUnfilledSGWidgetsInStack:(id)a0 pageState:(id)a1;
- (id)validCandidateSuggestionsForTopOfStack:(id)a0 pageState:(id)a1 stackIsStale:(BOOL)a2;
- (id)appPredictionSuggestionsFromSuggestions:(id)a0;
- (void)setLayoutsForPinnedSGWidgetsOnPage:(id)a0;
- (void)removeEngagedWidgetSuggestionsIfApplicableForSuggestions:(id)a0 stackIsStale:(BOOL)a1 stackConfig:(id)a2;
- (BOOL)canPlaceSGWidgetOnTopOfStack:(id)a0 pageState:(id)a1;
- (BOOL)canPlaceInfoWidgetSuggestion:(id)a0 onTopOfStack:(id)a1 pageState:(id)a2 widgetExistsInStack:(BOOL *)a3;
- (id)initWithHomeScreenPageConfigurations:(id)a0 rankedSuggestions:(id)a1 suggestionsWidgetsShouldBeDisjointOnAPage:(BOOL)a2 suggestionDeduplicator:(id)a3 engagementRecordManager:(id)a4 stackStateTracker:(id)a5;
- (void)setLayoutForAppPanelWithConfig:(id)a0 panelIndex:(unsigned long long)a1 pageState:(id)a2;
- (void)setLayoutsForSuggestionsWidgetsInStack:(id)a0 selectedLayout:(id)a1;
- (id)regenerateLowConfidenceStackRotationForPreviouslyStaleStackIfNeeded:(id)a0 stackConfig:(id)a1;
- (id)validCandidateSuggestionsForUnfilledSGWidgetWithPageState:(id)a0;
- (BOOL)stackIsStale:(id)a0;

@end
