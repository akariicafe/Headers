@interface _UIRemoteViewControllerAccessibility : ___UIRemoteViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)disconnect;
- (void)__handleFocusMovementAction:(id)a0;
- (void)__setViewServiceIsDisplayingPopover:(BOOL)a0;
- (void)_awakeWithConnectionInfo:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityResponderElement;
- (void)_accessibilityRemoteView:(id)a0 pid:(int)a1 machPort:(unsigned int)a2;
- (BOOL)_axGetWasFocusEnabled;
- (id)_axMachPortRetrievalTimer;
- (void)_axRemoteViewLoadRequest:(id)a0;
- (void)_axSetMachPortRetrievalTimer:(id)a0;
- (void)_axSetWasFocusEnabled:(BOOL)a0;
- (void)_axTakeBakeFocusWithHeading:(id)a0;

@end
