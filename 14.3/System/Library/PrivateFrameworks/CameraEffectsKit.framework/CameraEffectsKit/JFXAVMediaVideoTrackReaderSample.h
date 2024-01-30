@interface JFXAVMediaVideoTrackReaderSample : NSObject <JFXMediaVideoTrackReaderSample>

@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *sampleBufferRef;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationTimeStamp;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;

- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
