@class NSString, UIImageView, UIImage, UILabel;

@interface PKCollectionHeaderView : UICollectionViewListCell {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSString *tertiaryText;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (double)heightOfHeaderWithoutText;

@end
