@interface _UIScenePresentationViewAccessibility : ___UIScenePresentationViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)_viewToAddFocusLayer;
- (BOOL)canBecomeFocused;
- (id)accessibilityElements;
- (void)dealloc;
- (BOOL)_accessibilityHandlesRemoteFocusMovement;
- (int)_accessibilityRemotePid;
- (id)_accessibilityRemoteSceneID;

@end
