@class NSString, VCVideoRule;

@interface VCVideoTransmitterBase : NSObject <VCConnectionChangedHandler> {
    void *_controlInfoGenerator;
    unsigned int _captureWidth;
    unsigned int _captureHeight;
    unsigned int _txMaxBitrate;
    unsigned int _txMinBitrate;
    unsigned int _temporaryMaximumBitrate;
    VCVideoRule *_videoRule;
    NSString *_profileLevel;
    struct tagVCVideoTransmitterRealtimeSPI { void /* function */ *setFECRatio; void /* function */ *enqueueVideoFrame; } _realtimeSPI;
}

@property struct { long long value; int timescale; unsigned int flags; long long epoch; } lastFrameTime;
@property double lastKeyFrameSentTime;
@property unsigned int lastRTPTimestamp;
@property unsigned int lastSentAudioSampleTime;
@property double lastSentAudioHostTime;
@property (nonatomic) BOOL isServerBasedBandwidthProbingEnabled;
@property (nonatomic) BOOL isEndToEndBasedBandwidthProbingEnabled;
@property (nonatomic) unsigned int targetBitrate;
@property (nonatomic) unsigned int targetBitrateChangeCounter;
@property (readonly) unsigned int encodingWidth;
@property (readonly) unsigned int encodingHeight;
@property (readonly) unsigned int targetFramerate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithConfig:(id)a0;
- (void)collectChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)a0 interval:(float)a1;
- (void)generateKeyFrameWithFIRType:(int)a0;
- (void)handleActiveConnectionChange:(id)a0;
- (void)handleThermalLevelChange:(int)a0;
- (BOOL)setEncodingMode:(int)a0;
- (void)setFECRatio:(double)a0;
- (void)setFECRedundancyVector:(const struct { unsigned short x0; struct { unsigned char x0; unsigned char x1; } x1[32]; } *)a0;
- (void)setHighestActiveQualityIndex:(unsigned int)a0;
- (void)setKeyFrameOnlyStreamID:(unsigned short)a0;
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; } *)a0;
- (void)setStreamIDs:(unsigned short *)a0 numOfStreamIDs:(unsigned char)a1 repairedStreamIDs:(unsigned short *)a2 numOfRepairedStreamIDs:(unsigned char)a3;
- (void)setTemporalBitrateArray:(id)a0;
- (unsigned int)setTemporaryMaximumBitrate:(unsigned int)a0;
- (void)startVideo;
- (void)stopVideo;
- (void)updateWindowState:(int)a0 isLocal:(BOOL)a1 windowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
