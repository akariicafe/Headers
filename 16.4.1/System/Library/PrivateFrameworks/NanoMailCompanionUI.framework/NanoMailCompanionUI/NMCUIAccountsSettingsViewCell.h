@class UILabel, UIActivityIndicatorView;

@interface NMCUIAccountsSettingsViewCell : PSTableCell

@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UILabel *warningLabel;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
