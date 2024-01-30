@class NSArray;

@interface StocksUI.StockListViewController : TUViewController <UITableViewDelegate, UISearchControllerDelegate> {
    void /* unknown type, empty encoding */ lazySearchController;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintSelectionProvider;
    void /* unknown type, empty encoding */ scrollTracker;
    void /* unknown type, empty encoding */ mastheadViewProvider;
    void /* unknown type, empty encoding */ bootstrapper;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_exchangeStatusToolbarItem;
    void /* unknown type, empty encoding */ commands;
    void /* unknown type, empty encoding */ toolbarState;
    void /* unknown type, empty encoding */ keyboardInputMonitor;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) NSArray *keyCommands;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)willDismissSearchController:(id)a0;
- (void)willPresentSearchController:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)delete:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)didPresentSearchController:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)deleteItem;
- (void)didTapYahooLogo;
- (void)didTapPlusButton;
- (id)contentScrollView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
