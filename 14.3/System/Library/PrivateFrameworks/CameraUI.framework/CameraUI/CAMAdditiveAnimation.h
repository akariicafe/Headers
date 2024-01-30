@class CAMediaTimingFunction;

@interface CAMAdditiveAnimation : NSObject

@property (readonly, nonatomic) double _toValue;
@property (nonatomic) double _fromValue;
@property (readonly, nonatomic) double _duration;
@property (readonly, nonatomic) CAMediaTimingFunction *_curve;
@property (retain, nonatomic) CAMAdditiveAnimation *_fromAnimation;
@property (nonatomic, setter=_setStartTime:) double _startTime;
@property (nonatomic, setter=_setLastTime:) double _lastTime;
@property (readonly, nonatomic) double value;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;

+ (id)animationToValue:(double)a0 fromAnimation:(id)a1 duration:(double)a2 curve:(id)a3;
+ (id)animationToValue:(double)a0 fromValue:(double)a1 duration:(double)a2 curve:(id)a3;

- (void).cxx_destruct;
- (id)description;
- (void)updateWithTimestamp:(double)a0;

@end
