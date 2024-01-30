@class NSString, PSPasscodeField;
@protocol KeychainSyncPasscodeFieldDelegate;

@interface PasscodeFieldCell : PSTableCell <PSPasscodeFieldDelegate>

@property (weak, nonatomic) id<KeychainSyncPasscodeFieldDelegate> delegate;
@property (nonatomic) BOOL convertsNumeralsToASCII;
@property (nonatomic) BOOL denyFirstResponder;
@property (readonly, nonatomic) PSPasscodeField *passcodeField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)_setSecureTextEntry:(BOOL)a0;
- (void)setPasscodeText:(id)a0;
- (id)passcodeField:(id)a0 shouldInsertText:(id)a1;
- (void)deleteBackward;
- (void)passcodeField:(id)a0 enteredPasscode:(id)a1;
- (BOOL)hasText;
- (long long)keyboardType;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (BOOL)becomeFirstResponder;
- (void)cellTapped:(id)a0;
- (id)passcodeText;

@end
