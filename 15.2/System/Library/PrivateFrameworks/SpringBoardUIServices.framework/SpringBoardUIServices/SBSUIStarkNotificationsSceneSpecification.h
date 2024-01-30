@interface SBSUIStarkNotificationsSceneSpecification : UIApplicationStarkSceneSpecification

- (BOOL)isInternal;
- (BOOL)isUIKitManaged;
- (Class)settingsClass;
- (Class)clientSettingsClass;
- (Class)transitionContextClass;
- (id)baseSettingsDiffActions;
- (id)baseActionHandlers;

@end
