@class WFContextualActionSuggester, WFActionDrawerResults, WFWorkflow, WFActionRegistry, NSObject, HMHome;
@protocol OS_dispatch_queue;

@interface WFActionDrawerResultsController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) WFActionRegistry *actionRegistry;
@property (readonly, nonatomic) WFActionDrawerResults *cachedSiriSuggestionsResults;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) WFContextualActionSuggester *actionSuggester;

+ (id)localizedAppNames;

- (id)homes;
- (id)actions;
- (void).cxx_destruct;
- (id)actionsForCategory:(id)a0;
- (void)getContextualSuggestionsForCurrentActions:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSiriSuggestedGroupedResultsRefreshingCache:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getResultsForSearchQuery:(id)a0 includingSiriSuggestedResults:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)filteringForResidentCompatibleActions;
- (void)getResultsForAppWithBundleIdentifier:(id)a0 legacyIdentifier:(id)a1 shouldFilterForAppsViewController:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)getSiriSuggestedResultsForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getResultsForCategory:(id)a0 completionHandler:(id /* block */)a1;
- (void)getResultsForFavorites:(id /* block */)a0;
- (void)getResultsForAllActionsWithCompletionHandler:(id /* block */)a0;
- (void)getResultsForAllAppActionsWithCompletionHandler:(id /* block */)a0;
- (id)initWithActionRegistry:(id)a0 home:(id)a1 workflow:(id)a2 actionSuggester:(id)a3;
- (id)resultsForSuggestionsWithWorkflow:(id)a0;
- (id)suggestedCategoriesForContentClasses:(id)a0;
- (void)getHomeSectionsIncludingRelatedActions:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
