@interface MOVStreamFrame : NSObject

@property (readonly) struct __CVBuffer { } *pixelBuffer;
@property (readonly) double timeStamp;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } cmTimeStamp;
@property (readonly) id context;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 timeStamp:(double)a1 context:(id)a2;

@end
