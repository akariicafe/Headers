@class UISlidingBarStateRequest, UIViewController, NSMutableArray, UIDimmingView, UIView, UILayoutContainerView, _UIFloatableBarButtonItem, NSString, _UIPanelInternalState, UISlidingBarConfiguration, UINavigationBar, _UIVerticalEdgeShadowView, NSArray, UISlidingBarState, _UIMTCaptureView;
@protocol UIPanelControllerDelegate, UIViewControllerTransitionCoordinator;

@interface UIPanelController : NSObject <UILayoutContainerViewDelegate> {
    struct { unsigned char isUpdatingState : 1; unsigned char needsDeferredUpdateWhileUpdatingState : 1; unsigned char isPerformingDeferredUpdate : 1; unsigned char nextLayoutIsForInitializingAnimation : 1; unsigned char isPresentationGestureActive : 1; unsigned char areClippingViewsUnnecessary : 1; unsigned char inWillTransitionToTraitCollection : 1; unsigned char inViewWillTransitionToSize : 1; unsigned char inViewWillTransitionToSizeRecursingToChildren : 1; unsigned char viewsLocked : 1; unsigned char takingDestinationSnapshot : 1; unsigned char registeredForKeyboardNotifications : 1; unsigned char borderViewsObservingViewBackgroundColor : 1; unsigned char updateLayoutRequested : 1; unsigned char leadingTrailingWrapsNavigationController : 1; unsigned char shouldDelegateNavigationBarForViewController : 1; unsigned char isRunExpandScheduled : 1; } _panelControllerFlags;
    NSMutableArray *_wrapperBlocksForNextUpdate;
}

