@class NSString, SBAppClipOverlayViewController, UIApplicationSceneSettingsDiffInspector;

@interface SBDeviceApplicationAppClipOverlayViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBDeviceApplicationSceneHandleObserver> {
    SBAppClipOverlayViewController *_appClipViewController;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsDiffInspector;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (id)_realOverlayViewController;
- (void)_deactivateIfPossible;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (BOOL)wantsResignActiveAssertion;
- (void)_activateIfPossible;
- (id)initWithSceneHandle:(id)a0 delegate:(id)a1;
- (void)dealloc;
- (void)_updateOverlaySceneActivationState;
- (void).cxx_destruct;
- (void)sceneHandle:(id)a0 didChangeEffectiveForegroundness:(BOOL)a1;

@end
