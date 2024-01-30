@interface GKVoronoiNoiseSource : GKNoiseSource

@property (nonatomic) double frequency;
@property (nonatomic) double displacement;
@property (nonatomic, getter=isDistanceEnabled) BOOL distanceEnabled;
@property (nonatomic) int seed;

+ (id)voronoiNoiseWithFrequency:(double)a0 displacement:(double)a1 distanceEnabled:(BOOL)a2 seed:(int)a3;

- (id)init;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (id)initWithFrequency:(double)a0 displacement:(double)a1 distanceEnabled:(BOOL)a2 seed:(int)a3;

@end
