@interface NewsUI2.TodayViewController : UIViewController <TUKeyCommandTraversable, TUDeselectable, UICollectionViewDelegate, TUScrollable> {
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
    void /* unknown type, empty encoding */ deferLoadingContent;
}

- (void)viewSafeAreaInsetsDidChange;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollToTopAnimated:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)deselect;
- (void)startTraversingWithDirection:(long long)a0;
- (void)significantTimeChangeDidOccur;
- (void)didPullToRefreshWithSender:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
