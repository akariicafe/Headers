@interface UINavigationControllerAccessibility : __UINavigationControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)navigationTransitionView:(id)a0 didEndTransition:(long long)a1 fromView:(id)a2 toView:(id)a3;
- (void)navigationTransitionView:(id)a0 didStartTransition:(long long)a1;
- (BOOL)accessibilityPerformEscape;
- (id)_accessibilitySpeakThisViewController;
- (BOOL)_accessibilityCanPerformEscapeAction;
- (BOOL)_accessibilityNavigationControllerShouldSendScreenChange;

@end
