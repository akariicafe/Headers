@class NSArray, VUIFavoriteBannerLayout, VUILabel, UIView;

@interface VUIFavoriteBannerView : UIView

@property (retain, nonatomic) VUIFavoriteBannerLayout *layout;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSArray *backgroundImageLogos;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *subtitleLabel;

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForCellReuse;
- (struct CGSize { double x0; double x1; })_layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_imageSizeForBannerStyle:(unsigned long long)a0;
- (id)_generateSiderowImagePointsForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_generateSingleRowImagePoints;
- (id)_generatePlainWeaveImagePointsForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })imageSizeForBannerStyle:(unsigned long long)a0 sizeClass:(long long)a1;
- (id)_generatePointsForPlainWeaveSide:(double)a0 containerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 imageSize:(struct CGSize { double x0; double x1; })a2 direction:(unsigned long long)a3;

@end
