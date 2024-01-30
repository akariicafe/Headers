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

+ (id)springAnimationWithKeyPath:(id)a0;
+ (id)springAnimationWithKeyPath:(id)a0 velocity:(double)a1;
+ (id)defaultTimingFunction;
+ (double)defaultDuration;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_timingFunctionForAnimation;
- (id)springAnimationWithKeyPath:(id)a0;
- (id)initWithVelocity:(double)a0 timing:(id)a1;
- (id)initWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 velocity:(double)a3 timing:(id)a4;
- (id)_springAnimationWithKeyPath:(id)a0;
- (void)_updateDurationIfNecessary;
- (id)initWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 velocity:(double)a3;
- (id)initWithVelocity:(double)a0;

@end
