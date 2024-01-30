@interface SBSUIStarkNotificationsSceneSpecification : UIApplicationStarkSceneSpecification

- (BOOL)isInternal;
- (Class)clientSettingsClass;
- (Class)transitionContextClass;
- (id)baseSettingsDiffActions;
- (id)baseActionHandlers;
- (BOOL)isUIKitManaged;
- (Class)settingsClass;

@end
