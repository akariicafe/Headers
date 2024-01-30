@interface BNBannerSourceApplicationSceneSpecification : UIApplicationSceneSpecification

+ (id)_bundleIdentifiersRequestingAppLifecycleImpact;

- (BOOL)isInternal;
- (id)baseSceneComponentClassDictionary;
- (BOOL)affectsAppLifecycleIfInternal;
- (id)uiSceneSessionRole;
- (Class)settingsClass;
- (Class)clientSettingsClass;

@end
