@class UIImage, UIImageView;

@interface SKUIStarRatingControl : UIControl {
    long long _previousUserRating;
    UIImageView *_emptyStarsImageView;
    UIImageView *_filledStarsImageView;
}

@property (retain, nonatomic) UIImage *emptyStarsImage;
@property (retain, nonatomic) UIImage *filledStarsImage;
@property (nonatomic) long long userRating;
@property (nonatomic) float starSpacing;
@property (nonatomic) float starWidth;

- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)_isRTL;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateUserRatingWithTouch:(id)a0;
- (double)_unfilledStarsMinX;
- (unsigned long long)_ratingForUIDirection:(unsigned long long)a0;
- (double)_unfilledStarsWidth;
- (unsigned long long)_firstStar;
- (unsigned long long)_lastStar;

@end
