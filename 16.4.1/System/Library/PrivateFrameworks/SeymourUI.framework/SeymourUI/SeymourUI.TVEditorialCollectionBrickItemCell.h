@interface SeymourUI.TVEditorialCollectionBrickItemCell : SeymourUI.TVFocusableCollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ floatingView;
    void /* unknown type, empty encoding */ tvArtworkView;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ bottomTextStackView;
    void /* unknown type, empty encoding */ footnoteLabel;
    void /* unknown type, empty encoding */ recencyIconView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ gradientLayer;
}

- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
