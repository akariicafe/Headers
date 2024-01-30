@interface FlexMLGainValue : NSObject

@property (readonly, nonatomic) float gain;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } segmentTime;

- (long long)compare:(id)a0;
- (id)initWithGain:(float)a0 segmentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
