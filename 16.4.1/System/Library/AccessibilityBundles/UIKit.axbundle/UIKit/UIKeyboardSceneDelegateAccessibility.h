@interface UIKeyboardSceneDelegateAccessibility : __UIKeyboardSceneDelegateAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)orderOutWithAnimationStyle:(id)a0;
- (void)setInputViews:(id)a0 animationStyle:(id)a1;
- (void)orderInWithAnimationStyle:(id)a0;
- (void)_axPostScreenChange;

@end
