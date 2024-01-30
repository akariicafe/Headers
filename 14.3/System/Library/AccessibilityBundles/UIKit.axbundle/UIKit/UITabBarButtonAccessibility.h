@interface UITabBarButtonAccessibility : __UITabBarButtonAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (long long)_currentItemState;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (BOOL)_accessibilityRetainsFocusOnScreenChange;
- (BOOL)_axIsSelected:(id)a0;

@end
