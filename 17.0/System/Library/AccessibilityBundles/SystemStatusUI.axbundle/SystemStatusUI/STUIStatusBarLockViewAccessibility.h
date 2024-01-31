@interface STUIStatusBarLockViewAccessibility : __STUIStatusBarLockViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)animateUnlockWithCompletionBlock:(id /* block */)a0;

@end
