@interface UINavigationBarAccessibility_UIViewAccessibilityAdditions : __UINavigationBarAccessibility_UIViewAccessibilityAdditions_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityPerformEscape;
- (id)accessibilityLanguage;
- (BOOL)accessibilityActivate;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityAXAttributedLabel;
- (BOOL)__accessibilitySupportsActivateAction;
- (BOOL)_accessibilityIsTitleElement;
- (BOOL)_accessibilityServesAsFirstElement;
- (BOOL)_accessibilityUserTestingIsRightNavButton;
- (void)_accessibilitySetNavigationViewInfo:(id)a0;
- (id)_accessibilityNavigationViewInfo;
- (BOOL)_accessibilityUIViewCanPerformEscapeAction;

@end
