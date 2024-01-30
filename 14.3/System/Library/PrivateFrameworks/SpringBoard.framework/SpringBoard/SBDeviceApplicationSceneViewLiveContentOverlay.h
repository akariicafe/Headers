@class NSString, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneView, SBOrientationTransformWrapperView, UIView, UIApplicationSceneSettingsDiffInspector;

@interface SBDeviceApplicationSceneViewLiveContentOverlay : NSObject <BSInvalidatable, SBDeviceApplicationSceneHandleObserver, SBSceneViewPresentationConfiguring, SBSwitcherLiveContentOverlay> {
    SBOrientationTransformWrapperView *_transformWrapperView;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsInspector;
    SBDeviceApplicationSceneView *_sceneView;
}

@property (nonatomic) long long containerOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *contentOverlayView;

- (long long)sceneViewPresentationPriority:(id)a0;
- (id)sceneViewPresentationIdentifier:(id)a0;
- (void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)a0;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (long long)rasterizationStyle;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (void)setRasterizationStyle:(long long)a0 withMinificationFilterEnabled:(BOOL)a1;
- (void).cxx_destruct;
- (void)setHomeGrabberHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)disableAsynchronousRenderingForNextCommit;
- (void)setStatusBarHidden:(BOOL)a0 nubViewHidden:(BOOL)a1 animator:(id /* block */)a2;
- (void)invalidate;
- (id)initWithSceneHandle:(id)a0 referenceSize:(struct CGSize { double x0; double x1; })a1 containerOrientation:(long long)a2;

@end
