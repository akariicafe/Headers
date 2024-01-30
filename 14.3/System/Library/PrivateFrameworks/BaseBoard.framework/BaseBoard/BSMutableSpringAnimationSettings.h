@class NSString, CAMediaTimingFunction;

@interface BSMutableSpringAnimationSettings : BSSpringAnimationSettings <BSAnimationSettingsMutating>

@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double epsilon;
@property (nonatomic) double initialVelocity;
@property (nonatomic) double delay;
@property (nonatomic) double frameInterval;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) float speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStiffness:(double)a0;
- (void)setDamping:(double)a0;
- (void)setInitialVelocity:(double)a0;
- (void)setMass:(double)a0;
- (void)setEpsilon:(double)a0;

@end
