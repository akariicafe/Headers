@class NSMutableArray, UIView;

@interface SBUISimpleFixedDigitPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {
    UIView *_characterIndicatorsContainerView;
    NSMutableArray *_characterIndicators;
    UIView *_springView;
    UIView *_springViewParent;
}

- (struct CGSize { double x0; double x1; })_viewSize;
- (void).cxx_destruct;
- (void)reset;
- (void)_appendString:(id)a0;
- (void)_autofillForBiometricAuthenticationWithCompletion:(id /* block */)a0;
- (void)_deleteLastCharacter;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_entryFieldBoundsWithXOffset:(double)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_entryFieldPaddingOutsideRing;
- (BOOL)_hasAnyCharacters;
- (void)_resetForFailedPasscode:(BOOL)a0;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)a0;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)a0 numberOfDigits:(unsigned long long)a1;

@end
