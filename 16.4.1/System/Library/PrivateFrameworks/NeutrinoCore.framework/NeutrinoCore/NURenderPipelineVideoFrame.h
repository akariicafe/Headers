@interface NURenderPipelineVideoFrame : NSObject

@property (readonly) struct __CVBuffer { } *pixelBuffer;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameTime;

- (void)dealloc;
- (id)initWithFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 pixelBuffer:(struct __CVBuffer { } *)a1;

@end
