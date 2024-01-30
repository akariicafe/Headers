@interface ARCoachingBasicSpring : NSObject {
    float _target;
    float _velocity;
    float _position;
}

@property (nonatomic) float tension;
@property (nonatomic) float friction;
@property (nonatomic) float input;
@property (readonly, nonatomic) float output;

- (id)initWithTension:(float)a0 friction:(float)a1;
- (void)setInput:(float)a0 velocity:(float)a1;
- (void)stepWithDeltaTime:(double)a0;

@end
