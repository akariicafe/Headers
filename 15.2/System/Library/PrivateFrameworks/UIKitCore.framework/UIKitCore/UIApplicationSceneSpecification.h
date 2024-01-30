@interface UIApplicationSceneSpecification : FBSSceneSpecification

- (id)connectionHandlers;
- (BOOL)isInternal;
- (id)coreSceneComponentClassDictionary;
- (id)baseSceneComponentClassDictionary;
- (BOOL)isUIKitManaged;
- (id)initialSettingsDiffActions;
- (BOOL)affectsAppLifecycleIfInternal;
- (BOOL)affectsScreenOrientation;
- (id)initialActionHandlers;
- (Class)lifecycleMonitorClass;
- (id)disconnectionHandlers;
- (id)uiSceneSessionRole;
- (Class)uiSceneMinimumClass;
- (id)finalActionHandlers;
- (Class)settingsClass;
- (Class)hostAgentClass;
- (Class)clientAgentClass;
- (Class)clientSettingsClass;
- (Class)transitionContextClass;
- (Class)sceneSubstrateClass;

@end
