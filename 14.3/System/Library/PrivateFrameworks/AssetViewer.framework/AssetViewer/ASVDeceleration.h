@interface ASVDeceleration : NSObject

@property (nonatomic) float velocity;
@property (nonatomic) float minEndDelta;
@property (nonatomic) double startTime;
@property (nonatomic) double currentTime;
@property (nonatomic) double previousTime;
@property (nonatomic) long long frameCount;
@property (nonatomic) BOOL isDecelerating;

- (id)initWithVelocity:(float)a0 minEndDelta:(float)a1;
- (float)decelerationDelta;

@end
