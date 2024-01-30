@class TLKLabel, SearchUIImageView, TLKStackView;

@interface SearchUIInfoValueCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) TLKLabel *valueLabel;
@property (retain, nonatomic) TLKStackView *stackView;
@property (retain, nonatomic) SearchUIImageView *imageView;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)_disableRasterizeInAnimations;
- (void).cxx_destruct;
- (void)initializeStackView;
- (void)updateWithString:(id)a0 image:(id)a1;

@end
