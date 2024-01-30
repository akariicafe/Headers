@interface _UIScreenFrameSpecification : UIApplicationSceneSpecification

- (BOOL)isInternal;
- (id)baseSceneComponentClassDictionary;
- (BOOL)isUIKitManaged;
- (Class)lifecycleMonitorClass;
- (id)disconnectionHandlers;
- (Class)sceneSubstrateClass;
- (Class)uiSceneMinimumClass;
- (id)uiSceneSessionRole;
- (id)connectionHandlers;

@end
