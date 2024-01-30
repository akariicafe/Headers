@interface _UIScenePresentationViewAccessibility : ___UIScenePresentationViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (void)dealloc;
- (id)_viewToAddFocusLayer;
- (id)accessibilityElements;
- (BOOL)_accessibilityHandlesRemoteFocusMovement;
- (int)_accessibilityRemotePid;
- (id)_accessibilityRemoteSceneID;
- (BOOL)_axIsPosterLockViewWithScene:(id)a0;

@end
