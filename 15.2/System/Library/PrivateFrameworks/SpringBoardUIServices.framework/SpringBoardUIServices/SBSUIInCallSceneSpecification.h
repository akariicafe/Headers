@interface SBSUIInCallSceneSpecification : UIApplicationSceneSpecification

- (id)initialSettingsDiffActions;
- (id)initialActionHandlers;
- (id)uiSceneSessionRole;
- (Class)uiSceneMinimumClass;
- (Class)settingsClass;
- (Class)clientSettingsClass;

@end
