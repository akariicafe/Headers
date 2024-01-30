@class SBIsolatedSceneOrientationFollowingWrapperViewController, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneOverlayBasicWrapperViewController, UIViewController;
@protocol SBDeviceApplicationSceneOverlayViewController, SBDeviceApplicationSceneOverlayViewProviderDelegate;

@interface SBDeviceApplicationSceneOverlayViewProvider : NSObject {
    SBIsolatedSceneOrientationFollowingWrapperViewController *_orientationWrapperViewController;
    SBDeviceApplicationSceneOverlayBasicWrapperViewController *_basicWrapperViewController;
}

@property (retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly, weak, nonatomic) id<SBDeviceApplicationSceneOverlayViewProviderDelegate> delegate;
@property (readonly, nonatomic) UIViewController<SBDeviceApplicationSceneOverlayViewController> *overlayViewController;
@property (readonly, nonatomic) BOOL prefersStatusBarHidden;
@property (readonly, nonatomic) long long preferredStatusBarStyle;
@property (readonly, nonatomic) BOOL wantsResignActiveAssertion;
@property (readonly, nonatomic) long long priority;

- (id)_realOverlayViewController;
- (void)_deactivateIfPossible;
- (BOOL)shouldFollowSceneOrientation;
- (void)noteDisplayModeChange:(long long)a0;
- (void)containerDidUpdateTraitsParticipant:(id)a0;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)bestHomeAffordanceOrientationForOrientation:(long long)a0;
- (void)_activateIfPossible;
- (id)initWithSceneHandle:(id)a0 delegate:(id)a1;
- (id)initialTraitsParticipantForOverlayContainer;
- (void)showContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)hideContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;

@end
