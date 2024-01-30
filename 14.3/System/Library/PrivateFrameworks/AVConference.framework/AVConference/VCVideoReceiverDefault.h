@class VideoAttributes, VCDisplayLink, VCVideoStreamRateAdaptationFeedbackOnly;

@interface VCVideoReceiverDefault : VCVideoReceiverBase {
    struct tagVCVideoReceiverConfig { unsigned int streamCount; struct tagVCVideoReceiverStreamConfig { struct tagHANDLE *rtpHandle; struct __CFDictionary *featureListStrings; unsigned short streamID; unsigned short repairStreamID; BOOL onDemandIDR; unsigned int subStreamCount; unsigned short subStreamIDs[9]; unsigned short subStreamRepairIDs[9]; unsigned short framerate; unsigned char tileIndex; BOOL isOneToOne; } streamConfigs[9]; int mode; int jitterBufferMode; long long streamToken; int audioTSRate; int videoTSRate; int enableVPBLogging; unsigned int dumpID; int enableControlByte; int enableBitstreamCapture; int enable2vuyCapture; int enableUEP; int enableRecvBitstreamDump; int reportingParentID; BOOL shouldEnableFaceZoom; BOOL useDisplayLink; void *callbackContext; void /* function */ *remoteFrameCallback; void /* function */ *streamSwitchCallback; void /* function */ *keyFrameGenerationCallback; unsigned long long idsParticipantID; BOOL triggerSoundAlarmOnRTPReceive; unsigned short decoderNumOfTiles; BOOL useInternalRTPThreading; struct tagWRMMetricsInfo *wrmInfo; unsigned int maxDisplayRefreshRate; BOOL enableJitterBufferInReceiver; BOOL enableJitterBufferInPlayer; BOOL enableImmediateDecode; BOOL isLTRPEnabled; BOOL isRTCPForLTRPAckEnabled; BOOL isAsyncDecodingEnabled; BOOL isReceiverSideVCRCFeedbackEnabled; BOOL isVCRCStatsCollectionEnabled; BOOL fecHeaderV1Enabled; BOOL enableQueueAlarmForDisplay; BOOL useRTCPForFIR; BOOL enableJBDynamicModeSwitch; unsigned char mediaControlInfoVersion; void *mediaControlInfoGenerator; } _videoReceiverConfig;
    struct tagHANDLE { int x0; } *_videoReceiverHandle;
    struct tagHANDLE { int x0; } *_videoTransmitterHandle;
    long long _streamToken;
    void *_controlInfoGenerator;
    unsigned int remoteFrameWidth;
    unsigned int remoteFrameHeight;
    BOOL receivedFirstRemoteFrame;
    double _lastKeyFrameRequestTime;
    unsigned short _lastKeyFrameRequestStreamID;
    VCVideoStreamRateAdaptationFeedbackOnly *_rateAdaptation;
    VCDisplayLink *_displayLink;
    double _lastDecodedFrameTime;
}

@property (retain) VideoAttributes *remoteVideoAttributes;
@property (nonatomic) BOOL shouldEnableFaceZoom;

- (void)dealloc;
- (void)pauseVideo;
- (void)displayLinkTick:(id)a0;
- (void)setRoundTripTime:(double)a0;
- (double)roundTripTime;
- (void)startVideo;
- (void)stopVideo;
- (void)handleActiveConnectionChange:(id)a0;
- (void)setTargetStreamID:(unsigned short)a0;
- (void)setEnableRateAdaptation:(BOOL)a0 maxBitrate:(unsigned int)a1 minBitrate:(unsigned int)a2 adaptationInterval:(double)a3;
- (void)setEnableCVO:(BOOL)a0 cvoExtensionID:(unsigned long long)a1;
- (void)updateSourcePlayoutTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0;
- (void)rtcpSendIntervalElapsed;
- (unsigned int)lastDisplayedFrameRTPTimestamp;
- (void)collectChannelMetrics:(struct { unsigned int x0; unsigned int x1; double x2; double x3; } *)a0 interval:(float)a1;
- (double)lastReceivedVideoRTPPacketTime;
- (double)lastReceivedVideoRTCPPacketTime;
- (void)cleanUpDisplayLink;
- (BOOL)initializeDisplayLink;
- (id)initWithConfig:(struct tagVCVideoReceiverConfig { unsigned int x0; struct tagVCVideoReceiverStreamConfig { struct tagHANDLE *x0; struct __CFDictionary *x1; unsigned short x2; unsigned short x3; BOOL x4; unsigned int x5; unsigned short x6[9]; unsigned short x7[9]; unsigned short x8; unsigned char x9; BOOL x10; } x1[9]; int x2; int x3; long long x4; int x5; int x6; int x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; int x14; BOOL x15; BOOL x16; void *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; unsigned long long x21; BOOL x22; unsigned short x23; BOOL x24; struct tagWRMMetricsInfo *x25; unsigned int x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; unsigned char x39; void *x40; } *)a0 delegate:(id)a1 reportingAgent:(struct opaqueRTCReporting { } *)a2 statisticsCollector:(id)a3 transmitterHandle:(struct tagHANDLE { int x0; } *)a4;
- (void)handleRemoteFrame:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 cameraStatusBits:(unsigned char)a2;
- (void)handleRequestingKeyFrameGenerationWithStreamID:(unsigned short)a0;
- (void)handleKeyFrameRequestWithSizeAndFistMBs:(unsigned short *)a0 count:(int)a1 didReceiveRTCPFB:(BOOL)a2 didReceiveFIR:(BOOL)a3;
- (void)didSwitchFromStreamID:(unsigned short)a0 toStreamID:(unsigned short)a1;

@end
