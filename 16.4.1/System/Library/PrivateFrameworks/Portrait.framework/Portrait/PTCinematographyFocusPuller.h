@interface PTCinematographyFocusPuller : NSObject

@property (readonly) float maximumAcceleration;
@property float alpha;
@property unsigned long long sampleCount;
@property float targetDistance;
@property (readonly) unsigned long long strategy;
@property (readonly) float maximumVelocity;
@property (readonly) float resistance;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property float focusDistance;
@property float velocity;

+ (unsigned long long)defaultStrategy;
+ (float)defaultEMASampleCount;
+ (float)defaultMaximumVelocity;
+ (float)defaultResistance;

- (id)init;
- (void)reset;
- (id)_asCinematographyDictionary;
- (float)_emaDelta:(float)a0;
- (id)_initWithCinematographyDictionary:(id)a0;
- (float)_minimumTimestepsToMoveBy:(float)a0 maxddx:(float)a1;
- (float)_weightedDialDelta:(float)a0 timeDelta:(float)a1;
- (id)initWithExponentialMovingAverageAlpha:(float)a0;
- (id)initWithExponentialMovingAverageSampleCount:(unsigned long long)a0;
- (id)initWithMaximumVelocity:(float)a0 resistance:(float)a1;
- (float)pullTowardFocusDistance:(float)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (float)pullTowardFocusDistance:(float)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 missing:(BOOL)a2;
- (void)setFocusDistance:(float)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
