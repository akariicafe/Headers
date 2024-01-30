@interface _UIRemoteViewAccessibility : ___UIRemoteViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityIdentifier;
- (void)dealloc;
- (id)accessibilityElements;
- (id)_accessibilityActiveKeyboard;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityResponderElement;
- (BOOL)_accessibilityServesAsFirstResponder;
- (void)_accessibilitySetFocusOnElement:(BOOL)a0;
- (void)_accessibilityUnregisterRemoteView;

@end
