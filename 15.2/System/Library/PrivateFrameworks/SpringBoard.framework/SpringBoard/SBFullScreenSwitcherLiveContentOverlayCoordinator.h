@class NSString, NSMutableDictionary, NSMutableArray, SBMainDisplaySceneManager;
@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;

@interface SBFullScreenSwitcherLiveContentOverlayCoordinator : NSObject <SBFullScreenSwitcherSceneLiveContentOverlayDelegate, SBSwitcherLiveContentOverlayCoordinating>

@property (retain, nonatomic) SBMainDisplaySceneManager *sceneManager;
@property (copy, nonatomic) NSString *keyboardFocusSceneID;
@property (retain, nonatomic) NSString *keyboardFocusBundleID;
@property (retain, nonatomic) NSMutableDictionary *appLayoutToLiveContentOverlayContext;
@property (retain, nonatomic) NSMutableArray *visibleAlwaysLiveAppLayouts;
@property (nonatomic, getter=areLiveContentOverlayUpdatesSuspended) BOOL liveContentOverlayUpdatesSuspended;
@property (nonatomic) long long containerOrientation;
@property (weak, nonatomic) id<SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)itemContainerForAppLayout:(id)a0 willBeReusedForAppLayout:(id)a1;
- (void)_updateAlwaysLiveSceneContentOverlays;
- (void)_configureLiveContentOverlayView:(id)a0 forTransitionContext:(id)a1 layoutRole:(long long)a2;
- (id)appLayoutForKeyboardFocusedScene;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionWillEndWithTransitionContext:(id)a1;
- (id)liveAppLayoutsMatchingKeyboardFocusedApp:(BOOL)a0 foundAtIndex:(long long *)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0 toInterfaceOrientation:(long long)a1;
- (id)initWithSceneManager:(id)a0;
- (void)appLayoutWillBecomeVisible:(id)a0;
- (void)willRotateFromInterfaceOrientation:(long long)a0 toInterfaceOrientation:(long long)a1 alongsideContainerView:(id)a2 animated:(BOOL)a3;
- (void)appLayoutDidBecomeHidden:(id)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)_removeOverlayForAppLayout:(id)a0 animated:(BOOL)a1;
- (void)fullScreenSwitcherSceneLiveContentOverlay:(id)a0 tappedStatusBar:(id)a1 tapActionType:(long long)a2;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (void)_updateFullScreenDisplayLayoutElementsForActiveAppLayouts:(id)a0;
- (BOOL)_layoutStateContainsElementBlockedForScreenTimeExpiration:(id)a0;
- (BOOL)wantsHomeAffordanceAutoHideForAppLayout:(id)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (BOOL)wantsEdgeProtectForHomeGestureForAppLayout:(id)a0;
- (void)_addOverlay:(id)a0 forAppLayout:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (long long)_existingOverlayTypeForAppLayout:(id)a0;
- (BOOL)performSwitcherKeyboardShortcutAction:(long long)a0;
- (BOOL)_canTransitionToOverlayType:(long long)a0 forAppLayout:(id)a1;
- (BOOL)_shouldAnimateAddingLiveContentOverlayForTransitionContext:(id)a0 leafAppLayout:(id)a1;
- (id)_newLiveContentOverlayForApplicationContext:(id)a0 layoutRole:(long long)a1;

@end
