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

- (void)_transitionToPresentationController:(id)a0 withTransitionCoordinator:(id)a1;
- (long long)adaptivePresentationStyle;
- (void)_exciseSearchBarFromCurrentContext;
- (void)_presentationTransitionWithSearchBarHostedByNavBarWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)_presentationTransitionWithSearchBarHostedByNavBarDidEnd:(BOOL)a0;
- (void)_updateContainerFinalFrameForNonExcisedSearchBar;
- (void)setContentVisible:(BOOL)a0;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (id)_presentationControllerForTraitCollection:(id)a0;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (BOOL)_inheritsPresentingViewControllerThemeLevel;
- (void)_updatePresentingViewControllerContentScrollViewWithOffsets:(struct CGSize { double x0; double x1; })a0 transitionCoordinator:(id)a1;
- (void)_layoutPresentationWithSize:(struct CGSize { double x0; double x1; })a0 transitionCoordinator:(id)a1;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (BOOL)shouldPresentInFullscreen;
- (id)_constraintCopyOfConstraint:(id)a0 replaceItem:(id)a1 withItem:(id)a2;
- (void)_dismissalTransitionWithSearchBarHostedByNavBarDidEnd:(BOOL)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)_transitionToDidEnd;
- (void)_placeSearchBarBackIntoOriginalContext;
- (void)_transitionToWillBegin;
- (void)containerViewWillLayoutSubviews;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)_transitionFromWillBegin;
- (void)showBackgroundObscuringView;
- (void)_dismissalTransitionWithSearchBarNotHostedByNavBarWillBegin;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (void)_dismissalTransitionWithSearchBarHostedByNavBarWillBegin;
- (void)dealloc;
- (void)_dismissalTransitionWithSearchBarNotHostedByNavBarDidEnd:(BOOL)a0;
- (void)hideBackgroundObscuringView;
- (id)_presentedViewControllerForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)_presentationTransitionWithSearchBarNotHostedByNavBarWillBegin;
- (void)_presentationTransitionWithSearchBarNotHostedByNavBarDidEnd:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (double)_visibleRefreshControlHeightForTableView:(id)a0;
- (void)_transitionFromDidEnd;

@end
