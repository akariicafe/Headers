@class UISearchBar;

@interface SwiftUI.SwiftUISearchController : UISearchController <UISearchControllerDelegate, _UISearchControllerDelegatePrivate, _UISearchResultsUpdating_dci> {
    void /* unknown type, empty encoding */ searchItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$__searchBar;
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ suggestions;
}

@property (nonatomic, readonly) UISearchBar *searchBar;

- (void)updateSearchResultsForSearchController:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)searchController:(id)a0 willChangeToSearchBarPlacement:(long long)a1;
- (void)updateSearchResultsForSearchController:(id)a0 selectingSearchSuggestion:(id)a1;
- (id)initWithSearchResultsController:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
