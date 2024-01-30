@interface UIViewAnimationStateAccessibility : __UIViewAnimationStateAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (void)animationDidStart:(id)a0;
- (id)_accessibilityAnimationTracker;
- (void)_accessibilityMarkAnimationNotInProgress:(id)a0;
- (void)_accessibilitySetAnimationTracker:(id)a0;

@end
