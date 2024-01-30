@class OBPasscodeField, NSString;

@interface OBSimplePasscodeInputView : OBPasscodeInputView <OBPasscodeFieldDelegate>

@property (retain, nonatomic) OBPasscodeField *passcodeField;
@property (nonatomic) BOOL limitCharactersToNumbers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)passcodeField:(id)a0 enteredPasscode:(id)a1;
- (id)passcode;
- (id)passcodeDisplayView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 numberOfEntryFields:(unsigned long long)a1;
- (void)setPasscode:(id)a0;

@end
