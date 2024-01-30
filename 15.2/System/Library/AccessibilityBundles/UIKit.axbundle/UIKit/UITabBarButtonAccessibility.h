@interface UITabBarButtonAccessibility : __UITabBarButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (unsigned long long)_accessibilityAutomationType;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (long long)_currentItemState;
- (BOOL)_accessibilityRetainsFocusOnScreenChange;
- (BOOL)_accessibilityElementHasImage;

@end
