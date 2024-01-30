@class NSString, VCVideoRule;

@interface VCVideoTransmitterBase : NSObject <VCConnectionChangedHandler> {
    void *_controlInfoGenerator;
    unsigned int _captureWidth;
    unsigned int _captureHeight;
    unsigned int _encodingWidth;
    unsigned int _encodingHeight;
    unsigned int _targetFramerate;
    unsigned int _txMaxBitrate;
    unsigned int _txMinBitrate;
    unsigned int _temporaryMaximumBitrate;
    VCVideoRule *_videoRule;
}

@property struct { long long value; int timescale; unsigned int flags; long long epoch; } lastFrameTime;
@property double lastKeyFrameSentTime;
@property unsigned int lastRTPTimestamp;
@property unsigned int lastSentAudioSampleTime;
@property double lastSentAudioHostTime;
@property (nonatomic) BOOL isServerBasedBandwidthProbingEnabled;
@property (nonatomic) unsigned int targetBitrate;
@property (nonatomic) unsigned int targetBitrateChangeCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (void)dealloc;
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

@end
