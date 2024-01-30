@class UITapGestureRecognizer, NSMutableArray, UIPanGestureRecognizer;
@protocol MPURatingControlDelegate;

@interface MPURatingControl : UIControl {
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSMutableArray *_imageViews;
}

@property (weak, nonatomic) id<MPURatingControlDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeInsets;
@property (nonatomic) double rating;

+ (id)ratingStarImage;
+ (id)ratingDotImage;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)viewDidMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handleTapGesture:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_handlePanGesture:(id)a0;
- (void)_updateImageViewsForRatingAnimated:(BOOL)a0;
- (double)ratingValueForLocationInView:(struct CGPoint { double x0; double x1; })a0;
- (void)setRating:(double)a0 animated:(BOOL)a1;
- (void)_updateImageView:(id)a0 proposedImage:(id)a1 filled:(BOOL)a2;

@end
