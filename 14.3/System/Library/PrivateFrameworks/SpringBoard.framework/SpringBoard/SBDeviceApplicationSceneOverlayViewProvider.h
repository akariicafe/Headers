@class SBIsolatedSceneOrientationFollowingWrapperViewController, UIViewController, SBDeviceApplicationSceneHandle;
@protocol SBDeviceApplicationSceneOverlayViewController, SBDeviceApplicationSceneOverlayViewProviderDelegate;

@interface SBDeviceApplicationSceneOverlayViewProvider : NSObject {
    SBIsolatedSceneOrientationFollowingWrapperViewController *_orientationWrapperViewController;
}

@property (retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly, weak, nonatomic) id<SBDeviceApplicationSceneOverlayViewProviderDelegate> delegate;
@property (readonly, nonatomic) UIViewController<SBDeviceApplicationSceneOverlayViewController> *overlayViewController;
@property (readonly, nonatomic) BOOL prefersStatusBarHidden;
@property (readonly, nonatomic) long long preferredStatusBarStyle;
@property (readonly, nonatomic) BOOL wantsResignActiveAssertion;
@property (readonly, nonatomic) long long priority;

- (long long)preferredInterfaceOrientationForPresentation;
- (void)showContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_realOverlayViewController;
- (void)_activateIfPossible;
- (void)hideContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_deactivateIfPossible;
- (BOOL)shouldFollowSceneOrientation;
- (id)initWithSceneHandle:(id)a0 delegate:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;

@end
