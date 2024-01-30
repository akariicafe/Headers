@interface _UIStatusBarStringViewAccessibility : ___UIStatusBarStringViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (BOOL)canBecomeFocused;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (BOOL)_accessibilityIsNonDismissableStatusBarElement;
- (BOOL)_accessibilityInTopLevelTabLoop;

@end
