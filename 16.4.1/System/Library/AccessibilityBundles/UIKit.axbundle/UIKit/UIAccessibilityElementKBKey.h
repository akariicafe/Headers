@class NSArray, UIKBTree;

@interface UIAccessibilityElementKBKey : UIAccessibilityElement {
    UIKBTree *_key;
    BOOL _changesOnShiftDown;
    NSArray *_cachedVariantKeys;
}

+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityIdentifier;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (id)description;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)_accessibilitySecondaryActivate;
- (BOOL)_accessibilityAllowsAlternativeCharacterActivation;
- (BOOL)_accessibilityDismissAlternativeKeyPicker;
- (BOOL)_accessibilityHasVariantKeys;
- (BOOL)_accessibilityIsInternationalKeyboardKey;
- (BOOL)_accessibilityKeyboardKeyAllowsTouchTyping;
- (id)_accessibilityKeyboardKeyEnteredString;
- (BOOL)_accessibilityKeyboardKeyHasSignificantAlternateActions;
- (BOOL)_accessibilityKeyboardSupportsGestureMode;
- (id)_accessibilitySupportGesturesAttributes;
- (BOOL)_accessibilitySupportsSecondaryActivateAction;
- (id)_accessibilityVariantKeys;
- (BOOL)_accessibilityActivatePanAlternate:(id)a0;
- (BOOL)_performCapsLockDoubleTap;

@end
