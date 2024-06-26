@class SBHomeGrabberRotationView, SBMainDisplayLayoutState, NSObject, SBMainDisplaySceneLayoutGestureManager, FBScene, SBSeparatorView, SBHomeGrabberView, UIView, SBFHomeGrabberSettings, NSString, SBOrientationTransformWrapperView, SBMainDisplaySceneLayoutStatusBarView, UIApplicationSceneClientSettingsDiffInspector, NSMutableSet, SBKeyboardHomeAffordanceAssertion, NSArray, NSLayoutConstraint, SBMedusaSettings, SBSceneHandleBlockObserver;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface SBMainDisplaySceneLayoutViewController : SBSceneLayoutViewController <SBMainDisplaySceneLayoutStatusBarViewDataSource, PTSettingsKeyObserver, SBSceneHandleObserver, TFBetaLaunchHandleActivationDelegate, SBDeviceApplicationSceneStatusBarBreadcrumbProviderObserver, SBSystemPointerInteractionDelegate> {
    SBMainDisplaySceneLayoutGestureManager *_gestureManager;
    NSMutableSet *_pushPopTransformReasons;
    NSMutableSet *_pushPopWallpaperReasons;
    BOOL _showsPushInWallpaper;
    SBOrientationTransformWrapperView *_contentWrapperView;
    SBMainDisplaySceneLayoutStatusBarView *_statusBarView;
    UIView *_contentView;
    SBSeparatorView *_separatorView;
    id _keyboardWillChangeFrameObserver;
    double _separatorViewKeyboardMargin;
    SBFHomeGrabberSettings *_homeGrabberSettings;
    SBSceneHandleBlockObserver *_sceneHandleObserver;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    BOOL _isKeyboardShowing;
    FBScene *_medusaKeyboardScene;
    SBKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    NSMutableSet *_activeBetaLaunchHandles;
    NSObject<OS_dispatch_queue> *_betaLaunchUIActivationQueue;
    NSLayoutConstraint *_homeGrabberTopConstraint;
    NSLayoutConstraint *_homeGrabberBottomConstraint;
    NSLayoutConstraint *_homeGrabberLeftConstraint;
    NSLayoutConstraint *_homeGrabberRightConstraint;
    SBMedusaSettings *_medusaSettings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<BSInvalidatable> pushPopWallpaperRequireAssertion;
@property (readonly, nonatomic) SBHomeGrabberRotationView *homeGrabberRotationView;
@property (readonly, nonatomic) SBMainDisplayLayoutState *_transitioningFromLayoutState;
@property (readonly, nonatomic) SBMainDisplayLayoutState *_transitioningToLayoutState;
@property (readonly, nonatomic) NSArray *appViewControllers;
@property (readonly, copy, nonatomic) NSArray *_transitioningAppViewControllers;
@property (readonly, nonatomic) UIView *_separatorView;
@property (nonatomic, setter=_setPreventsCornerRadiusUpdate:) BOOL _preventsCornerRadiusUpdate;
@property (nonatomic, setter=_setSeparatorViewAlpha:) double _separatorViewAlpha;
@property (readonly, nonatomic) double _separatorViewWidth;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _separatorViewHitTestFrame;
@property (nonatomic, setter=_setNubStyle:) unsigned long long _nubStyle;
@property (readonly, nonatomic) SBHomeGrabberView *_activeHomeGrabberView;
@property (copy, nonatomic, getter=_keyboardFocusSceneID, setter=_setKeyboardFocusSceneID:) NSString *keyboardFocusSceneID;
@property (readonly, nonatomic) SBMainDisplayLayoutState *layoutState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })referenceFrameForEntity:(id)a0 inLayoutState:(id)a1;
- (BOOL)_shouldRotateToLayoutOrientation:(long long)a0;
- (void)_beginLayoutStateTransitionWithTransitionContext:(id)a0;
- (BOOL)_shouldRepositionViewAfterTransition;
- (long long)statusBarOrientation;
- (id)_createSplitAnimationControllerWithTransitionRequest:(id)a0;
- (BOOL)_shouldConsiderHomeScreenAsActive;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionWillEndWithTransitionContext:(id)a1;
- (void)statusBarBreadcrumbProviderDidUpdateDisplayProperties:(id)a0;
- (BOOL)_isCurrentlyRotating;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorViewReferenceFrameForSpaceConfiguration:(long long)a0 interfaceOrientation:(long long)a1 frameOptions:(unsigned long long)a2;
- (void)_updateAuxiliaryViews;
- (struct CGSize { double x0; double x1; })_layoutSizeForLayoutRole:(long long)a0 spaceConfiguration:(long long)a1 layoutState:(id)a2;
- (BOOL)_shouldAdjustViewAffordancesAfterTransition;
- (id)animationControllerForRotatingWithTransitionRequest:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusBarAvoidanceFrame;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (id)animationWrapperViewForLayoutState:(id)a0 roleMask:(unsigned long long)a1 interfaceOrientation:(long long)a2 maskDisplayCorners:(BOOL)a3;
- (id)statusBarPartsForSceneWithIdentifier:(id)a0;
- (BOOL)_isTransitioningNoninteractivelyFromAppToApp;
- (id)_trailingStatusBarStyleRequest;
- (id)statusBarDescriberForStatusBarPart:(id)a0;
- (struct CGPoint { double x0; double x1; })_convertPointFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(struct CGPoint { double x0; double x1; })a0;
- (id)_animationWrapperViewForElement:(id)a0 entity:(id)a1 layoutState:(id)a2;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pointerInteractionHitTestInsetsForView:(id)a0;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (void)_createOrDestroyHomeGrabberRotationViewIfNecessary;
- (id)animationControllerForTransitionRequest:(id)a0;
- (BOOL)_isStatusBarHidden;
- (void).cxx_destruct;
- (id)_createSlideOverAndFadeElementOffscreenWithTransitionRequest:(id)a0;
- (void)_orderFrontOverlayViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })referenceFrameForUniqueIdentifier:(id)a0 inLayoutState:(id)a1;
- (double)normalizedWideNarrowLocation;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_pushedInTransform;
- (struct CGPoint { double x0; double x1; })_updatePointInReferenceCoordinateSpace:(struct CGPoint { double x0; double x1; })a0 withBlock:(id /* block */)a1;
- (BOOL)_shouldNubViewBeVisibleForLayoutRole:(long long)a0 inLayoutState:(id)a1;
- (void)_keyboardWillShow:(id)a0;
- (id)statusBarDescriberAtPoint:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1 pointInSceneLayoutSpace:(struct CGPoint { double x0; double x1; } *)a2;
- (void)dealloc;
- (id)_fadeStatusBarStylesBetweenFromAndToViewControllersWithTransitionRequest:(id)a0;
- (void)_addSingleSceneForTransitionRequest:(id)a0 completion:(id /* block */)a1;
- (double)normalizedDismissRightLocation;
- (void)_updateKeyboardHomeAffordanceAssertion;
- (void)_updateWallpaperStyleAndBackgroundColorWithAnimationFactory:(id)a0;
- (id)_sceneHandleForBottomEdgeLocation:(double)a0;
- (void)_updateAuxiliaryViewsWhichWantToAnimateDuringRotation;
- (void)betaLaunchHandle:(id)a0 activateIfNeededEndedWithResult:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutFrameForSize:(struct CGSize { double x0; double x1; })a0 withRole:(long long)a1 inInterfaceOrientation:(long long)a2 frameOptions:(unsigned long long)a3;
- (id)_bannerUnfurlAnimationControllerForTransitionRequest:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_statusBarEdgeInsetsForLayoutState:(id)a0;
- (id)_sceneHandlesIntersectingHomeGrabber;
- (BOOL)_isLayoutElementViewControllerOccluded:(id)a0;
- (BOOL)_keyboardIsSuppressedForMedusaKeyboardScene;
- (id)currentlyValidStatusBarPartIdentifiers;
- (id)_displayConfiguration;
- (unsigned int)_anchorEdgeForLayoutRole:(long long)a0 inInterfaceOrientation:(long long)a1;
- (void)_setUpObservationWithCurrentEntities:(id)a0 previousEntities:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_convertTransformFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)_beginRequiringPushedInWallpaperForReason:(id)a0 animationFactory:(id)a1;
- (id)_jiggleAppAnimationControllerForTransitionRequest:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSceneIdentifier:(id)a0 inView:(id)a1;
- (void)_updateViewControllerNubViewHighlightState:(id)a0 forKeyboardFocusSceneID:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutFrameForLayoutRole:(long long)a0 inLayoutState:(id)a1;
- (void)_keyboardWillHide:(id)a0;
- (id)_applicationSceneLayoutElementControllerForLayoutRole:(long long)a0;
- (BOOL)_shouldTakeKeyboardHomeAffordanceAssertion;
- (id)statusBarDescribers;
- (void)_addLayoutElementViewController:(id)a0 forLayoutElement:(id)a1 entity:(id)a2;
- (void)_setMaskDisplayCorners:(BOOL)a0 forReason:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRectFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)_overrideInterfaceOrientationMechanics;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceFrameForLayoutRole:(long long)a0 spaceConfiguration:(long long)a1 interfaceOrientation:(long long)a2 frameOptions:(unsigned long long)a3;
- (id)_sceneHandleForLayoutRole:(long long)a0;
- (void)_rotateAppViewsWithAnimationSettings:(id)a0 completion:(id /* block */)a1;
- (BOOL)allowsConfiguringIndividualStatusBarParts;
- (id)_layoutElementForSceneWithIdentifier:(id)a0;
- (void)_slideOverAndFadeElementOffscreenForTransitionRequest:(id)a0 completion:(id /* block */)a1;
- (long long)_layoutRoleForSceneWithIdentifier:(id)a0;
- (BOOL)_isEdgeProtectedForHomeGestureAtEdgeLocation:(double)a0;
- (BOOL)_shouldDrawHomeGrabber;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorViewFrame;
- (void)_popOutForReason:(id)a0 animationFactory:(id)a1;
- (double)normalizedNarrowWideLocation;
- (void)_orderFrontLayoutElementViewControllerForLayoutRole:(long long)a0;
- (double)normalizedDismissLeftLocation;
- (void)_endRequiringPushedInWallpaperForReason:(id)a0 animationFactory:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_statusBarAvoidanceFrameForLayoutState:(id)a0;
- (id)_removeAppAnimationControllerWithTransitionRequest:(id)a0;
- (id)_resizeAppsAnimationControllerWithTransitionRequest:(id)a0;
- (void)_orderFrontLayoutElementViewController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceFrameForLayoutElement:(id)a0 inLayoutState:(id)a1;
- (BOOL)_shouldReverseLayoutDirection;
- (struct CGPoint { double x0; double x1; })_convertPointFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(struct CGPoint { double x0; double x1; })a0;
- (void)_doCommonCleanupUponEndingLayoutTransitionWithInterruption:(BOOL)a0;
- (id)_replaceSingleAppAnimationControllerWithTransitionRequest:(id)a0;
- (void)_fadeStatusBarStylesBetweenFromAndToViewControllersWithSettings:(id)a0 completion:(id /* block */)a1;
- (void)_configureHomeGrabberForSettingsChangeWithDiff:(id)a0 transitionContext:(id)a1;
- (id)_inlineAppExposeOverlayForLayoutRole:(long long)a0;
- (void)_resizeAppViewsWithAnimationSettings:(id)a0 completion:(id /* block */)a1;
- (void)_updateHomeGrabberEdgeProtectAndAutoHideForAppRequest;
- (void)setUserResizing:(BOOL)a0;
- (void)_removeAppForTransitionRequest:(id)a0 completion:(id /* block */)a1;
- (id)_createStatusBarWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 interfaceOrientation:(long long)a1 reason:(id)a2;
- (id)_leadingStatusBarStyleRequest;
- (void)_updateSuppressingHomeAffordanceBounce;
- (unsigned int)_convertAnchorEdge:(unsigned int)a0 toLayoutOrientation:(long long)a1;
- (void)_noteKeyboardIsNotForMedusa;
- (double)normalizedHalfHalfLocation;
- (void)_configureHomeGrabberForLayoutStateTransition;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_statusBarAvoidanceFrameForLayoutState:(id)a0 layoutRole:(long long)a1;
- (id)_medusaKeyboardSceneHandle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRectFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_rotateAppsAnimationControllerWithTransitionRequest:(id)a0;
- (void)_replaceSingleSceneForTransitionRequest:(id)a0 animationSettings:(id)a1 completion:(id /* block */)a2;
- (id)_createFadeOutInlineOverlayWithTransitionRequest:(id)a0;
- (unsigned int)_layoutSpaceAnchorEdgeForLayoutRole:(long long)a0;
- (double)_layoutWidthForLayoutRole:(long long)a0 inSpaceConfiguration:(long long)a1 interfaceOrientation:(long long)a2;
- (void)_pushInForReason:(id)a0 animationFactory:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_convertTransformFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)_noteKeyboardIsForMedusaWithOwningScene:(id)a0;
- (id)styleForRegion:(id)a0 forView:(id)a1;
- (unsigned int)_anchorEdgeForLayoutRole:(long long)a0;
- (struct CGSize { double x0; double x1; })_layoutSizeForLayoutRole:(long long)a0 spaceConfiguration:(long long)a1 interfaceOrientation:(long long)a2 frameOptions:(unsigned long long)a3;
- (void)_updateHomeGrabberEdgeProtectAndAutoHideWithResetDelay:(double)a0 unhideDelay:(double)a1;
- (void)viewDidLoad;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_updateRectInReferenceCoordinateSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBlock:(id /* block */)a1;
- (void)_performJiggleHintAnimationForApplicationSceneHandle:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldBeginPointerInteractionAtLocation:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (void)_fadeOutInlineOverlayForTransitionRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithSceneManager:(id)a0;

@end
