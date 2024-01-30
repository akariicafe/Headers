@interface _UIPopoverSceneSpecification : UIApplicationSceneSpecification

- (BOOL)isInternal;
- (BOOL)isUIKitManaged;
- (id)uiSceneSessionRole;
- (Class)uiSceneMinimumClass;

@end
