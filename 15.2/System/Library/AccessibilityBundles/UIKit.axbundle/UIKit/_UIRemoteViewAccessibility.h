@interface _UIRemoteViewAccessibility : ___UIRemoteViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_accessibilitySetRetainedValue:(id)a0 forKey:(id)a1;
- (id)accessibilityIdentifier;
- (id)accessibilityElements;
- (void)dealloc;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilityActiveKeyboard;
- (BOOL)_accessibilityServesAsFirstResponder;
- (id)_accessibilityResponderElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilitySetFocusOnElement:(BOOL)a0;
- (void)_accessibilityUnregisterRemoteView;

@end
