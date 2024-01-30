@interface UIApplicationSceneSpecification : FBSSceneSpecification

- (BOOL)isInternal;
- (Class)hostAgentClass;
- (id)baseSceneComponentClassDictionary;
- (Class)clientAgentClass;
- (Class)clientSettingsClass;
- (Class)transitionContextClass;
- (BOOL)affectsAppLifecycleIfInternal;
- (BOOL)isUIKitManaged;
- (id)initialActionHandlers;
- (Class)lifecycleMonitorClass;
- (id)disconnectionHandlers;
- (Class)sceneSubstrateClass;
- (id)initialSettingsDiffActions;
- (Class)uiSceneMinimumClass;
- (id)finalActionHandlers;
- (id)uiSceneSessionRole;
- (id)connectionHandlers;
- (Class)settingsClass;

@end
