@interface _UIPopoverSceneSpecification : UIApplicationSceneSpecification

- (BOOL)isInternal;
- (BOOL)isUIKitManaged;
- (Class)uiSceneMinimumClass;
- (id)uiSceneSessionRole;

@end
