@class UINavigationController, PKSearchResultsViewController;

@interface PKSearchResultsSearchController : UISearchController {
    UINavigationController *_navVC;
    PKSearchResultsViewController *_resultsVC;
    BOOL _searchBarWasFirstResponder;
    BOOL _showSearchBar;
}

- (long long)preferredStatusBarStyle;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (id)initWithPaymentDataProvider:(id)a0 transactionSourceCollection:(id)a1 familyCollection:(id)a2;
- (void)setSearchBarVisible:(BOOL)a0;
- (void)_updateSearchBarFrame;

@end
