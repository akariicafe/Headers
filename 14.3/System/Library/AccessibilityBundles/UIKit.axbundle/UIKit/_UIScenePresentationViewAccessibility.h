@interface _UIScenePresentationViewAccessibility : ___UIScenePresentationViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (id)accessibilityElements;
- (void)dealloc;
- (id)_viewToAddFocusLayer;
- (int)_accessibilityRemotePid;
- (BOOL)_accessibilityHandlesRemoteFocusMovement;
- (id)_accessibilityRemoteSceneID;
- (void)_accessibilityResetRemoteElementArray;
- (BOOL)_accessibilityShouldUseRemoteElement;
- (void)_accessibilitySetRemoteElementIfNecessary;
- (id)_accessibilityGetRemoteElementArray;
- (void)_accessibilitySetRemoteElementArray:(id)a0;
- (id)_axRemoteChild;

@end
