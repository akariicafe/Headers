@interface _UIRemoteViewAccessibility : ___UIRemoteViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)dealloc;
- (id)accessibilityElements;
- (id)accessibilityIdentifier;
- (id)_accessibilityActiveKeyboard;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityResponderElement;
- (BOOL)_accessibilityServesAsFirstResponder;
- (void)_accessibilitySetFocusOnElement:(BOOL)a0;
- (void)_accessibilityUnregisterRemoteView;

@end
