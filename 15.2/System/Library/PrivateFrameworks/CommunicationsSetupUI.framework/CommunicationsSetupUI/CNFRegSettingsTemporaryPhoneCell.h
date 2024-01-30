@class UILabel;

@interface CNFRegSettingsTemporaryPhoneCell : PSTableCell

@property (retain, nonatomic) UILabel *phoneNumberLabel;
@property (retain, nonatomic) UILabel *expirationLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)daysUntilExpiration:(id)a0;

@end
