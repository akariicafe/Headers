@class UILabel, PKMerchantTokenIconView, UIStackView;

@interface PKMerchantTokenCell : UICollectionViewListCell {
    UIStackView *_stackView;
    PKMerchantTokenIconView *_iconView;
    UILabel *_nameLabel;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_setUpStackView;
- (void)_setUpNameLabel;
- (void)_setUpIconView;
- (void)_setUpIconViewConstraints;
- (void)_setUpSelf;
- (void)_setUpSeparatorConstraints;
- (void)_setUpStackViewConstraints;
- (void)_setUpViews;
- (void)updateCellWithMerchantToken:(id)a0 showMerchantIcon:(BOOL)a1;

@end
