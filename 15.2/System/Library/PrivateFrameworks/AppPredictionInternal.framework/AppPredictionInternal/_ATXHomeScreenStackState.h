@class ATXStackStateTracker, NSMutableDictionary, ATXBlendingLayerHyperParameters, ATXHomeScreenStackConfig, NSMutableArray, _ATXHomeScreenPageState;
@protocol ATXSuggestionDeduplicatorProtocol, _ATXWidgetSuggesting;

@interface _ATXHomeScreenStackState : NSObject {
    ATXStackStateTracker *_stackStateTracker;
    id<ATXSuggestionDeduplicatorProtocol> _suggestionDeduplicator;
    ATXBlendingLayerHyperParameters *_hyperParameters;
    id<_ATXWidgetSuggesting> _topOfStackSuggestion;
}

@property (readonly, weak, nonatomic) _ATXHomeScreenPageState *page;
@property (readonly, nonatomic) ATXHomeScreenStackConfig *config;
@property (retain, nonatomic) id<_ATXWidgetSuggesting> topOfStackSuggestion;
@property (readonly, nonatomic) id<_ATXWidgetSuggesting> previousTopOfStackSuggestion;
@property (readonly, nonatomic) NSMutableArray *suggestedWidgets;
@property (readonly, nonatomic) NSMutableArray *previousSuggestedWidgets;
@property (readonly, nonatomic) NSMutableDictionary *suggestionsWidgetSuggestionsByWidgetUniqueId;

- (BOOL)isStale;
- (BOOL)containsWidgetForAction:(id)a0;
- (BOOL)topWidgetIsShowingIdenticalContentOfSuggestion:(id)a0 ignoreDuplicatesInSGWidget:(BOOL)a1 ignoreDuplicatesInPanels:(BOOL)a2;
- (BOOL)mostRecentRotationOfStackIsSystemInitiated;
- (id)_firstWidgetPassingTest:(id /* block */)a0 considerSuggestedWidgets:(BOOL)a1;
- (id)widgetForSuggestion:(id)a0 considerSuggestedWidgets:(BOOL)a1;
- (BOOL)containsIdenticalContentOfSuggestion:(id)a0 ignoreDuplicatesInSGWidget:(BOOL)a1 ignoreDuplicatesInPanels:(BOOL)a2;
- (id)previousTopWidget;
- (id)initWithPageState:(id)a0 stackConfig:(id)a1 stackStateTracker:(id)a2 suggestionDeduplicator:(id)a3 hyperParameters:(id)a4;
- (BOOL)containsWidgetForApp:(id)a0;
- (BOOL)sizeIsCompatibleWithWidgetSuggestion:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)previousTopWidgetWasShowingIdenticalContentOfSuggestion:(id)a0;
- (id)_previousSuggestionForMemberWidget:(id)a0;
- (BOOL)containsSuggestedWidgetForApp:(id)a0;
- (BOOL)previousSuggestedWidgetsContainIdenticalContentOfSuggestion:(id)a0;

@end
