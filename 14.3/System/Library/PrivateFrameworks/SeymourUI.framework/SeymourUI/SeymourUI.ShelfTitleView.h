@interface SeymourUI.ShelfTitleView : UICollectionReusableView {
    void /* unknown type, empty encoding */ indexPath;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ titleButton;
    void /* unknown type, empty encoding */ bottomLayoutConstraints;
    void /* unknown type, empty encoding */ alternateBottomLayoutConstraints;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ shelf;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tappedTitleButton:(id)a0;

@end
