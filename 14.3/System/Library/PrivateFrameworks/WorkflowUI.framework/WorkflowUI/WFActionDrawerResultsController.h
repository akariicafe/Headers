@class WFActionDrawerResults, WFActionRegistry, NSObject, HMHome;
@protocol OS_dispatch_queue;

@interface WFActionDrawerResultsController : NSObject

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) WFActionRegistry *actionRegistry;
@property (readonly, nonatomic) WFActionDrawerResults *cachedSiriSuggestionsResults;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *searchQueue;

+ (id)localizedAppNames;

- (id)actions;
- (void).cxx_destruct;
- (id)actionsForCategory:(id)a0;
- (id)initWithActionRegistry:(id)a0 home:(id)a1;
- (void)resultsForSearchQuery:(id)a0 includingSiriSuggestedResults:(id)a1 completionHandler:(id /* block */)a2;
- (void)getResultsForAppWithBundleIdentifier:(id)a0 legacyIdentifier:(id)a1 shouldFilterForAppsViewController:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)getResultsForCategory:(id)a0 completionHandler:(id /* block */)a1;
- (id)resultsForSuggestionsWithWorkflow:(id)a0;
- (id)resultsForFavorites;
- (void)getSiriSuggestedResultsForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSiriSuggestedGroupedResultsRefreshingCache:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)suggestedCategoriesForContentClasses:(id)a0;
- (void)getHomeSectionsIncludingRelatedActions:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)filteringForResidentCompatibleActions;

@end
