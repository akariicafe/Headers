@interface UITabBarButtonAccessibility : __UITabBarButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (long long)_currentItemState;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (BOOL)_accessibilityElementHasImage;
- (BOOL)_accessibilityRetainsFocusOnScreenChange;

@end
