@protocol NUSlowMotionTimeRangeMapper;

@interface NUTimeTransformSlowMo : NUGeometryTransform

@property (readonly, nonatomic) BOOL isInverse;
@property (readonly, nonatomic) id<NUSlowMotionTimeRangeMapper> timeMapper;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSlowMoBeginTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 rate:(float)a2 assetDuration:(double)a3;
- (id)initWithSlowMoTimeMapper:(id)a0 isInverse:(BOOL)a1;
- (id)inverseTransform;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })transformTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
