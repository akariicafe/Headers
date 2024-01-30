@interface NewsUI2.SearchViewController : UIViewController <UISearchBarDelegate, UISearchControllerDelegate, UICollectionViewDelegate, TSSearchResultsPanable> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ toolbarManager;
    void /* unknown type, empty encoding */ sceneStateManager;
    void /* unknown type, empty encoding */ origination;
    void /* unknown type, empty encoding */ searchBar;
    void /* unknown type, empty encoding */ searchAction;
    void /* unknown type, empty encoding */ clearAction;
    void /* unknown type, empty encoding */ sharingActivityProviderFactory;
    void /* unknown type, empty encoding */ refreshQueryParam;
    void /* unknown type, empty encoding */ refreshRecentSearch;
}

@property (nonatomic, readonly) BOOL isSearchResultsPane;

- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)didDismissSearchController:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
