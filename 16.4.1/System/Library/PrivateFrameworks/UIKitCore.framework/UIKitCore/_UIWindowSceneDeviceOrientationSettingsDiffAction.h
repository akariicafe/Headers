@class NSString, FBSSceneSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector;

@interface _UIWindowSceneDeviceOrientationSettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsDeviceOrientationDiffInspector;
}

@property (readonly, nonatomic) FBSSceneSettingsDiffInspector *sceneSettingsDeviceOrientationDiffInspector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void)_updateDeviceOrientationWithSettingObserverContext:(struct { unsigned char x0 : 1; })a0 windowScene:(id)a1 transitionContext:(id)a2;
- (void).cxx_destruct;

@end
