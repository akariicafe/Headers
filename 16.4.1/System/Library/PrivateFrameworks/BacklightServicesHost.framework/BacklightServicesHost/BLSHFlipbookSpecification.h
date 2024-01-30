@interface BLSHFlipbookSpecification : NSObject

@property (readonly, nonatomic) unsigned long long softMemoryLimit;
@property (readonly, nonatomic) long long frameCapacity;
@property (readonly, nonatomic) double framesPerSecond;
@property (readonly, nonatomic) double minimumGapDuration;
@property (readonly, nonatomic) double coaelscingEpsilon;
@property (readonly, nonatomic) double minimumPrepareInterval;
@property (readonly, nonatomic) double maximumRenderInterval;

- (id)description;
- (id)initWithSoftMemoryLimit:(unsigned long long)a0 frameCapacity:(long long)a1 framesPerSecond:(double)a2 minimumGapDuration:(double)a3 coaelscingEpsilon:(double)a4 minimumPrepareInterval:(double)a5 maximumRenderInterval:(double)a6;
- (id)initWithFrameCapacity:(unsigned long long)a0 framesPerSecond:(double)a1 minimumGapDuration:(double)a2 coaelscingEpsilon:(double)a3 minimumPrepareInterval:(double)a4 maximumRenderInterval:(double)a5;

@end
