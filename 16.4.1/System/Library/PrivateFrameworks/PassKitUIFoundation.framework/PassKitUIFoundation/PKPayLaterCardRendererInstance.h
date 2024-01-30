@interface PKPayLaterCardRendererInstance : NSObject

@property (readonly, nonatomic) void /* unknown type, empty encoding */ position;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ velocity;
@property (readonly, nonatomic) double angularyVelocity;
@property (readonly, nonatomic) double size;
@property (readonly, nonatomic) double explodeTime;
@property (readonly, nonatomic) double angle;
@property (readonly, nonatomic) double mass;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ axis;
@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ forces;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ smoothedPosition;

- (void)addForces:(SEL)a0;
- (void)applyForces;
- (void)explodeAtTime:(double)a0;
- (id)initWithPosition:(SEL)a0 scale:(double)a1 category:(long long)a2;
- (BOOL)isIgnoredAtTime:(double)a0;
- (void)setPosition:(id)a0 andVelocity:(SEL)a1;
- (struct PayLaterInstanceUniform { struct { void /* unknown type, empty encoding */ x0[4]; } x0; })uniformWithSkew:(SEL)a0 now:(double)a1 waveAmplitude:(double)a2;

@end
