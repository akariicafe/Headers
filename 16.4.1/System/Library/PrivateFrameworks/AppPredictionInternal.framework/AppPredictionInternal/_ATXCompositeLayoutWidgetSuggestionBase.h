@class ATXProactiveSuggestion, NSMutableDictionary, ATXBlendingLayerHyperParameters, NSString, ATXHomeScreenWidgetIdentifiable, _ATXHomeScreenStackState, ATXSuggestionLayout;
@protocol ATXSuggestionDeduplicatorProtocol;

@interface _ATXCompositeLayoutWidgetSuggestionBase : NSObject <_ATXCompositeLayoutWidgetSuggesting>

@property (readonly, nonatomic) id<ATXSuggestionDeduplicatorProtocol> suggestionDeduplicator;
@property (readonly, nonatomic) ATXBlendingLayerHyperParameters *hyperParameters;
@property (readonly, nonatomic) NSMutableDictionary *suggestionsBySuggestionLayoutTypes;
@property (readonly, nonatomic) long long layoutType;
@property (readonly, weak, nonatomic) _ATXHomeScreenStackState *stack;
@property (readonly, nonatomic) ATXHomeScreenWidgetIdentifiable *widget;
@property (readonly, nonatomic) ATXSuggestionLayout *suggestionLayout;
@property (readonly, nonatomic) ATXProactiveSuggestion *mainSuggestionInLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)addSuggestion:(id)a0 asMainSuggestion:(BOOL)a1 dryRun:(BOOL)a2;
- (BOOL)containsIdenticalContentOfSuggestion:(id)a0;
- (void).cxx_destruct;
- (BOOL)addSuggestion:(id)a0 asMainSuggestion:(BOOL)a1;
- (id)_existingSuggestionsInLayout;
- (BOOL)canAddSuggestion:(id)a0;
- (BOOL)isLayoutComplete;

@end
