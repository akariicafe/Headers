@class UIVisualEffectView;

@interface _UISearchCarPlayPresentationController : _UISearchPresentationController

@property (retain, nonatomic) UIVisualEffectView *blurView;

- (double)statusBarAdjustment;
- (BOOL)shouldAccountForStatusBar;
- (unsigned long long)edgeForHidingNavigationBar;
- (long long)adaptivePresentationStyle;
- (void)showBackgroundObscuringView;
- (id)backgroundObscuringView;
- (BOOL)resultsUnderlapsSearchBar;
- (BOOL)animatorShouldLayoutPresentationViews;
- (double)resultsControllerContentOffset;
- (void)containerViewWillLayoutSubviews;
- (id)adaptivePresentationController;
- (void)setContentVisible:(BOOL)a0;
- (BOOL)searchBarShouldClipToBounds;
- (id)_presentedViewControllerForSizeClassPair:(struct { long long x0; long long x1; })a0;
- (BOOL)searchBarToBecomeTopAttached;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForContainerView;
- (void)traitCollectionDidChange:(id)a0;
- (void)hideBackgroundObscuringView;
- (BOOL)forceObeyNavigationBarInsets;
- (id)_presentationControllerForTraitCollection:(id)a0;
- (BOOL)searchBarCanContainScopeBar;

@end
