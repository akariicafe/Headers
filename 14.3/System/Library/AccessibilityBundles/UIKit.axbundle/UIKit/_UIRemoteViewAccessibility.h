@interface _UIRemoteViewAccessibility : ___UIRemoteViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityElements;
- (void)dealloc;
- (BOOL)_accessibilityServesAsFirstResponder;
- (id)_accessibilityResponderElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilitySetFocusOnElement:(BOOL)a0;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)accessibilityIdentifier;
- (id)_accessibilityActiveKeyboard;
- (void)_accessibilitySetRetainedValue:(id)a0 forKey:(id)a1;
- (void)_accessibilityUnregisterRemoteView;
- (void)_accessibilitySetRemoteElementIfNecessary;
- (id)_accessibilityGetRemoteElementArray;
- (id)_accessibilityRemoteElementCommunicationQueue;
- (void)_accessibilitySetRemoteElementArray:(id)a0;
- (void)_accessibilityTransmitRemoteUUIDToPid:(int)a0 machPort:(unsigned int)a1 value:(id)a2;

@end
