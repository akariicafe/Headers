@interface _UIRemoteViewControllerAccessibility : ___UIRemoteViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)disconnect;
- (void)_awakeWithConnectionInfo:(id)a0;
- (void)__handleFocusMovementAction:(id)a0;
- (void)__setViewServiceIsDisplayingPopover:(BOOL)a0;
- (id)_accessibilityResponderElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axRemoteViewLoadRequest:(id)a0;
- (id)_axMachPortRetrievalTimer;
- (void)_axSetMachPortRetrievalTimer:(id)a0;
- (void)_axSetWasFocusEnabled:(BOOL)a0;
- (void)_axTakeBakeFocusWithHeading:(id)a0;
- (BOOL)_axGetWasFocusEnabled;

@end
