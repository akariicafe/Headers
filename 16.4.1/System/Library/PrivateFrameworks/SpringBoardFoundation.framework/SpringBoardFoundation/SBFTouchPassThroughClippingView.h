@class _SBFActualClippingView;

@interface SBFTouchPassThroughClippingView : SBFTouchPassThroughView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentClippingFrame;
@property (nonatomic) double contentCornerRadius;
@property (retain, nonatomic) _SBFActualClippingView *contentClippingView;
@property (nonatomic, getter=isContentClippingEnabled) BOOL contentClippingEnabled;
@property (nonatomic) BOOL hitTestsSubviewsOutsideBounds;

- (void)insertSubview:(id)a0 atIndex:(long long)a1;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)setContentClippingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a1;
- (void)setOpaque:(BOOL)a0;
- (void)bringSubviewToFront:(id)a0;
- (void)_layoutContentClippingView;
- (void)sendSubviewToBack:(id)a0;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)addSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;

@end
