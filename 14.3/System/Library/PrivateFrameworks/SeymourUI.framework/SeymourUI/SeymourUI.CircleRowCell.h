@interface SeymourUI.CircleRowCell : UICollectionViewListCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ bottomLine;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ textGuide;
    void /* unknown type, empty encoding */ lastConstraints;
}

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textSizeChanged:(id)a0;

@end
