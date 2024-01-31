@interface _UIScenePresentationViewAccessibility : ___UIScenePresentationViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)dealloc;
- (id)accessibilityElements;
- (BOOL)canBecomeFocused;
- (id)_viewToAddFocusLayer;
- (BOOL)_accessibilityHandlesRemoteFocusMovement;
- (int)_accessibilityRemotePid;
- (id)_accessibilityRemoteSceneID;
- (id)_accessibilityResponderElement;
- (BOOL)_accessibilityServesAsFirstResponder;
- (BOOL)_axIsPosterLockViewWithScene:(id)a0;

@end
