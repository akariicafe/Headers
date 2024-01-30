@class ARFrame, PVFrameSet;

@interface CFXFrame : NSObject

@property (retain, nonatomic) PVFrameSet *pvFrameSet;
@property (retain, nonatomic) ARFrame *arFrame;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } latency;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } requestTime;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithFrameSet:(id)a0;
- (BOOL)isEqualToFrame:(id)a0;
- (id)initWithARFrame:(id)a0;

@end
