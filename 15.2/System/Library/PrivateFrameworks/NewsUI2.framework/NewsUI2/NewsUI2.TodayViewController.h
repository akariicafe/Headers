@interface NewsUI2.TodayViewController : UIViewController <TUKeyCommandTraversable, TUDeselectable, TSTabBarSplitViewAutoObserver, UICollectionViewDelegate, TUScrollable> {
    void /* unknown type, empty encoding */ _lastImpression;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintSelectionProvider;
    void /* unknown type, empty encoding */ blueprintLayoutProvider;
    void /* unknown type, empty encoding */ sharingActivityProviderFactory;
    void /* unknown type, empty encoding */ barCompressionManager;
    void /* unknown type, empty encoding */ refreshStateMachine;
    void /* unknown type, empty encoding */ refreshControl;
    void /* unknown type, empty encoding */ commands;
    void /* unknown type, empty encoding */ loadingGate;
    void /* unknown type, empty encoding */ didAppearCompletions;
    void /* unknown type, empty encoding */ didDisappearCompletions;
    void /* unknown type, empty encoding */ mastheadViewProviderDelegate;
}

- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)deselect;
- (void)scrollToTopAnimated:(BOOL)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)startTraversingWithDirection:(long long)a0;
- (void)tabBarSplitViewDidChangeFocusToFocus:(long long)a0 action:(long long)a1;
- (void)didPullToRefreshWithSender:(id)a0;
- (void)significantTimeChangeDidOccur;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
