@class SBDeviceApplicationSceneViewController, NSString, SBAppLayout, SBInlineAppExposeLiveContentOverlayView;
@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;

@interface SBInlineAppExposeLiveContentOverlayCoordinator : NSObject <SBSwitcherLiveContentOverlayCoordinating> {
    SBDeviceApplicationSceneViewController *_deviceApplicationSceneViewController;
    long long _environment;
    long long _layoutRole;
    BOOL _overlay;
    SBAppLayout *_liveContentAppLayout;
    SBInlineAppExposeLiveContentOverlayView *_liveContentOverlayView;
}

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
- (void)_addLiveContentOverlay:(id)a0 forAppLayout:(id)a1 animated:(BOOL)a2;
- (void)updateSceneViewController:(id)a0 environment:(long long)a1 layoutRole:(long long)a2 overlay:(BOOL)a3;
- (id)_appLayoutFromLayoutState:(id)a0;
- (void)_removeLiveContentOverlay;

@end
