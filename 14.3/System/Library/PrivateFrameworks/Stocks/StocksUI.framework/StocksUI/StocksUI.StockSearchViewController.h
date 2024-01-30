@class UISplitViewController;

@interface StocksUI.StockSearchViewController : UIViewController <UISearchControllerDelegate, UISearchBarDelegate, UITableViewDelegate> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintSelectionProvider;
    void /* unknown type, empty encoding */ searchAction;
    void /* unknown type, empty encoding */ userActivityManager;
    void /* unknown type, empty encoding */ searchBar;
}

@property (nonatomic, readonly) UISplitViewController *splitViewController;

- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)didPresentSearchController:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
