@interface NewsUI2.SearchViewController : UIViewController <UISearchBarDelegate, UISearchControllerDelegate, UICollectionViewDelegate, TSSearchResultsProviderType, TSSearchResultsPanable, TSTabBarSplitViewAutoObserver> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ toolbarManager;
    void /* unknown type, empty encoding */ parsecQueryID;
    void /* unknown type, empty encoding */ searchBar;
    void /* unknown type, empty encoding */ searchAction;
    void /* unknown type, empty encoding */ sharingActivityProviderFactory;
    void /* unknown type, empty encoding */ refreshQueryParam;
}

@property (nonatomic, readonly) BOOL isSearchResultsPane;

- (void)cancelSearch;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didDismissSearchController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)tabBarSplitViewWillObsureView;
- (void)tabBarSplitViewDidUnobsureView;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)didPresentSearchController:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)performSearchForText:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
