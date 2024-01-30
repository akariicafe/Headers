@interface _UIStatusBarStringViewAccessibility : ___UIStatusBarStringViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (BOOL)_accessibilityIsNonDismissableStatusBarElement;
- (BOOL)_accessibilityInTopLevelTabLoop;

@end
