@class TVRatingBadgeLayout;

@interface TVRatingBadgeView : UIView

@property (retain, nonatomic) TVRatingBadgeLayout *ratingBadgeLayout;
@property (nonatomic) double ratingValue;

+ (id)ratingBadgeViewWithValue:(double)a0 layout:(id)a1 existingBadgeView:(id)a2;

- (id)_tintColor;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeFocused;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)_interitemSpacing;
- (id)_halfStarImage;
- (double)_circleRadius;
- (struct CGSize { double x0; double x1; })_starSize;
- (id)_ratingStyle;
- (double)_starHeight;
- (id)_starImage;

@end
