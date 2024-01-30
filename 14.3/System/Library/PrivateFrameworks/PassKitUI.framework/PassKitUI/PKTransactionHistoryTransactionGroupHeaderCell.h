@class NSString, UIImageView, UIImage, UILabel, UIView;

@interface PKTransactionHistoryTransactionGroupHeaderCell : PKDashboardCollectionViewCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    BOOL _isTemplateLayout;
    UIImage *_image;
    UIImageView *_imageView;
    UIView *_imageBackgroundView;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL useShadows;

- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateImageViewDynamicColors;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setupImageView;

@end
