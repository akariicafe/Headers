@class TSKHorizontalDragRecognizer, TSUColor;

@interface TSKStarRatingView : UIControl {
    long long mRating;
    long long mRatingOnFingerDown;
    TSKHorizontalDragRecognizer *mDragGesture;
}

@property (nonatomic) long long value;
@property (nonatomic) int style;
@property (nonatomic) BOOL showsDots;
@property (copy, nonatomic) TSUColor *color;

+ (struct CGPath { } *)newStarPath:(double)a0;
+ (void)renderRating:(long long)a0 intoContext:(struct CGContext { } *)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 style:(int)a3 showDots:(BOOL)a4;

- (Class)renderClass;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)willMoveToSuperview:(id)a0;
- (void)p_horizontalDrag:(id)a0;
- (void)p_setupGestureRecognizers;
- (long long)p_starRatingForGesture:(id)a0;
- (long long)p_starRatingForLocation:(double)a0;
- (void)p_tapped:(id)a0;

@end
