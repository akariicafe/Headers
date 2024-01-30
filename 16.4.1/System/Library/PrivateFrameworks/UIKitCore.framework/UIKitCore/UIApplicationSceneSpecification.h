@interface UIApplicationSceneSpecification : FBSSceneSpecification

- (BOOL)isInternal;
- (BOOL)affectsAppLifecycleIfInternal;
- (BOOL)affectsScreenOrientation;
- (id)baseSceneComponentClassDictionary;
- (Class)clientAgentClass;
- (Class)clientSettingsClass;
- (id)connectionHandlers;
- (id)coreSceneComponentClassDictionary;
- (id)disconnectionHandlers;
- (id)finalActionHandlers;
- (Class)hostAgentClass;
- (id)initialActionHandlers;
- (id)initialSettingsDiffActions;
- (BOOL)isUIKitManaged;
- (Class)lifecycleMonitorClass;
- (Class)sceneSubstrateClass;
- (Class)settingsClass;
- (Class)transitionContextClass;
- (Class)uiSceneMinimumClass;
- (id)uiSceneSessionRole;

@end
