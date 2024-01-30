@class NSString, PSPasscodeField;

@interface PSBulletedPINView : PINView <PSPasscodeFieldDelegate> {
    PSPasscodeField *_passcodeField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (BOOL)isFirstResponder;
- (id)stringValue;
- (void)deleteLastCharacter;
- (void)setStringValue:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)passcodeField:(id)a0 enteredPasscode:(id)a1;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)hidePasscodeField:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 numberOfFields:(int)a1;
- (void)appendString:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)setBlocked:(BOOL)a0;

@end
