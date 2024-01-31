@interface UINavigationBarAccessibility_UIViewAccessibilityAdditions : __UINavigationBarAccessibility_UIViewAccessibilityAdditions_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (id)accessibilityLanguage;
- (BOOL)accessibilityPerformEscape;
- (id)_accessibilityAXAttributedLabel;
- (BOOL)__accessibilitySupportsActivateAction;
- (BOOL)_accessibilityIsTitleElement;
- (BOOL)_accessibilityServesAsFirstElement;
- (BOOL)_accessibilityUserTestingIsRightNavButton;
- (id)_accessibilityNavigationViewInfo;
- (void)_accessibilitySetNavigationViewInfo:(id)a0;
- (BOOL)_accessibilityUIViewCanPerformEscapeAction;

@end
