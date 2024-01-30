@interface _UIStatusBarLockViewAccessibility : ___UIStatusBarLockViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)animateUnlockWithCompletionBlock:(id /* block */)a0;
- (id)accessibilityLabel;

@end
