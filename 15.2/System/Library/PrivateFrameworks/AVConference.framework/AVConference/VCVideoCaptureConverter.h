@class NSString;

@interface VCVideoCaptureConverter : NSObject <VCVideoSink, VCVideoCaptureClient> {
    double _throttleRate;
    unsigned int _sourceFrameCount;
    unsigned int _lastDestinationFrameCount;
    BOOL _isThrottling;
    id _delegate;
}

@property (nonatomic) unsigned int sourceFramerate;
@property (nonatomic) unsigned int destinationFramerate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)sourceFrameRateDidChange:(unsigned int)a0;
- (id)delegate;
- (BOOL)onVideoFrame:(struct opaqueCMSampleBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 attribute:(struct { BOOL x0; BOOL x1; int x2; BOOL x3; BOOL x4; int x5; unsigned char x6; })a2;
- (void)dealloc;
- (void)thermalLevelDidChange:(int)a0;
- (id)clientCaptureRule;
- (void)avConferencePreviewError:(id)a0;
- (void)cameraAvailabilityDidChange:(BOOL)a0;
- (void)updateThrottleRate;
- (BOOL)processFrame:(struct opaqueCMSampleBuffer { } *)a0;

@end
