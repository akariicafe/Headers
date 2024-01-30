@class TVRatingBadgeLayout;

@interface TVRatingBadgeView : UIView

@property (retain, nonatomic) TVRatingBadgeLayout *ratingBadgeLayout;
@property (nonatomic) double ratingValue;

+ (id)ratingBadgeViewWithValue:(double)a0 layout:(id)a1 existingBadgeView:(id)a2;

- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (double)_circleRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_halfStarImage;
- (id)_tintColor;
- (double)_interitemSpacing;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_starSize;
- (id)_starImage;
- (id)_ratingStyle;
- (double)_starHeight;

@end
