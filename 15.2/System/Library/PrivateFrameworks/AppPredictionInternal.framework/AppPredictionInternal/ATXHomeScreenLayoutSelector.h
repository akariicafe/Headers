@class NSMutableDictionary, ATXSuggestionModeFilter, ATXBlendingLayerHyperParameters, ATXStackStateTracker, ATXWidgetSuggestionDismissManager, ATXHomeScreenCachedSuggestions, NSMutableArray, NSString, CHSProactiveService, ATXEngagementRecordManager, NSSet, NSUserDefaults, NSArray, ATXInformationStore, NSUUID;
@protocol ATXSuggestionDeduplicatorProtocol;

@interface ATXHomeScreenLayoutSelector : NSObject <ATXLayoutSelectorProtocol> {
    NSArray *_homeScreenPageConfigs;
    NSArray *_rankedSuggestions;
    BOOL _suggestionsWidgetsShouldBeDisjointOnAPage;
    id<ATXSuggestionDeduplicatorProtocol> _suggestionDeduplicator;
    ATXEngagementRecordManager *_engagementRecordManager;
    ATXWidgetSuggestionDismissManager *_widgetDismissManager;
    ATXStackStateTracker *_stackStateTracker;
    ATXInformationStore *_store;
    NSUserDefaults *_defaults;
    ATXSuggestionModeFilter *_modeFilter;
    CHSProactiveService *_chronoService;
    ATXBlendingLayerHyperParameters *_hyperParameters;
    BOOL _isiPad;
    ATXHomeScreenCachedSuggestions *_previousHSCache;
    NSUUID *_cacheUpdateUUID;
    NSMutableDictionary *_stackIdToLayoutDictionary;
    NSMutableDictionary *_sgWidgetIdToLayoutDictionary;
    NSMutableDictionary *_appPanelIdToLayoutDictionary;
    NSSet *_dismissedSuggestionsForSGWidget;
    NSSet *_dismissedSuggestionsForAppPanels;
    NSMutableArray *_suggestionsAssignedAsNPlusOne;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sgWidgetsInStack:(id)a0;

- (void)trackUnfilledSGWidgetsInStack:(id)a0 pageState:(id)a1;
- (id)generateLayoutsWithSuggestions:(id)a0 consumerSubType:(unsigned char)a1 stackLayoutSize:(unsigned long long)a2;
- (void)setLayoutsForAddWidgetUI;
- (void)setLayoutForAppPanelWithConfig:(id)a0 panelIndex:(unsigned long long)a1 pageState:(id)a2;
- (void)setLayoutForTopOfStackWithConfig:(id)a0 pageState:(id)a1;
- (BOOL)canPlaceSGWidgetOnTopOfStack:(id)a0 pageState:(id)a1;
- (BOOL)stackIsStale:(id)a0;
- (id)freshPageStateWithPageConfig:(id)a0;
- (void)removeWidgetAlreadyOnTopOfStackFromValidSuggestionsForStalenessRotationIfPossible:(id)a0 stackConfig:(id)a1;
- (id)validCandidateSuggestionsForUnfilledSGWidgetWithPageState:(id)a0;
- (id)validCandidateSuggestionsForTopOfStack:(id)a0 pageState:(id)a1 stackIsStale:(BOOL)a2;
- (id)selectedLayouts;
- (BOOL)stackIsPinnedSGWidget:(id)a0;
- (void)setLayoutsForPinnedSGWidgetsOnPage:(id)a0;
- (void)setLayoutsForSuggestionsWidgetsInStack:(id)a0 selectedLayout:(id)a1;
- (id)validCandidateSuggestionsForAppPanel:(id)a0 panelIndex:(unsigned long long)a1 pageState:(id)a2;
- (id)appPredictionSuggestionsFromSuggestions:(id)a0;
- (void).cxx_destruct;
- (void)setLayoutForUnfilledSGWidget:(id)a0 pageState:(id)a1;
- (void)removeSuggestionsWithInferredEngagementIfApplicableFromIndices:(id)a0 validSuggestions:(id)a1;
- (id)init;
- (id)fallbackCandidatesGivenSelectedCandidates;
- (id)regenerateLowConfidenceStackRotationForPreviouslyStaleStackIfNeeded:(id)a0 stackConfig:(id)a1;
- (BOOL)suggestionLayoutIsValidForTopOfStack:(id)a0 stackConfig:(id)a1 pageConfig:(id)a2 stackIsStale:(BOOL)a3;
- (id)selectedLayoutForConsumerSubType:(unsigned char)a0 rankedSuggestions:(id)a1;
- (id)initWithBlendingLayerHyperParameters:(id)a0 suggestionsWidgetsShouldBeDisjointOnAPage:(BOOL)a1;
- (id)homeScreenPageConfigs;
- (id)reorderedSuggestionsBasedOnPreviousLayouts:(id)a0 panelIndex:(unsigned long long)a1 pageState:(id)a2;
- (BOOL)canPlaceWidgetSuggestion:(id)a0 onTopOfStack:(id)a1 pageState:(id)a2 widgetExistsInStack:(BOOL *)a3;
- (id)initWithBlendingLayerHyperParameters:(id)a0 suggestionsWidgetsShouldBeDisjointOnAPage:(BOOL)a1 suggestionDeduplicator:(id)a2 engagementRecordManager:(id)a3 widgetDismissManager:(id)a4 stackStateTracker:(id)a5 store:(id)a6 defaults:(id)a7 modeFilter:(id)a8 chronoService:(id)a9 isiPad:(BOOL)a10;
- (void)removeEngagedWidgetSuggestionsIfApplicableForSuggestions:(id)a0 stackIsStale:(BOOL)a1 stackConfig:(id)a2;

@end
