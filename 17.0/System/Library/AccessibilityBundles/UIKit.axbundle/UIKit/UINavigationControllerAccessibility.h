@interface UINavigationControllerAccessibility : __UINavigationControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)accessibilityPerformEscape;
- (void)navigationTransitionView:(id)a0 didEndTransition:(long long)a1 fromView:(id)a2 toView:(id)a3;
- (void)navigationTransitionView:(id)a0 didStartTransition:(long long)a1;
- (BOOL)_accessibilityCanPerformEscapeAction;
- (id)_accessibilitySpeakThisViewController;
- (BOOL)_accessibilityNavigationControllerShouldSendScreenChange;

@end
