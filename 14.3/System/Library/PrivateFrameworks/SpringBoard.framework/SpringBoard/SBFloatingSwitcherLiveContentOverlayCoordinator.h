@class NSString, SBFloatingApplicationLiveContentWindow, NSMutableDictionary;
@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;

@interface SBFloatingSwitcherLiveContentOverlayCoordinator : NSObject <SBSwitcherLiveContentOverlayCoordinating>

@property (copy, nonatomic) NSString *keyboardFocusSceneID;
@property (retain, nonatomic) SBFloatingApplicationLiveContentWindow *recycledApplicationSceneLiveContentWindow;
@property (retain, nonatomic) NSMutableDictionary *liveContentOverlays;
@property (nonatomic, getter=areLiveContentOverlayUpdatesSuspended) BOOL liveContentOverlayUpdatesSuspended;
@property (nonatomic) long long containerOrientation;
@property (weak, nonatomic) id<SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutStateTransitionCoordinator:(id)a0 transitionWillEndWithTransitionContext:(id)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)appLayoutWillBecomeVisible:(id)a0;
- (void)appLayoutDidBecomeHidden:(id)a0;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (void)_removeApplicationSceneLiveContentOverlay:(id)a0 forAppLayout:(id)a1;
- (id)init;
- (void)_addApplicationSceneLiveContentOverlay:(id)a0 forAppLayout:(id)a1 animated:(BOOL)a2;
- (id)animationControllerForTransitionRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isLayoutElementBlockedForScreenTimeExpiration:(id)a0;
- (id)_newLiveContentOverlayViewForTransitionContext:(id)a0;
- (void)_addLiveContentOverlay:(id)a0 forAppLayout:(id)a1 animated:(BOOL)a2;
- (id)_newApplicationLiveContentOverlayViewForTransitionContext:(id)a0;
- (void)_removeInlineAppExposeLiveContentOverlay:(id)a0 forAppLayout:(id)a1;
- (void)_removeLiveContentOverlayForAppLayout:(id)a0;
- (BOOL)_shouldAnimateAddingLiveContentOverlayForTransitionContext:(id)a0;
- (void)_configureLiveContentOverlayView:(id)a0 forTransitionContext:(id)a1;
- (void)_addInlineAppExposeLiveContentOverlay:(id)a0 forAppLayout:(id)a1 animated:(BOOL)a2;
- (void)_updateDisplayLayoutElementsForActiveAppLayout:(id)a0;
- (id)_newInlineLiveContentOverlayViewForTransitionContext:(id)a0;

@end
