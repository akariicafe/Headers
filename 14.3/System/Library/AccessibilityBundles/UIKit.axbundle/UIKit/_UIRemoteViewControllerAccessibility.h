@interface _UIRemoteViewControllerAccessibility : ___UIRemoteViewControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)disconnect;
- (id)_accessibilityResponderElement;
- (void)_awakeWithConnectionInfo:(id)a0;
- (void)__handleFocusMovementAction:(id)a0;
- (void)__setViewServiceIsDisplayingPopover:(BOOL)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityLoadAccessibilityInformation:(BOOL)a0;
- (void)_accessibilityLoadAccessibilityInformation:(BOOL)a0 retryTime:(double)a1;
- (void)_axRemoteViewLoadRequest:(id)a0;
- (BOOL)_axShouldTakeBackFocus;
- (void)_axSetWasFocusEnabled:(BOOL)a0;
- (void)_axTakeBakeFocusWithHeading:(unsigned long long)a0;
- (BOOL)_axGetWasFocusEnabled;

@end
