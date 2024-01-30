@class NSString, UIPresentationController, _UISearchPresentationAssistant, UIView, NSMapTable;
@protocol _UISearchControllerPresenting;

@interface _UISearchPresentationController : UIPresentationController <_UISearchControllerPresenting> {
    _UISearchPresentationAssistant *_assistant;
    UIView *_placeholderView;
    NSMapTable *_excisedSearchBarConstraitMap;
    NSMapTable *_placeholderConstraitMap;
    struct { unsigned char searchBarWasTableHeaderView : 1; unsigned char excisedSearchBarDuringPresentation : 1; unsigned char searchBarWantedAutolayoutBeforeExcision : 1; } _controllerFlags;
}

@property (readonly, nonatomic) UIView *backgroundObscuringView;
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

+ (BOOL)shouldExciseSearchBar:(id)a0 duringPresentationWithPresenter:(id)a1;

- (BOOL)_inheritsPresentingViewControllerThemeLevel;
- (void)_placeSearchBarBackIntoOriginalContext;
- (void)_transitionFromWillBegin;
- (void)_dismissalTransitionWithSearchBarHostedByNavBarDidEnd:(BOOL)a0;
- (long long)adaptivePresentationStyle;
- (void)_transitionFromDidEnd;
- (void)_presentationTransitionWithSearchBarHostedByNavBarWillBegin;
- (void)_updatePresentingViewControllerContentScrollViewWithOffsets:(struct CGSize { double x0; double x1; })a0 transitionCoordinator:(id)a1;
- (void)_transitionToWillBegin;
- (id)_presentedViewControllerForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)showBackgroundObscuringView;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (void)containerViewWillLayoutSubviews;
- (void)_layoutPresentationWithSize:(struct CGSize { double x0; double x1; })a0 transitionCoordinator:(id)a1;
- (void)presentationTransitionWillBegin;
- (void)_dismissalTransitionWithSearchBarNotHostedByNavBarDidEnd:(BOOL)a0;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)setContentVisible:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)_updateContainerFinalFrameForNonExcisedSearchBar;
- (void)_presentationTransitionWithSearchBarHostedByNavBarDidEnd:(BOOL)a0;
- (void)_transitionToDidEnd;
- (void)_transitionToPresentationController:(id)a0 withTransitionCoordinator:(id)a1;
- (void)_presentationTransitionWithSearchBarNotHostedByNavBarDidEnd:(BOOL)a0;
- (double)_visibleRefreshControlHeightForTableView:(id)a0;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (void)traitCollectionDidChange:(id)a0;
- (void)hideBackgroundObscuringView;
- (id)_presentationControllerForTraitCollection:(id)a0;
- (void)_dismissalTransitionWithSearchBarHostedByNavBarWillBegin;
- (void)_exciseSearchBarFromCurrentContext;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)dealloc;
- (id)_constraintCopyOfConstraint:(id)a0 replaceItem:(id)a1 withItem:(id)a2;
- (void)_dismissalTransitionWithSearchBarNotHostedByNavBarWillBegin;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_presentationTransitionWithSearchBarNotHostedByNavBarWillBegin;

@end
