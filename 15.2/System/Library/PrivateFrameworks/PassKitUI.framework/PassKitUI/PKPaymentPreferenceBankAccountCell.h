@class PKBankAccountInformation, UIImage;

@interface PKPaymentPreferenceBankAccountCell : PKPaymentPreferenceCardCell {
    UIImage *_bankIcon;
}

@property (retain, nonatomic) PKBankAccountInformation *bankAccount;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_updateCellContent;
- (void)_updateCensoredPANLabel;

@end
