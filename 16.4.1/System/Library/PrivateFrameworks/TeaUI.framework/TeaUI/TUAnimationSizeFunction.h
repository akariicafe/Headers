@class TUAnimationFloatFunction, CAMediaTimingFunction;

@interface TUAnimationSizeFunction : NSObject

@property (retain, nonatomic) TUAnimationFloatFunction *widthFunction;
@property (retain, nonatomic) TUAnimationFloatFunction *heightFunction;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) struct CGSize { double width; double height; } startValue;
@property (nonatomic) struct CGSize { double width; double height; } endValue;
@property (nonatomic) double speed;

- (void).cxx_destruct;
- (void)_reloadFunctions;
- (id)initWithTimingFunction:(id)a0 startRect:(struct CGSize { double x0; double x1; })a1 endRect:(struct CGSize { double x0; double x1; })a2 speed:(double)a3;
- (struct CGSize { double x0; double x1; })solveForTime:(double)a0;

@end
