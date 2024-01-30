@interface VCPVideoMetaFocusSegment : VCPMetaSegment

@property long long focusStatus;

- (id)initWithFocusStatus:(long long)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)resetSegment:(long long)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)updateSegment:(long long)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
