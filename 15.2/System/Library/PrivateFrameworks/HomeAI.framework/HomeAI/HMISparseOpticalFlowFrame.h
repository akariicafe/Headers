@interface HMISparseOpticalFlowFrame : HMFObject

@property (readonly) struct __CVBuffer { } *pixelBuffer;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;

- (id)description;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
