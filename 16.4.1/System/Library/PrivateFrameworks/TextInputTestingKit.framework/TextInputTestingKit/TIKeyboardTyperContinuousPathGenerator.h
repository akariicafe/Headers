@class NSMutableArray;

@interface TIKeyboardTyperContinuousPathGenerator : NSObject {
    NSMutableArray *_targets;
    double _velocity;
    double _dt;
    double _stallDuration;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } currentPoint;
@property (readonly, nonatomic) double currentTimestamp;
@property (readonly, nonatomic) BOOL isDone;

- (void)step;
- (void).cxx_destruct;
- (void)addTargetPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithVelocity:(double)a0 timestamp:(double)a1 dt:(double)a2 stallDuration:(double)a3;

@end
