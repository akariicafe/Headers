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
    void /* unknown type, empty encoding */ focusGuide;
    void /* unknown type, empty encoding */ quoteAttributionProvider;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) NSArray *keyCommands;

- (void)didDismissSearchController:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)willPresentSearchController:(id)a0;
- (void)willDismissSearchController:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)didPresentSearchController:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)delete:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)deleteItem;
- (void)reconfigureLayoutForAccessibilityStateChange;
- (void)didTapAttributionButton;
- (void)didTapPlusButton;
- (id)contentScrollView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
