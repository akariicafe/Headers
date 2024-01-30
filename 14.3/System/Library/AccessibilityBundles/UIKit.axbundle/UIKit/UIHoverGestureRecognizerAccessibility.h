@interface UIHoverGestureRecognizerAccessibility : __UIHoverGestureRecognizerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (long long)state;
- (void)_axSetOverrideStateEnabled:(BOOL)a0 forFocusedElement:(id)a1;
- (BOOL)_axIsListeningForNotifications;
- (void)_axSetIsListeningForNotifications:(BOOL)a0;
- (void)_accessibilityFocusedElementChanged:(id)a0;
- (void)_accessibilityFocusedElementChangedToElement:(id)a0;
- (void)_axSetSimulatedState:(long long)a0;
- (void)_accessibilitySimulateStateChange;
- (long long)_axSimulatedState;
- (id)_axGesture;

@end
