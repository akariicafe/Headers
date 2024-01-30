@class CAMediaTimingFunction;

@interface TUAnimationFloatFunction : NSObject

@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) double startValue;
@property (nonatomic) double endValue;
@property (nonatomic) double speed;

- (id)init;
- (id)initWithTimingFunction:(id)a0 startValue:(double)a1 endValue:(double)a2 speed:(double)a3;
- (void).cxx_destruct;
- (double)solveForTime:(double)a0;

@end
