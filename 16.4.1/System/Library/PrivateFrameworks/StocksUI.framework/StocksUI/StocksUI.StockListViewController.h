@class NSArray;

@interface StocksUI.StockListViewController : TUViewController <UICollectionViewDelegate, UISearchControllerDelegate> {
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
    void /* unknown type, empty encoding */ lastContentOffset;
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ quoteAttributionProvider;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ editWatchlistMenuProvider;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) NSArray *keyCommands;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)didDismissSearchController:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)willDismissSearchController:(id)a0;
- (void)willPresentSearchController:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)didPresentSearchController:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)delete:(id)a0;
- (void)deleteItem;
- (void)didTapAttributionButton;
- (void)didTapPlusButton;
- (void)reconfigureLayoutForAccessibilityStateChange;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)contentScrollView;
- (void).cxx_destruct;

@end
