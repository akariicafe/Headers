@class CAMediaTimingFunction;

@interface PKSpringAnimationFactory : NSObject {
    double _duration;
    BOOL _needsDurationUpdate;
}

@property (readonly, nonatomic) double duration;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double velocity;
@property (retain, nonatomic) CAMediaTimingFunction *timing;

+ (double)defaultDuration;
+ (id)springAnimationWithKeyPath:(id)a0;
+ (id)highFrameRateSpringAnimationWithKeyPath:(id)a0 reason:(unsigned short)a1;
+ (id)defaultTimingFunction;

- (id)_timingFunctionForAnimation;
- (id)springAnimationWithKeyPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)highFrameRateSpringAnimationWithKeyPath:(id)a0 reason:(unsigned short)a1;
- (id)initWithVelocity:(double)a0 timing:(id)a1;
- (id)initWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 velocity:(double)a3 timing:(id)a4;
- (id)_springAnimationWithKeyPath:(id)a0;
- (void)_updateDurationIfNecessary;
- (id)initWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 velocity:(double)a3;
- (id)initWithVelocity:(double)a0;
- (void)dealloc;

@end
