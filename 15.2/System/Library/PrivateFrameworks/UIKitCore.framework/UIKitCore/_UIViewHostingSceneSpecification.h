@interface _UIViewHostingSceneSpecification : UIWindowSceneSpecification

- (BOOL)isInternal;
- (BOOL)isUIKitManaged;
- (id)uiSceneSessionRole;
- (Class)uiSceneMinimumClass;

@end
