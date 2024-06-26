@class UIView, NSString, NSArray, UITraitCollection, UITapGestureRecognizer, NSUUID, UIViewController, UIBarButtonItem;
@protocol UIViewControllerTransitionCoordinatorContext, UIViewControllerAnimatedTransitioning, UIFocusItemContainer, _UITraitEnvironmentInternal, UIViewControllerInteractiveTransitioning, UIViewControllerTransitionCoordinator, UIFocusEnvironment, UIAdaptivePresentationControllerDelegate;

@interface UIPresentationController : NSObject <_UIFallbackEnvironment, _UIGeometryChangeObserver, _UIAppearanceContainer, _UITraitEnvironmentInternal, _UIContentContainerInternal, UIGestureRecognizerDelegate, UIAppearanceContainer, UITraitEnvironment, UIContentContainer, UIFocusEnvironment> {
    BOOL _isDisconnectedRoot;
    BOOL _transitionAsDisconnectedRoot;
    BOOL _needsDidAppear;
    BOOL _needsDidDisappear;
    BOOL _monitorsSystemLayoutFittingSize;
    BOOL _didUpdateLayoutForStatusBarAndInterfaceOrientation;
    id _target;
    SEL _didEndSelector;
    UITraitCollection *_lastNotifiedTraitCollection;
    UIView *_snapshotOverlayView;
    UITapGestureRecognizer *_backGestureRecognizer;
    NSUUID *_currentRunningAnimationsUUID;
}

@property (class, readonly, nonatomic) BOOL _allowsDeferredTransitions;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic, getter=_currentTransitionController, setter=_setCurrentTransitionController:) id<UIViewControllerAnimatedTransitioning> currentTransitionController;
@property (retain, nonatomic, getter=_currentInteractionController, setter=_setCurrentInteractionController:) id<UIViewControllerInteractiveTransitioning> currentInteractionController;
@property (retain, nonatomic, setter=_setPresentingViewController:) UIViewController *presentingViewController;
@property (retain, nonatomic, setter=_setPresentedViewController:) UIViewController *presentedViewController;
@property (retain, nonatomic, getter=_presentationView, setter=_setPresentationView:) UIView *presentationView;
@property (weak, nonatomic, getter=_currentPresentationSuperview, setter=_setCurrentPresentationSuperview:) UIView *_currentPresentationSuperview;
@property (nonatomic) long long state;
@property (retain, nonatomic, setter=_setContainerView:) UIView *containerView;
@property (nonatomic, getter=_preferredContentSize, setter=_setPreferredContentSize:) struct CGSize { double width; double height; } _preferredContentSize;
@property (retain, nonatomic, getter=_adaptiveTransitionCoordinator, setter=_setAdaptiveTransitionCoordinator:) id<UIViewControllerTransitionCoordinator> adaptiveTransitionCoordinator;
@property (retain, nonatomic, getter=_adaptiveTransitionContext, setter=_setAdaptiveTransitionContext:) id<UIViewControllerTransitionCoordinatorContext> adaptiveTransitionContext;
@property (nonatomic, getter=_changedPresentingViewControllerDuringAdaptation, setter=_setChangedPresentingViewControllerDuringAdaptation:) BOOL changedPresentingViewControllerDuringAdaptation;
@property (nonatomic, getter=_shouldDeactivateReachabilityWhenTransitioning, setter=_setShouldDeactivateReachabilityWhenTransitioning:) BOOL shouldDeactivateReachabilityWhenTransitioning;
@property (copy, nonatomic) id /* block */ _transitionViewForCurrentTransition;
@property (copy, nonatomic) id /* block */ _containerSuperviewForCurrentTransition;
@property (copy, nonatomic) id /* block */ _fromViewForCurrentTransition;
@property (copy, nonatomic) id /* block */ _toViewForCurrentTransition;
@property (copy, nonatomic) id /* block */ _customFromViewForCurrentTransition;
@property (copy, nonatomic) id /* block */ _customToViewForCurrentTransition;
@property (copy, nonatomic) id /* block */ _computeToEndFrameForCurrentTransition;
@property (copy, nonatomic) id /* block */ _currentTransitionDidComplete;
@property (readonly, nonatomic) BOOL _isPresentedInFullScreen;
@property (readonly, nonatomic) BOOL _mayChildGrabPresentedViewControllerView;
@property (nonatomic, getter=_shouldContinueTouchesOnTargetViewController, setter=_setShouldContinueTouchesOnTargetViewController:) BOOL shouldContinueTouchesOnTargetViewController;
@property (retain, nonatomic, getter=_customViewForTouchContinuation, setter=_setCustomViewForTouchContinuation:) UIView *customViewForTouchContinuation;
@property (readonly, nonatomic) id<_UITraitEnvironmentInternal> _parentTraitEnvironment;
@property (copy, nonatomic, getter=_internalOverrideTraitCollection, setter=_setInternalOverrideTraitCollection:) UITraitCollection *internalOverrideTraitCollection;
@property (nonatomic, setter=_setForcePresentationInPresenterScene:) BOOL _forcePresentationInPresenterScene;
@property (nonatomic, getter=_containerIgnoresDirectTouchEvents, setter=_setContainerIgnoresDirectTouchEvents:) BOOL containerIgnoresDirectTouchEvents;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (retain, nonatomic) UIBarButtonItem *barButtonItem;
@property (nonatomic) BOOL isCurrentStateCancelled;
@property (readonly, nonatomic, getter=_realSourceView) UIView *realSourceView;
@property (readonly, nonatomic) long long presentationStyle;
@property (weak, nonatomic) id<UIAdaptivePresentationControllerDelegate> delegate;
@property (readonly, nonatomic) long long adaptivePresentationStyle;
@property (readonly, nonatomic) UIView *presentedView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameOfPresentedViewInContainerView;
@property (readonly, nonatomic) BOOL shouldPresentInFullscreen;
@property (readonly, nonatomic) BOOL shouldRemovePresentersView;
@property (copy, nonatomic) UITraitCollection *overrideTraitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;

