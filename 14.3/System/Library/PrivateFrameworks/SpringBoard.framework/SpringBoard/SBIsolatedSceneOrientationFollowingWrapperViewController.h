@class UIView, NSString, SBWindowSelfHostWrapper, SBDeviceApplicationSceneHandle, SBIsolatedSceneOrientationFollowingWindow, SBIsolatedSceneOrientationFollowingContainerView, UIViewController, UIApplicationSceneSettingsDiffInspector, UIApplicationSceneClientSettingsDiffInspector;
@protocol SBDeviceApplicationSceneOverlayView, SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate;

@interface SBIsolatedSceneOrientationFollowingWrapperViewController : UIViewController <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneOverlayViewController> {
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIViewController *_contentViewController;
    SBIsolatedSceneOrientationFollowingWindow *_appOverlayWindow;
    SBWindowSelfHostWrapper *_appOverlayHostWrapper;
    SBIsolatedSceneOrientationFollowingContainerView *_containerView;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsDiffInspector;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsDiffInspector;
    BOOL _sceneWantsDeviceOrientationEvents;
    BOOL _rendersWhileLocked;
    BOOL _needsDeferredOverlayWindowRotation;
    id<SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate> _orientationDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView<SBDeviceApplicationSceneOverlayView> *overlayView;

- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (long long)_orientationBasedOnScene;
- (long long)_effectiveSceneOrientation;
- (id)initWithContentViewController:(id)a0 sceneHandle:(id)a1 orientationDelegate:(id)a2 rendersWhileLocked:(BOOL)a3;
- (void)_containerViewDidSetCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)_containerViewDidSetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isSceneStatusBarHidden;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForOverlayRootView;

@end
