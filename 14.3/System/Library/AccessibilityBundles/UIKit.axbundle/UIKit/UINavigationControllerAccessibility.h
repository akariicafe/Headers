@interface UINavigationControllerAccessibility : __UINavigationControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)navigationTransitionView:(id)a0 didEndTransition:(long long)a1 fromView:(id)a2 toView:(id)a3;
- (id)_accessibilitySpeakThisViewController;
- (BOOL)_accessibilityCanPerformEscapeAction;
- (BOOL)accessibilityPerformEscape;
- (void)navigationTransitionView:(id)a0 didStartTransition:(long long)a1;
- (id)_accessibilityOutermostNavigationController;
- (BOOL)_accessibilityVoiceOverFocusIsInView:(id)a0;
- (BOOL)_accessibilityPostScreenChangeForAppearingView:(id)a0;
- (BOOL)_accessibilityNavigationControllerShouldSendScreenChange;

@end
