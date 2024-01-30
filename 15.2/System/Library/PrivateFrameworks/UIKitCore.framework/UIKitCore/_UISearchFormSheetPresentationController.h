@class NSString, UIPresentationController, _UISearchPresentationAssistant, UIView;
@protocol _UISearchControllerPresenting;

@interface _UISearchFormSheetPresentationController : UIPresentationController <_UISearchControllerPresenting> {
    _UISearchPresentationAssistant *_assistant;
    UIView *_wrapperView;
}

@property (readonly, retain, nonatomic) UIView *searchBarContainerView;
@property (readonly, nonatomic) BOOL shouldAccountForStatusBar;
@property (readonly, nonatomic) double statusBarAdjustment;
@property (readonly, nonatomic) BOOL searchBarToBecomeTopAttached;
@property (readonly, nonatomic) BOOL resultsUnderlapsSearchBar;
@property (readonly, nonatomic) BOOL searchBarCanContainScopeBar;
@property (readonly, nonatomic) BOOL searchBarShouldClipToBounds;
@property (readonly, nonatomic) double resultsControllerContentOffset;
@property (readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finalFrameForContainerView;
@property (readonly, nonatomic) BOOL animatorShouldLayoutPresentationViews;
@property (readonly, nonatomic) BOOL forceObeyNavigationBarInsets;
@property (readonly, nonatomic) unsigned long long edgeForHidingNavigationBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)_transitionFromWillBegin;
- (long long)adaptivePresentationStyle;
- (void)_transitionFromDidEnd;
- (void)_transitionToWillBegin;
- (id)_presentedViewControllerForPresentationController:(id)a0 traitCollection:(id)a1;
- (id)presentedView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameOfPresentedViewControllerViewInSuperview;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)setContentVisible:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)_transitionToDidEnd;
- (void)_transitionToPresentationController:(id)a0 withTransitionCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)_presentationControllerForTraitCollection:(id)a0;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)_presentedView:(id)a0 enableFormSheetAccoutrements:(BOOL)a1;
- (BOOL)_shouldSubscribeToKeyboardNotifications;
- (void)dealloc;

@end
