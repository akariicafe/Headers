@class UISearchController, NSString, PSSearchResultsController, UISearchBar, PSListController;
@protocol PSSearchControllerDelegate;

@interface PSSearchController : NSObject <PSSearchModelDelegate, PSSearchModelDataSource, PSSearchResultsControllerDelegate, UISearchResultsUpdating, UISearchControllerDelegate> {
    UISearchController *_searchController;
    PSSearchResultsController *_resultsController;
    BOOL _searchEnabled;
    int _notifyToken;
}

@property (copy, nonatomic) id /* block */ iconForSearchEntryHandler;
@property (readonly, nonatomic) UISearchBar *searchBar;
@property (readonly, weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) id<PSSearchControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDismissSearchController:(id)a0;
- (void)willPresentSearchController:(id)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (BOOL)isActive;
- (void)_reloadSettings:(BOOL)a0;
- (void).cxx_destruct;
- (id)rootSpecifiersForSearchModel:(id)a0;
- (Class)rootSearchControllerClassForSearchModel:(id)a0;
- (void)searchModel:(id)a0 updatedWithNewResults:(id)a1 forQuery:(id)a2;
- (void)searchModelWillBeginIndexing:(id)a0;
- (void)searchModelDidFinishIndexing:(id)a0;
- (void)dealloc;
- (id)initWithListController:(id)a0;
- (void)_buildSearchUIIfNecessary;
- (BOOL)_setBoolValue:(BOOL)a0 forIvar:(BOOL *)a1;
- (void)_updateListControllerHeaderView:(BOOL)a0;
- (void)_updateSearchResultsWithText:(id)a0;
- (void)addRootSpecifiers:(id)a0;
- (void)searchResultsController:(id)a0 didSelectSearchEntry:(id)a1;
- (BOOL)searchResultsController:(id)a0 shouldShowSwitchForSearchEntry:(id)a1;
- (void)reloadRootSpecifiers:(id)a0;
- (id)searchResultsController:(id)a0 switchActionForSearchEntry:(id)a1;
- (void)setSearchBarVisible:(BOOL)a0 animated:(BOOL)a1;
- (id)searchResultsController:(id)a0 iconForSearchEntry:(id)a1;
- (BOOL)activateWithInitialText:(id)a0 animated:(BOOL)a1;
- (void)removeRootSpecifiers:(id)a0;
- (void)setActive:(BOOL)a0;

@end
