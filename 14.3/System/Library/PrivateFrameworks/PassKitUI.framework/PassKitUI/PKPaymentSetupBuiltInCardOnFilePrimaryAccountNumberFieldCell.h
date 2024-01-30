@class UIImageView;

@interface PKPaymentSetupBuiltInCardOnFilePrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {
    UIImageView *_accessoryImageView;
}

@property (nonatomic) long long paymentCredentialType;
@property (nonatomic) BOOL hasDarkAppearance;

- (BOOL)textFieldShouldClear:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)pk_applyAppearance:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)setPaymentSetupField:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (void)_updateNetworkImage;
- (id)_networkImage;

@end
