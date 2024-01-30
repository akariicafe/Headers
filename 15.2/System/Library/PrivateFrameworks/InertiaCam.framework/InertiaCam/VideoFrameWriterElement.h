@interface VideoFrameWriterElement : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameTime;
@property (nonatomic) long long frameNumber;

- (void)dealloc;
- (void)DeallocPixBuffer;

@end
