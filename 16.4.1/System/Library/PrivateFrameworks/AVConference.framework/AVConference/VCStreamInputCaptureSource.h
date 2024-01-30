@class NSString, NSMutableDictionary;
@protocol VCVideoSource;

@interface VCStreamInputCaptureSource : VCVideoCapture <VCVideoSink, VCVideoCaptureServer> {
    id _delegate;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _sinkMutex;
    NSMutableDictionary *_videoSinkState;
    id<VCVideoSource> _cannedVideoCapture;
    int _cannedVideoWidth;
    int _cannedVideoHeight;
}

@property (nonatomic) int captureSourceID;
@property (readonly, nonatomic) long long streamInputID;
@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *formatDescription;
@property (readonly, nonatomic) unsigned int frameRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL followSystemCamera;
@property (readonly, nonatomic) int bestCameraCaptureFrameRate;

+ (BOOL)readUint32FromConfig:(id)a0 key:(id)a1 value:(unsigned int *)a2;
+ (BOOL)readIntegerFromConfig:(id)a0 key:(id)a1 value:(long long *)a2;

- (void)setDelegate:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned int)addSink:(id)a0;
- (BOOL)allSinksSuspended;
- (id /* block */)copyOnVideoFrameBlock;
- (void)didResumeVideoSink:(id)a0;
- (void)didSuspendVideoSink:(id)a0;
- (int)getCaptureFrameRateForSource:(int)a0;
- (void)handleCaptureEvent:(id)a0;
- (void)handleCaptureEvent:(id)a0 subType:(id)a1;
- (id)initWithCaptureSourceID:(int)a0 configuration:(id)a1;
- (void)loadCannedVideoReplay;
- (void)onCaptureScreenFrame:(struct opaqueCMSampleBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 orientation:(int)a2;
- (void)onCaptureVideoFrame:(struct opaqueCMSampleBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 switching:(BOOL)a2 camera:(int)a3 videoMirrored:(BOOL)a4;
- (BOOL)onVideoFrame:(struct opaqueCMSampleBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 attribute:(struct { BOOL x0; BOOL x1; int x2; BOOL x3; BOOL x4; int x5; unsigned char x6; })a2;
- (unsigned int)removeSink:(id)a0;
- (void)setCFAvailabilityChange:(BOOL)a0;
- (void)setCameraZoomAvailable:(BOOL)a0 currentZoomFactor:(double)a1 maxZoomFactor:(double)a2;
- (void)setCaptureFrameRate:(int)a0;
- (BOOL)setupDataFormatWithConfiguration:(id)a0;
- (BOOL)setupFormatWithConfiguration:(id)a0;
- (BOOL)setupVideoFormatWithConfiguration:(id)a0;
- (void)sourceFrameRateDidChange:(unsigned int)a0;

@end
