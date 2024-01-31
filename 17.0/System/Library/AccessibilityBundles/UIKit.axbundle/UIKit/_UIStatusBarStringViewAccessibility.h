@interface _UIStatusBarStringViewAccessibility : ___UIStatusBarStringViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)canBecomeFocused;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)_accessibilityIsNonDismissableStatusBarElement;
- (BOOL)_accessibilityInTopLevelTabLoop;

@end
