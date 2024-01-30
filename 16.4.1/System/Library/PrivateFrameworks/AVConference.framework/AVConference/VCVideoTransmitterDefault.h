@class NSString;

@interface VCVideoTransmitterDefault : VCVideoTransmitterBase <VCVideoReceiverFeedbackDelegate> {
    unsigned int _audioTimestampRate;
    BOOL _transmitterMode;
    BOOL _isRTTBasedFIRThrottlingEnabled;
    BOOL _canLocalResizePIP;
    BOOL _canRemoteResizePIP;
    struct CGSize { double width; double height; } _remoteScreenPortraitAspectRatio;
    struct CGSize { double width; double height; } _remoteScreenLandscapeAspectRatio;
    struct CGSize { double width; double height; } _remoteExpectedPortraitAspectRatio;
    struct CGSize { double width; double height; } _remoteExpectedLandscapeAspectRatio;
    double _lastSentVideoHostTime;
}

@property (readonly) struct tagHANDLE { int x0; } *videoTransmitterHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupBandwidthEstimationOptions:(struct tagBWEOPTION { int x0; int x1; int x2; int x3; } *)a0 featureString:(id)a1;

- (void)dealloc;
- (id)initWithConfig:(id)a0;
- (void)collectChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)a0 interval:(float)a1;
- (void)generateKeyFrameWithFIRType:(int)a0;
- (void)handleActiveConnectionChange:(id)a0;
- (void)handleThermalLevelChange:(int)a0;
- (double)minKeyFrameGenerationIntervalForMode:(int)a0;
- (BOOL)setEncodingMode:(int)a0;
- (void)setFECRatio:(double)a0;
- (void)setFECRedundancyVector:(const struct { unsigned short x0; struct { unsigned char x0; unsigned char x1; } x1[32]; } *)a0;
- (void)setHighestActiveQualityIndex:(unsigned int)a0;
- (void)setIsEndToEndBasedBandwidthProbingEnabled:(BOOL)a0;
- (void)setIsServerBasedBandwidthProbingEnabled:(BOOL)a0;
- (void)setKeyFrameOnlyStreamID:(unsigned short)a0;
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; } *)a0;
- (void)setStreamIDs:(unsigned short *)a0 numOfStreamIDs:(unsigned char)a1 repairedStreamIDs:(unsigned short *)a2 numOfRepairedStreamIDs:(unsigned char)a3;
- (void)setTargetBitrate:(unsigned int)a0;
- (void)setTemporalBitrateArray:(id)a0;
- (unsigned int)setTemporaryMaximumBitrate:(unsigned int)a0;
- (void)setUpAspectRatios:(BOOL)a0;
- (void)setUpAspectRatiosFromFeatureListString:(const char *)a0;
- (void)startVideo;
- (void)stopVideo;
- (void)updateWindowState:(int)a0 isLocal:(BOOL)a1 windowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
