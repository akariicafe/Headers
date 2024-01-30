@class NSString;

@interface VCStreamInputCaptureSource : VCVideoCapture <VCVideoSink> {
    id _delegate;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _sinkMutex;
}

@property (nonatomic) int captureSourceID;
@property (readonly, nonatomic) long long streamInputID;
@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *formatDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)readUint32FromConfig:(id)a0 key:(id)a1 value:(unsigned int *)a2;

- (void)setDelegate:(id)a0;
- (void)sourceFrameRateDidChange:(unsigned int)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)onVideoFrame:(struct opaqueCMSampleBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 attribute:(struct { BOOL x0; BOOL x1; int x2; BOOL x3; BOOL x4; int x5; unsigned char x6; })a2;
- (void)dealloc;
- (unsigned int)addSink:(id)a0;
- (unsigned int)removeSink:(id)a0;
- (id)initWithCaptureSourceID:(int)a0 configuration:(id)a1;
- (BOOL)setupVideoFormatWithConfiguration:(id)a0;
- (BOOL)setupDataFormatWithConfiguration:(id)a0;

@end
