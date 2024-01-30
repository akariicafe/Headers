@class NSLayoutConstraint, UIImageView, UIView, PDFPage, UIButton;

@interface PDFIconCollectionViewCell_iOS : UICollectionViewCell {
    UIView *_overlayView;
    NSLayoutConstraint *_ratioConstraint;
    NSLayoutConstraint *_imageViewWidthConstraint;
}

@property (retain, nonatomic) UIButton *actionsButton;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) PDFPage *page;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsUpdate;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)_commonInit;
- (void)updateOverlay;
- (void)setThumbnailWidth:(double)a0;
- (void)updateAspectConstraintWithSize:(struct CGSize { double x0; double x1; })a0;

@end
