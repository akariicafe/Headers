@class UILabel, PKMerchantTokenIconView, UIStackView;

@interface PKMerchantTokenDetailHeaderCell : UITableViewCell {
    UIStackView *_stackView;
    PKMerchantTokenIconView *_iconView;
    UILabel *_nameLabel;
    UILabel *_secondaryLabel;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)updateCellWithMerchantToken:(id)a0;
- (void)_setUpViews;
- (void)_setUpSelf;
- (void)_setUpStackView;
- (void)_setUpIconView;
- (void)_setUpNameLabel;
- (void)_setUpSecondaryLabel;
- (void)_setUpStackViewConstraints;
- (void)_setUpIconViewConstraints;

@end
