@interface SBSUIInCallSceneSpecification : UIApplicationSceneSpecification

- (Class)clientSettingsClass;
- (id)initialActionHandlers;
- (id)initialSettingsDiffActions;
- (Class)uiSceneMinimumClass;
- (id)uiSceneSessionRole;
- (Class)settingsClass;

@end
