@interface VCVideoTransmitterDefault : VCVideoTransmitterBase

@property (readonly) struct tagHANDLE { int x0; } *videoTransmitterHandle;

+ (void)setupBandwidthEstimationOptions:(struct tagBWEOPTION { int x0; int x1; int x2; int x3; } *)a0 featureString:(id)a1;
+ (double)minKeyFrameGenerationIntervalForMode:(int)a0;

- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)setTargetBitrate:(unsigned int)a0;
- (void)generateKeyFrame;
- (unsigned int)setTemporaryMaximumBitrate:(unsigned int)a0;
- (void)startVideo;
- (void)stopVideo;
- (BOOL)enqueueVideoFrame:(struct opaqueCMSampleBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 cameraStatusBits:(unsigned char)a2;
- (void)setKeyFrameOnlyStreamID:(unsigned short)a0;
- (void)setStreamIDs:(unsigned short *)a0 numOfStreamIDs:(unsigned char)a1 repairedStreamIDs:(unsigned short *)a2 numOfRepairedStreamIDs:(unsigned char)a3;
- (void)setFECRatio:(double)a0;
- (void)setFECRedundancyVector:(const struct { unsigned short x0; struct { unsigned char x0; unsigned char x1; } x1[16]; } *)a0;
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; } *)a0;
- (BOOL)setEncodingMode:(int)a0;
- (void)handleActiveConnectionChange:(id)a0;
- (void)collectChannelMetrics:(struct { unsigned int x0; unsigned int x1; double x2; double x3; } *)a0 interval:(float)a1;
- (unsigned int)parameterSetForPayload:(int)a0 pixelFormat:(unsigned int)a1;
- (void)computeTimestamp:(unsigned int *)a0 hostTime:(double *)a1 forFrame:(struct opaqueCMSampleBuffer { } *)a2;
- (void)setIsServerBasedBandwidthProbingEnabled:(BOOL)a0;

@end
