@class PKBankAccountInformation, UIImage;

@interface PKPaymentPreferenceBankAccountCell : PKPaymentPreferenceCardCell {
    UIImage *_bankIcon;
}

@property (retain, nonatomic) PKBankAccountInformation *bankAccount;

- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_updateCellContent;
- (void)_updateCensoredPANLabel;

@end
