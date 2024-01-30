@interface _UIStatusBarLockViewAccessibility : ___UIStatusBarLockViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)animateUnlockWithCompletionBlock:(id /* block */)a0;

@end
