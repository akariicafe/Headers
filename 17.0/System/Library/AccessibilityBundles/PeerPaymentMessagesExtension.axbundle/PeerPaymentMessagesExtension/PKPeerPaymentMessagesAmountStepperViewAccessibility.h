@interface PKPeerPaymentMessagesAmountStepperViewAccessibility : __PKPeerPaymentMessagesAmountStepperViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)_shakeAmountLabel;
- (void)handleNumberPadAction:(unsigned long long)a0;
- (BOOL)_axHasInvalidAmount;
- (id)_axSpeakAmountTimer;
- (void)_setAXHasInvalidAmount:(BOOL)a0;
- (void)_setAXSpeakAmountTimer:(id)a0;

@end