+ (void)initialize;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_statusBarOverlapAndMarginInfoForView:(id)a0 inWindow:(id)a1;
+ (void)_scheduleTransition:(id /* block */)a0;
+ (BOOL)_shouldDeferTransitions;
+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)_transitionToPresentationController:(id)a0 withTransitionCoordinator:(id)a1;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredInteractionControllerForDismissal:(id)a0;
- (void)_realSourceViewGeometryDidChange;
- (void)dismissalTransitionWillBegin;
- (void)_containerViewSafeAreaInsetsDidChange;
- (void)_containerViewLayoutSubviews;
- (id)_viewToIgnoreLayerTransformForViewFrameInWindowContentOverlayInsetsCalculation;
- (id)_passthroughViews;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (id)_traitCollectionForChildEnvironment:(id)a0;
- (id)_presentationControllerForTraitCollection:(id)a0;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (BOOL)_inheritsPresentingViewControllerThemeLevel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForChildContentContainer:(id)a0;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)_transitionToDidEnd;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (Class)_appearanceGuideClass;
- (void)_transitionToWillBegin;
- (void)containerViewWillLayoutSubviews;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (void)_transitionFromWillBegin;
- (void)_dismissWithAnimationController:(id)a0 interactionController:(id)a1 target:(id)a2 didEndSelector:(SEL)a3;
- (void)_presentWithAnimationController:(id)a0 inWindow:(id)a1 interactionController:(id)a2 target:(id)a3 didEndSelector:(SEL)a4;
- (void)_adjustOrientationIfNecessaryInWindow:(id)a0 forViewController:(id)a1 preservingViewController:(id)a2;
- (void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0 childViewController:(id)a1;
- (void)_setOverrideTraitCollection:(id)a0 updatingPresentedViewControllerImmediately:(BOOL)a1;
- (id)_adaptiveWillTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)_window:(id)a0 willTransitionToTraitCollection:(id)a1 withTransitionCoordinator:(id)a2;
- (void)_parent:(id)a0 willTransitionToTraitCollection:(id)a1 withTransitionCoordinator:(id)a2;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (id)init;
- (void)_sendDelegateWillPresentWithAdaptiveStyle:(long long)a0 transitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForTransitionViewInPresentationSuperview:(id)a0 inWindow:(id)a1;
- (BOOL)_isModal;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (BOOL)_shouldSavePresentedViewControllerForStateRestoration;
- (void)_sendPresentationControllerNotification:(id)a0 userInfo:(id)a1;
- (void)_cleanup;
- (void)transitionDidFinish:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForTransitionViewInPresentationSuperview:(id)a0;
- (void)dealloc;
- (id)_initialPresentationViewControllerForViewController:(id)a0;
- (void)_initViewHierarchyForPresentationSuperview:(id)a0 inWindow:(id)a1;
- (void)_willRunTransitionForCurrentStateDeferred:(BOOL)a0;
- (id)_viewsParticipatingInNavigationControllerTransition;
- (BOOL)_shouldMakePresentedViewControllerFirstResponder;
- (BOOL)_shouldPreserveFirstResponder;
- (BOOL)presented;
- (id)_rootPresentingViewControllerForNestedPresentation;
- (BOOL)_shouldAdaptFromTraitCollection:(id)a0 toTraitCollection:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)presenting;
- (id)_descriptionForPrintingViewControllerHierarchy;
- (BOOL)dismissing;
- (BOOL)dismissed;
- (void)_containerViewBoundsDidChange;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_baseContentInsetsWithLeftMargin:(double *)a0 rightMargin:(double *)a1;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
- (BOOL)_forcesPreferredAnimationControllers;
- (id)_preferredInteractionControllerForPresentation:(id)a0;
- (id)_preferredAnimationControllerForPresentation;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; id x4; id x5; id x6; id x7; } *)a0 forAncestor:(id)a1;
- (void)containerViewDidLayoutSubviews;
- (id)_presentedViewControllerForPresentationController:(id)a0 traitCollection:(id)a1;
- (BOOL)_canPresentInSeparateScene;
- (BOOL)_shouldDismiss;
- (id)_childPresentationController;
- (BOOL)_isAdapted;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (BOOL)_shouldOccludeDuringPresentation;
- (id)_focusMapContainer;
- (void)_closeScene;
- (void)_updateRealSourceView;
- (BOOL)_shouldConvertToScene;
- (struct { long long x0; long long x1; })__sizeClassPair;
- (BOOL)_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)_gestureRecognizerShouldBegin:(id)a0;
- (void)transitionDidStart;
- (void)updateFocusIfNeeded;
- (BOOL)_fallbackShouldDismiss;
- (void)_sendFallbackWillDismiss;
- (void)_sendFallbackDidDismiss;
- (void)_realSourceViewDidChangeFromView:(id)a0 toView:(id)a1;
- (BOOL)_preserveResponderAcrossWindows;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_additionalSafeAreaInsets;
- (void)_convertToSceneFromPresentingViewController:(id)a0;
- (BOOL)_transitioningFrom;
- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
- (void)_coverWithSnapshot;
- (void)_releaseSnapshot;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_enableOcclusion:(BOOL)a0;
- (id)_fallbackTraitCollection;
- (void)_sendDidDismiss;
- (void)_setRealSourceView:(id)a0;
- (id)_parentTraitCollection;
- (void)setNeedsFocusUpdate;
- (long long)_defaultPresentationStyleForTraitCollection:(id)a0;
- (BOOL)_transitioningTo;
- (BOOL)_shouldDisablePresentersAppearanceCallbacks;
- (void)_containerViewTraitCollectionDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameOfPresentedViewControllerViewInSuperview;
- (void)_prepareForWindowDeallocRecursively:(BOOL)a0;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;
- (id)_currentContextPresentationSuperview;
- (void)runTransitionForCurrentState;
- (void)completeCurrentTransitionImmediately;
- (void)_initViewHierarchyForPresentationSuperview:(id)a0;
- (id)_parentPresentationControllerImmediate:(BOOL)a0;
- (id)_parentPresentationController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)_shouldRestoreFirstResponder;
- (BOOL)_shouldGrabPresentersView;
- (void)_transplantView:(id)a0 toSuperview:(id)a1;
- (void)_transplantView:(id)a0 toSuperview:(id)a1 atIndex:(unsigned long long)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)_beginOcclusionIfNecessary:(BOOL)a0;
- (long long)adaptivePresentationStyleForTraitCollection:(id)a0;
- (id)_activePresentationController;
- (id)presentedContentContainer;
- (void)_updateTraitsIfNecessary;
- (id)_appearanceContainer;
- (void)_sendWillDismiss;
- (void)_containedViewControllerModalStateChanged;
- (BOOL)_monitorsSystemLayoutFittingSize;
- (id)_firstCurrentContextChildInWindow;
- (void)_performBackGesture:(id)a0;
- (id)_fullscreenPresentationSuperview;
- (void)_containerViewWillLayoutSubviews;
- (id)_animatorForContainmentTransition;
- (void)_disableMenuPressForBackGesture;
- (void)_sendDidAttemptToDismiss;
- (void)_transitionFromDidEnd;

@end
