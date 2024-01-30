@class NSString, SBFullScreenSwitcherLiveContentOverlayCoordinator, SBFloatingSwitcherLiveContentOverlayCoordinator;
@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;

@interface SBMainSwitcherLiveContentOverlayCoordinator : NSObject <SBSwitcherLiveContentOverlayCoordinating> {
    SBFullScreenSwitcherLiveContentOverlayCoordinator *_fullScreenCoordinator;
    SBFloatingSwitcherLiveContentOverlayCoordinator *_floatingCoordinator;
}

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
- (id)animationControllerForTransitionRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithSceneLayoutViewController:(id)a0;

@end
