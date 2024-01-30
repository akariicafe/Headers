@interface UIQuickLookInternalSceneSpecification : UIApplicationSceneSpecification

- (BOOL)isInternal;
- (BOOL)affectsAppLifecycleIfInternal;
- (id)initialActionHandlers;
- (id)uiSceneSessionRole;

@end
