@class PKBankAccountInformation, UIImage;

@interface PKPaymentPreferenceBankAccountCell : PKPaymentPreferenceCardCell {
    UIImage *_bankIcon;
}

@property (retain, nonatomic) PKBankAccountInformation *bankAccount;

- (void).cxx_destruct;
- (void)_updateCellContent;
- (void)_updateCensoredPANLabel;
- (id)initWithReuseIdentifier:(id)a0;

@end
