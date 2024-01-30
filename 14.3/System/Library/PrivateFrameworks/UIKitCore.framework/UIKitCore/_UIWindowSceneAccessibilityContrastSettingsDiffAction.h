@class NSString, UIApplicationSceneSettingsDiffInspector;

@interface _UIWindowSceneAccessibilityContrastSettingsDiffAction : NSObject <_UISceneSettingsDiffAction>

@property (retain, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsAccessibilityContrastDiffInspector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_animateAccessibilityContrastChangeInScene:(id)a0 transitionContext:(id)a1 applyChangesBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;

@end
