@interface PosterBoard.PosterCoupledTitlesView : UICollectionReusableView {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ lockFooterLabel;
    void /* unknown type, empty encoding */ homeFooterLabel;
    void /* unknown type, empty encoding */ titleLabelSpacingFromTopEdge;
    void /* unknown type, empty encoding */ footerLabelSpacingFromBottomEdge;
}

@property (nonatomic) double alpha;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
