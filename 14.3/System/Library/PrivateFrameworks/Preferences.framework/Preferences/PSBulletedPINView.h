@class NSString, PSPasscodeField;

@interface PSBulletedPINView : PINView <PSPasscodeFieldDelegate> {
    PSPasscodeField *_passcodeField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)setStringValue:(id)a0;
- (void)dealloc;
- (void)setBlocked:(BOOL)a0;
- (void)passcodeField:(id)a0 enteredPasscode:(id)a1;
- (void)appendString:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isFirstResponder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)stringValue;
- (void)hidePasscodeField:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 numberOfFields:(int)a1;
- (void)deleteLastCharacter;

@end
