@class NSString, NSMutableDictionary;
@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate, SBShelfLiveContentOverlayCoordinatorDelegate;

@interface SBShelfLiveContentOverlayCoordinator : NSObject <SBAppSwitcherSnapshotImageCacheObserver, SBSwitcherLiveContentOverlayCoordinating> {
    NSMutableDictionary *_leafAppLayoutsToOverlays;
    BOOL _isSnapshotCacheObserver;
}

@property (readonly, weak, nonatomic) id<SBShelfLiveContentOverlayCoordinatorDelegate> shelfDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=areLiveContentOverlayUpdatesSuspended) BOOL liveContentOverlayUpdatesSuspended;
@property (nonatomic) long long containerOrientation;
@property (weak, nonatomic) id<SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate;

- (void)itemContainerForAppLayout:(id)a0 willBeReusedForAppLayout:(id)a1;
- (void)didUpdateCacheEntry:(id)a0;
- (id)appLayoutForKeyboardFocusedScene;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionWillEndWithTransitionContext:(id)a1;
- (id)liveAppLayoutsMatchingKeyboardFocusedApp:(BOOL)a0 foundAtIndex:(long long *)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0 toInterfaceOrientation:(long long)a1;
- (void)appLayoutWillBecomeVisible:(id)a0;
- (void)willRotateFromInterfaceOrientation:(long long)a0 toInterfaceOrientation:(long long)a1 alongsideContainerView:(id)a2 animated:(BOOL)a3;
- (void)appLayoutDidBecomeHidden:(id)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (BOOL)wantsHomeAffordanceAutoHideForAppLayout:(id)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (BOOL)wantsEdgeProtectForHomeGestureForAppLayout:(id)a0;
- (void).cxx_destruct;
- (BOOL)performSwitcherKeyboardShortcutAction:(long long)a0;
- (void)dealloc;
- (id)initWithShelfDelegate:(id)a0;
- (void)_addOverlaysIfNeededForTransitionContext:(id)a0;

@end
