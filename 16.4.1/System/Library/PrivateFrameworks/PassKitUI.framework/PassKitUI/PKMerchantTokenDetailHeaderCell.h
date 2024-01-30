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
- (void)_setUpStackView;
- (void)_setUpNameLabel;
- (void)_setUpIconView;
- (void)_setUpIconViewConstraints;
- (void)_setUpSelf;
- (void)_setUpStackViewConstraints;
- (void)_setUpViews;
- (void)hideMerchantIcon;
- (void)updateCellWithMerchantToken:(id)a0;

@end
