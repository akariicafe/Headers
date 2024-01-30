@class UIImageView;

@interface PKPaymentSetupBuiltInCardOnFilePrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {
    UIImageView *_accessoryImageView;
}

@property (nonatomic) long long paymentCredentialType;
@property (nonatomic) BOOL hasDarkAppearance;

- (void)setEnabled:(BOOL)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)isEnabled;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)pk_applyAppearance:(id)a0;
- (void)setPaymentSetupField:(id)a0;
- (void)_updateNetworkImage;
- (id)_networkImage;

@end
