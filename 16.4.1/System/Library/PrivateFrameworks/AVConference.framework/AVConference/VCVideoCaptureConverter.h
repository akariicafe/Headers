@class NSString;

@interface VCVideoCaptureConverter : NSObject <VCVideoSink, VCVideoCaptureClient> {
    double _throttleRate;
    unsigned int _sourceFrameCount;
    unsigned int _lastDestinationFrameCount;
    BOOL _isThrottling;
    id _convertedFrameHandlerContext;
    void /* function */ *_convertedFrameHandler;
}

@property (nonatomic) unsigned int sourceFramerate;
@property (nonatomic) unsigned int destinationFramerate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)processFrame:(struct opaqueCMSampleBuffer { } *)a0;
- (void)avConferencePreviewError:(id)a0;
- (void)cameraAvailabilityDidChange:(BOOL)a0;
- (id)clientCaptureRule;
- (id)initWithConvertedFrameHandler:(void /* function */ *)a0 context:(id)a1;
- (BOOL)onVideoFrame:(struct opaqueCMSampleBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 attribute:(struct { BOOL x0; BOOL x1; int x2; BOOL x3; BOOL x4; int x5; unsigned char x6; })a2;
- (void)sourceFrameRateDidChange:(unsigned int)a0;
- (void)thermalLevelDidChange:(int)a0;
- (void)updateThrottleRate;

@end
