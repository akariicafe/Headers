@interface VCPVideoMetaMotionSegment : VCPMetaSegment

@property float absMotion;
@property float stabilityScore;

- (void)finalizeAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithAbsMotion:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)mergeSegment:(id)a0;
- (void)resetSegment:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)updateSegment:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
