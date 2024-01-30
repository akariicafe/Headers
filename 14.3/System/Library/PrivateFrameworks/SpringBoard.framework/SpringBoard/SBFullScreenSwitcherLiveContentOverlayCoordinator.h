@class NSMutableDictionary, SBSceneLayoutLiveContentOverlay, SBMainDisplaySceneLayoutViewController, NSString, NSMutableArray;
@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;

@interface SBFullScreenSwitcherLiveContentOverlayCoordinator : NSObject <SBSwitcherLiveContentOverlayCoordinating>

@property (retain, nonatomic) NSMutableDictionary *appLayoutToLiveContentOverlayContext;
@property (retain, nonatomic) NSMutableArray *visibleAlwaysLiveAppLayouts;
@property (readonly, weak, nonatomic) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController;
@property (retain, nonatomic) SBSceneLayoutLiveContentOverlay *sceneLayoutLiveContentOverlay;
@property (nonatomic, getter=areLiveContentOverlayUpdatesSuspended) BOOL liveContentOverlayUpdatesSuspended;
@property (nonatomic) long long containerOrientation;
@property (weak, nonatomic) id<SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)appLayoutWillBecomeVisible:(id)a0;
- (void)appLayoutDidBecomeHidden:(id)a0;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (id)animationControllerForTransitionRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithSceneLayoutViewController:(id)a0;
- (void)_updateAlwaysLiveSceneContentOverlays;
- (BOOL)_canTransitionToOverlayType:(long long)a0 forAppLayout:(id)a1;
- (void)_removeOverlayForAppLayout:(id)a0 animated:(BOOL)a1;
- (long long)_existingOverlayTypeForAppLayout:(id)a0;
- (BOOL)_shouldAnimateAddingSceneLayoutLiveContentOverlayForTransitionContext:(id)a0;
- (void)_addOverlay:(id)a0 withType:(long long)a1 forAppLayout:(id)a2 animated:(BOOL)a3;
- (BOOL)_layoutStateContainsElementBlockedForScreenTimeExpiration:(id)a0;

@end
