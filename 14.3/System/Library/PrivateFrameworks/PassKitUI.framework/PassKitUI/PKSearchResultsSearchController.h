@class UINavigationController, PKSearchResultsViewController;

@interface PKSearchResultsSearchController : UISearchController {
    UINavigationController *_navVC;
    PKSearchResultsViewController *_resultsVC;
    BOOL _searchBarWasFirstResponder;
    BOOL _showSearchBar;
}

- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
- (id)initWithPaymentDataProvider:(id)a0 transactionSource:(id)a1;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)setSearchBarVisible:(BOOL)a0;
- (void)_updateSearchBarFrame;
- (void)viewWillLayoutSubviews;

@end
