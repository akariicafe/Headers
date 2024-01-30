@class TUAnimationFloatFunction, CAMediaTimingFunction;

@interface TUAnimationPointFunction : NSObject

@property (retain, nonatomic) TUAnimationFloatFunction *xFunction;
@property (retain, nonatomic) TUAnimationFloatFunction *yFunction;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) struct CGPoint { double x; double y; } startValue;
@property (nonatomic) struct CGPoint { double x; double y; } endValue;
@property (nonatomic) double speed;

- (void).cxx_destruct;
- (void)_reloadFunctions;
- (id)initWithTimingFunction:(id)a0 startRect:(struct CGPoint { double x0; double x1; })a1 endRect:(struct CGPoint { double x0; double x1; })a2 speed:(double)a3;
- (struct CGPoint { double x0; double x1; })solveForTime:(double)a0;

@end
