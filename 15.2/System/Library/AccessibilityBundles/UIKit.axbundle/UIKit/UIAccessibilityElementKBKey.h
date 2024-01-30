@class NSArray, UIKBTree;

@interface UIAccessibilityElementKBKey : UIAccessibilityElement {
    UIKBTree *_key;
    BOOL _changesOnShiftDown;
    NSArray *_cachedVariantKeys;
}

+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityIdentifier;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)description;
- (BOOL)accessibilityActivate;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)_accessibilitySupportsSecondaryActivateAction;
- (id)_accessibilitySupportGesturesAttributes;
- (BOOL)_accessibilityIsInternationalKeyboardKey;
- (BOOL)_accessibilityKeyboardSupportsGestureMode;
- (id)_accessibilityKeyboardKeyEnteredString;
- (BOOL)_accessibilityKeyboardKeyAllowsTouchTyping;
- (BOOL)_accessibilityAllowsAlternativeCharacterActivation;
- (id)_accessibilityVariantKeys;
- (BOOL)_accessibilityHasVariantKeys;
- (BOOL)_accessibilityKeyboardKeyHasSignificantAlternateActions;
- (BOOL)_accessibilitySecondaryActivate;
- (BOOL)_accessibilityDismissAlternativeKeyPicker;
- (BOOL)_performCapsLockDoubleTap;
- (BOOL)_accessibilityActivatePanAlternate:(id)a0;

@end
