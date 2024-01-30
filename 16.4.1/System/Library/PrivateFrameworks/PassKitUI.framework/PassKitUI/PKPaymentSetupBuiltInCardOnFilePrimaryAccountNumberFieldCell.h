@class UIImageView;

@interface PKPaymentSetupBuiltInCardOnFilePrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {
    UIImageView *_accessoryImageView;
}

@property (nonatomic) long long paymentCredentialType;
@property (nonatomic) BOOL hasDarkAppearance;

- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)isEnabled;
- (void)dealloc;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)_networkImage;
- (void)_updateNetworkImage;
- (void)pk_applyAppearance:(id)a0;
- (void)setPaymentSetupField:(id)a0;

@end
