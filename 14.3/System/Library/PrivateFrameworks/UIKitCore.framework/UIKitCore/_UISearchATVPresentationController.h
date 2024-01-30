@class UIVisualEffectView;

@interface _UISearchATVPresentationController : _UISearchPresentationController

@property (retain, nonatomic) UIVisualEffectView *blurView;

- (long long)adaptivePresentationStyle;
- (BOOL)forceObeyNavigationBarInsets;
- (double)statusBarAdjustment;
- (BOOL)resultsUnderlapsSearchBar;
- (void)setContentVisible:(BOOL)a0;
- (id)backgroundObscuringView;
- (id)_presentationControllerForTraitCollection:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForContainerView;
- (BOOL)animatorShouldLayoutPresentationViews;
- (BOOL)shouldAccountForStatusBar;
- (BOOL)searchBarCanContainScopeBar;
- (BOOL)searchBarToBecomeTopAttached;
- (BOOL)searchBarShouldClipToBounds;
- (void)containerViewWillLayoutSubviews;
- (double)resultsControllerContentOffset;
- (id)adaptivePresentationController;
- (void)showBackgroundObscuringView;
- (void).cxx_destruct;
- (void)hideBackgroundObscuringView;
- (id)_presentedViewControllerForSizeClassPair:(struct { long long x0; long long x1; })a0;
- (unsigned long long)edgeForHidingNavigationBar;
- (void)traitCollectionDidChange:(id)a0;

@end
