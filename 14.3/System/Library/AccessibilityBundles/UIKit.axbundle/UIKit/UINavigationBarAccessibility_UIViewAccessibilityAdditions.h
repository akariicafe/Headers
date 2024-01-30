@interface UINavigationBarAccessibility_UIViewAccessibilityAdditions : __UINavigationBarAccessibility_UIViewAccessibilityAdditions_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (BOOL)isAccessibilityElement;
- (BOOL)_accessibilityIsTitleElement;
- (BOOL)_accessibilityServesAsFirstElement;
- (unsigned long long)accessibilityTraits;
- (BOOL)_accessibilityUserTestingIsRightNavButton;
- (id)_accessibilityAXAttributedLabel;
- (BOOL)accessibilityPerformEscape;
- (id)accessibilityLanguage;
- (BOOL)accessibilityActivate;
- (BOOL)__accessibilitySupportsActivateAction;
- (void)_accessibilitySetNavigationViewInfo:(id)a0;
- (id)_accessibilityNavigationViewInfo;
- (BOOL)_accessibilityIsNavigationView;
- (BOOL)_accessibilityUIViewCanPerformEscapeAction;

@end