@property (weak, nonatomic) UIViewController *owningViewController;
@property (retain, nonatomic) UILayoutContainerView *view;
@property (retain, nonatomic, setter=_setInternalState:) _UIPanelInternalState *_internalState;
@property (retain, nonatomic, setter=_setPreviousInternalState:) _UIPanelInternalState *_previousInternalState;
@property (copy, nonatomic, setter=_setLastComputedPublicState:) UISlidingBarState *_lastComputedPublicState;
@property (copy, nonatomic, setter=_setLastPossiblePublicStates:) NSArray *_lastPossiblePublicStates;
@property (nonatomic, setter=_setLastViewSize:) struct CGSize { double width; double height; } _lastViewSize;
@property (retain, nonatomic, setter=_setContentView:) UIView *_contentView;
@property (retain, nonatomic, setter=_setLeadingBorderView:) UIView *_leadingBorderView;
@property (retain, nonatomic, setter=_setTrailingBorderView:) UIView *_trailingBorderView;
@property (retain, nonatomic, setter=_setSupplementaryBorderView:) UIView *_supplementaryBorderView;
@property (retain, nonatomic, setter=_setOverlayEdgeShadowView:) _UIVerticalEdgeShadowView *_overlayEdgeShadowView;
@property (retain, nonatomic, setter=_setSupplementaryParallaxShadowView:) _UIVerticalEdgeShadowView *_supplementaryParallaxShadowView;
@property (retain, nonatomic, setter=_setMaterialThemesCaptureView:) _UIMTCaptureView *_captureView;
@property (retain, nonatomic, setter=_setPrimaryParallaxDimmingView:) UIDimmingView *_primaryParallaxDimmingView;
@property (retain, nonatomic, setter=_setSourceTransitionView:) UIView *_sourceTransitionView;
@property (retain, nonatomic, setter=_setDestinationTransitionView:) UIView *_destTransitionView;
@property (nonatomic, setter=_setHasUpdatedForTraitCollection:) BOOL _hasUpdatedForTraitCollection;
@property (nonatomic, setter=_setNeedsFirstTimeUpdateForTraitCollection:) BOOL _needsFirstTimeUpdateForTraitCollection;
@property (nonatomic, setter=_setChangingViewControllerParentage:) BOOL _changingViewControllerParentage;
@property (nonatomic, getter=isRunExpandScheduled, setter=setRunExpandScheduled:) BOOL runExpandScheduled;
@property (nonatomic) long long style;
@property (readonly, nonatomic) BOOL supportsColumnStyle;
@property (nonatomic) BOOL leadingTrailingWrapsNavigationController;
@property (retain, nonatomic) UIViewController *mainViewController;
@property (retain, nonatomic) UIViewController *leadingViewController;
@property (retain, nonatomic) UIViewController *trailingViewController;
@property (retain, nonatomic) UIViewController *supplementaryViewController;
@property (retain, nonatomic) UIViewController *collapsedViewController;
@property (retain, nonatomic) UIViewController *preservedDetailController;
@property (weak, nonatomic) id<UIPanelControllerDelegate> delegate;
@property (copy, nonatomic) UISlidingBarConfiguration *configuration;
@property (readonly, nonatomic) UISlidingBarState *currentState;
@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) NSArray *uncachedPossibleStates;
@property (copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property (nonatomic) BOOL animationRequestShouldCoordinate;
@property (readonly, nonatomic) id<UIViewControllerTransitionCoordinator> transitionCoordinator;
@property (copy, nonatomic) UISlidingBarStateRequest *interactiveStateRequest;
@property (nonatomic, getter=isPresentationGestureActive) BOOL presentationGestureActive;
@property (retain, nonatomic) UIView *dimmingView;
@property (nonatomic, getter=areClippingViewsUnnecessary) BOOL clippingViewsUnnecessary;
@property (retain, nonatomic) UIView *leadingBarContentClippingView;
@property (retain, nonatomic) UIView *trailingBarContentClippingView;
@property (retain, nonatomic) UIView *supplementaryBarContentClippingView;
@property (retain, nonatomic) UINavigationBar *navigationBarForContentLayoutGuideAnimation;
@property (retain, nonatomic) _UIFloatableBarButtonItem *floatingBarButtonItem;
@property (readonly, nonatomic) long long collapsedState;
@property (readonly, nonatomic, getter=isCollapsed) BOOL collapsed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_withDisabledAppearanceTransitions:(BOOL)a0 forVisibleDescendantsOf:(id)a1 perform:(id /* block */)a2;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)setNeedsUpdate;
- (void)_withDisabledAppearanceTransitionsPerform:(id /* block */)a0;
- (void)removeChildViewController:(id)a0;
- (void)animateToRequest:(id)a0;
- (void)_collapseWithTransitionCoordinator:(id)a0;
- (void)_updateForTraitCollection:(id)a0 oldTraitCollection:(id)a1 withTransitionCoordinator:(id)a2;
- (void)_observeKeyboardNotificationsOnScreen:(id)a0;
- (id)gatherMultitaskingDragExclusionRectsFromVisibleColumns;
- (void)_setBorderViewsObserveViewBackgroundColor:(BOOL)a0;
- (void)_updateBorderViewsBackgroundColor:(id)a0;
- (void)traitCollectionDidChange:(id)a0 toNewTraits:(id)a1;
- (void)setTrailingViewController:(id)a0 changingParentage:(BOOL)a1;
- (void)__viewWillLayoutSubviews;
- (void)_layoutContainerViewWillMoveToWindow:(id)a0;
- (void)_addIdentifiedChildViewController:(id)a0;
- (BOOL)isTrailingViewControllerVisibleAfterAnimation;
- (void)_layoutContainerViewDidMoveToWindow:(id)a0;
- (BOOL)_willCollapseWithNewTraitCollection:(id)a0 oldTraitCollection:(id)a1;
- (void)stopAnimations;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1 superBlock:(id /* block */)a2;
- (BOOL)isSupplementaryViewControllerVisibleAfterAnimation;
- (id)_createBorderView;
- (id)_createOverlayEdgeShadowViewForEdge:(unsigned long long)a0;
- (void)_adjustNonOverlayLeadingScrollViewsForKeyboardInfo:(id)a0;
- (struct CGSize { double x0; double x1; })_expectedSecondaryColumnSizeAfterAnimatingToState:(id)a0 getLeadingColumnSize:(struct CGSize { double x0; double x1; } *)a1 trailingColumnSize:(struct CGSize { double x0; double x1; } *)a2 supplementaryColumnSize:(struct CGSize { double x0; double x1; } *)a3;
- (BOOL)_willExpandWithNewTraitCollection:(id)a0 oldTraitCollection:(id)a1;
- (id)initWithOwningViewController:(id)a0;
- (void)_adjustForKeyboardInfo:(id)a0;
- (void)_removeIdentifiedChildViewController:(id)a0;
- (void)setSupplementaryViewController:(id)a0 changingParentage:(BOOL)a1;
- (void)dealloc;
- (void)addWrapperBlockForNextUpdate:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_performWrappedUpdate:(id /* block */)a0;
- (void)_unspecifiedUpdateToNewPublicState:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)navigationControllerDidChangeNavigationBarHidden:(id)a0;
- (BOOL)isLeadingViewControllerVisibleAfterAnimation;
- (void)setLeadingViewController:(id)a0 changingParentage:(BOOL)a1;
- (BOOL)isAnimating;
- (void)_stopObservingKeyboardNotifications;
- (void)_setNeedsDeferredUpdate;
- (void)_animateFromRequest:(id)a0 toRequest:(id)a1 withAffectedSides:(long long)a2 forceOverlay:(BOOL)a3 velocity:(double)a4;
- (double)interpolatedMarginForPrimaryNavigationBar:(id)a0 supplementaryOrSecondaryNavbar:(id)a1 getInterpolatedAlpha:(double *)a2;
- (void)_expandWithTransitionCoordinator:(id)a0;
- (id)allViewControllers;
- (void)_updateToNewPublicState:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)_performDeferredUpdate;
- (void)setMainViewController:(id)a0 changingParentage:(BOOL)a1;
- (void)animateToRequest:(id)a0 forceOverlay:(BOOL)a1;
- (void)animateToRequest:(id)a0 forceOverlay:(BOOL)a1 withVelocity:(double)a2;
- (void)_stopAnimationsBeginningInteraction:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1 superBlock:(id /* block */)a2;
- (void)_performSingleDeferredUpdatePass;
- (void)loadView;
- (void)_setNeedsLayoutAndPerformImmediately:(BOOL)a0;

@end
