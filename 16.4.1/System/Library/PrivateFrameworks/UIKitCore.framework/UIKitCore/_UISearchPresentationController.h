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

- (BOOL)_shouldKeepCurrentFirstResponder;
- (void)_transitionFromDidEnd;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionWillBegin;
- (void)_transitionToPresentationController:(id)a0 withTransitionCoordinator:(id)a1;
- (void)_transitionToDidEnd;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)_transitionFromWillBegin;
- (id)_createVisualStyleForProvider:(id)a0;
- (void)_presentationTransitionWithSearchBarNotHostedByNavBarDidEnd:(BOOL)a0;
- (long long)adaptivePresentationStyle;
- (BOOL)shouldPresentInFullscreen;
- (void)_dismissalTransitionWithSearchBarHostedByNavBarDidEnd:(BOOL)a0;
- (void)_transitionToWillBegin;
- (void)_presentationTransitionWithSearchBarNotHostedByNavBarWillBegin;
- (void)hideBackgroundObscuringView;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (void)_exciseSearchBarFromCurrentContext;
- (void)setContentVisible:(BOOL)a0;
- (id)_presentationControllerForTraitCollection:(id)a0;
- (void)showBackgroundObscuringView;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)_presentationTransitionWithSearchBarHostedByNavBarWillBegin;
- (void)_dismissalTransitionWithSearchBarNotHostedByNavBarDidEnd:(BOOL)a0;
- (void)_layoutPresentationWithSize:(struct CGSize { double x0; double x1; })a0 transitionCoordinator:(id)a1;
- (void)_updateContainerFinalFrameForNonExcisedSearchBar;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (BOOL)_inheritsPresentingViewControllerThemeLevel;
- (double)_visibleRefreshControlHeightForTableView:(id)a0;
- (void)dealloc;
- (id)_constraintCopyOfConstraint:(id)a0 replaceItem:(id)a1 withItem:(id)a2;
- (void)_dismissalTransitionWithSearchBarNotHostedByNavBarWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_dismissalTransitionWithSearchBarHostedByNavBarWillBegin;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)_placeSearchBarBackIntoOriginalContext;
- (void)_updatePresentingViewControllerContentScrollViewWithOffsets:(struct CGSize { double x0; double x1; })a0 transitionCoordinator:(id)a1;
- (void)_presentationTransitionWithSearchBarHostedByNavBarDidEnd:(BOOL)a0;
- (id)_presentedViewControllerForPresentationController:(id)a0 traitCollection:(id)a1;

@end
