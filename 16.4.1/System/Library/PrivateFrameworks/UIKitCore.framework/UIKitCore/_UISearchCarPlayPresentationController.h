@class UIVisualEffectView;

@interface _UISearchCarPlayPresentationController : _UISearchPresentationController

@property (retain, nonatomic) UIVisualEffectView *blurView;

- (BOOL)shouldAccountForStatusBar;
- (id)_presentedViewControllerForSizeClassPair:(struct { long long x0; long long x1; })a0;
- (BOOL)animatorShouldLayoutPresentationViews;
- (void)containerViewWillLayoutSubviews;
- (id)adaptivePresentationController;
- (BOOL)searchBarCanContainScopeBar;
- (unsigned long long)edgeForHidingNavigationBar;
- (BOOL)searchBarToBecomeTopAttached;
- (BOOL)searchBarShouldClipToBounds;
- (long long)adaptivePresentationStyle;
- (id)backgroundObscuringView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForContainerView;
- (void)hideBackgroundObscuringView;
- (void)setContentVisible:(BOOL)a0;
- (BOOL)resultsUnderlapsSearchBar;
- (id)_presentationControllerForTraitCollection:(id)a0;
- (double)statusBarAdjustment;
- (void)showBackgroundObscuringView;
- (BOOL)forceObeyNavigationBarInsets;
- (double)resultsControllerContentOffset;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
