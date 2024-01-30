@interface NCKeyLineView : UIImageView

@property (nonatomic) double cornerRadius;
@property (nonatomic) double lineWidth;

- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_cachedKeyLineImageWithCornerRadius:(double)a0 lineWidth:(double)a1;
- (void)setKeyLineViewAlphaForProgress:(double)a0;

@end
