@interface _AXTodayPanGestureRecognizer : UIPanGestureRecognizer

@property (nonatomic) long long overriddenState;
@property (nonatomic) BOOL show;
@property (nonatomic) BOOL leading;

- (struct CGPoint { double x0; double x1; })velocityInView:(id)a0;
- (long long)state;
- (struct CGPoint { double x0; double x1; })translationInView:(id)a0;
- (double)_xDimensionForTransition;
- (id)initGestureToShow:(BOOL)a0 leading:(BOOL)a1;

@end
