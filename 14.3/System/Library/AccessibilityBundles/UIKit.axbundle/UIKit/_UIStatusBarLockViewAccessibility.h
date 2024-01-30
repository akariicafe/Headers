@interface _UIStatusBarLockViewAccessibility : ___UIStatusBarLockViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (void)animateUnlockWithCompletionBlock:(id /* block */)a0;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;

@end
