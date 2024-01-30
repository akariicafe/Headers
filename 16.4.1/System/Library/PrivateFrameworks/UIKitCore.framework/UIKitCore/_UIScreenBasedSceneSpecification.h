@interface _UIScreenBasedSceneSpecification : UIApplicationSceneSpecification

- (BOOL)isInternal;
- (id)baseSceneComponentClassDictionary;
- (id)connectionHandlers;
- (id)disconnectionHandlers;
- (BOOL)isUIKitManaged;
- (Class)lifecycleMonitorClass;
- (Class)sceneSubstrateClass;
- (Class)uiSceneMinimumClass;
- (id)uiSceneSessionRole;

@end
