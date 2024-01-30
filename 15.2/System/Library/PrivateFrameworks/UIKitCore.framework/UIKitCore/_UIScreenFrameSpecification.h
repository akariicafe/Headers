@interface _UIScreenFrameSpecification : UIApplicationSceneSpecification

- (id)connectionHandlers;
- (BOOL)isInternal;
- (id)baseSceneComponentClassDictionary;
- (BOOL)isUIKitManaged;
- (Class)lifecycleMonitorClass;
- (id)disconnectionHandlers;
- (id)uiSceneSessionRole;
- (Class)uiSceneMinimumClass;
- (Class)sceneSubstrateClass;

@end
