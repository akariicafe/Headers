@class UIColor, NSString, SBUIPasscodeTextField, UIFont, NSMutableCharacterSet;
@protocol SBUIPasscodeEntryFieldDelegate;

@interface SBUIPasscodeEntryField : UIView <UITextFieldDelegate> {
    NSMutableCharacterSet *_numericTrimmingSet;
    BOOL _ignoreCallbacks;
    BOOL _resigningFirstResponder;
}

@property (readonly, nonatomic, getter=_textField) SBUIPasscodeTextField *textField;
@property (weak, nonatomic) id<SBUIPasscodeEntryFieldDelegate> delegate;
@property (copy, nonatomic) NSString *stringValue;
@property (retain, nonatomic) UIColor *customBackgroundColor;
@property (retain, nonatomic) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_usesTextFieldForFirstResponder;

- (BOOL)isFirstResponder;
- (id)stringValue;
- (void)deleteLastCharacter;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (struct CGSize { double x0; double x1; })_viewSize;
- (void)_appendString:(id)a0;
- (void)setStringValue:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)textFieldDidResignFirstResponder:(id)a0;
- (void)appendString:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)reset;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)_resetForFailedPasscode:(BOOL)a0;
- (void)_autofillForBiometricAuthenticationWithCompletion:(id /* block */)a0;
- (void)_setLuminosityBoost:(double)a0;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)a0;
- (void)_deleteLastCharacter;
- (BOOL)_hasAnyCharacters;
- (void)notePasscodeFieldDidAcceptEntry;
- (BOOL)shouldInsertPasscodeText:(id)a0;
- (void)notePasscodeFieldTextDidChange;
- (void)_handleKeyUIEvent:(id)a0 source:(int)a1;

@end
