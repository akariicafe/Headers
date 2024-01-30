@class CAMediaTimingFunction;

@interface _SUICCheckGlyphSpringAnimationFactory : NSObject {
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
+ (id)defaultTimingFunction;
+ (id)springAnimationWithKeyPath:(id)a0 velocity:(double)a1;

- (void)dealloc;
- (id)init;
- (id)_timingFunctionForAnimation;
- (void).cxx_destruct;
- (id)initWithVelocity:(double)a0;
- (id)springAnimationWithKeyPath:(id)a0;
- (id)_springAnimationWithKeyPath:(id)a0;
- (void)_updateDurationIfNecessary;
- (id)initWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 velocity:(double)a3;
- (id)initWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 velocity:(double)a3 timing:(id)a4;
- (id)initWithVelocity:(double)a0 timing:(id)a1;

@end
