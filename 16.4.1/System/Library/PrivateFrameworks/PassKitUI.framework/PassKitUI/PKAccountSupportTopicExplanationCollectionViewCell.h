@class UILabel, UIImageView;

@interface PKAccountSupportTopicExplanationCollectionViewCell : UICollectionViewCell {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_iconImageView;
}

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setExplanationContent:(id)a0;

@end
