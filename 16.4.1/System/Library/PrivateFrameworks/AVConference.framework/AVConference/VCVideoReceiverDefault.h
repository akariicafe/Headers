@class VideoAttributes, VCDisplayLink, VCVideoStreamRateAdaptationFeedbackOnly;

@interface VCVideoReceiverDefault : VCVideoReceiverBase {
    struct tagHANDLE { int x0; } *_videoReceiverHandle;
    struct tagHANDLE { int x0; } *_videoTransmitterHandle;
    long long _streamToken;
    void *_controlInfoGenerator;
    BOOL receivedFirstRemoteFrame;
    double _lastKeyFrameRequestTime;
    unsigned short _lastKeyFrameRequestStreamID;
    VCVideoStreamRateAdaptationFeedbackOnly *_rateAdaptation;
    VCDisplayLink *_displayLink;
    BOOL _notifyDelegateVideoAttributeChanges;
    BOOL _lastLocalPortrait;
    BOOL _lastRemotePortrait;
    struct CGSize { double width; double height; } _remoteScreenPortraitAspectRatio;
    struct CGSize { double width; double height; } _remoteScreenLandscapeAspectRatio;
    struct CGSize { double width; double height; } _remoteExpectedPortraitAspectRatio;
    struct CGSize { double width; double height; } _remoteExpectedLandscapeAspectRatio;
    BOOL _remoteSupportsExpectedAspectRatio;
    BOOL _canLocalResizePIP;
    BOOL _canRemoteResizePIP;
    unsigned long long _cvoExtensionID;
    BOOL _forceZeroRegionOfInterestOrigin;
    BOOL _pendingVideoAttributesUpdateOnModeChange;
}

@property struct tagVCVideoReceiverConfig { unsigned int streamCount; struct tagVCVideoReceiverStreamConfig { struct tagVCVideoReceiverStreamIDInfo { unsigned short streamID; unsigned short repairStreamID; unsigned short baseStreamID; unsigned int subStreamCount; unsigned short subStreamIDs[9]; unsigned short subStreamRepairIDs[9]; } streamInfo; struct tagHANDLE *rtpHandle; struct __CFDictionary *featureListStrings; BOOL onDemandIDR; unsigned short framerate; unsigned char tileIndex; BOOL isOneToOne; BOOL isTemporalScalingEnabled; struct tagVCCryptor *sframeCryptor; void *mediaControlInfoGenerator; void *statisticsCollector; int mode; BOOL isLTRPEnabled; BOOL isRTCPForLossFeedbackEnabled; BOOL isRTCPForLTRPAckEnabled; int ltrAckRTCPPacketType; } streamConfigs[9]; int mode; int jitterBufferMode; long long streamToken; int audioTSRate; int videoTSRate; int enableVPBLogging; unsigned int dumpID; int enableControlByte; int enableBitstreamCapture; int enableRxDecodeYUVDump; int enableUEP; int enableRecvBitstreamDump; int reportingParentID; BOOL shouldEnableFaceZoom; BOOL shouldEnableMLEnhance; BOOL useDisplayLink; BOOL enableDeferredAssembly; double deferredAssemblyOffset; void *callbackContext; void /* function */ *remoteFrameCallback; void /* function */ *sampleBufferCallback; void /* function */ *streamSwitchCallback; void /* function */ *keyFrameGenerationCallback; void /* function */ *sendLTRAckCallback; void /* function */ *ackLTRFrameCallback; void /* function */ *modeSwitchCallback; unsigned long long idsParticipantID; BOOL triggerSoundAlarmOnRTPReceive; unsigned short decoderNumOfTiles; BOOL useInternalRTPThreading; struct tagWRMMetricsInfo *wrmInfo; unsigned int maxDisplayRefreshRate; BOOL enableJitterBufferInReceiver; BOOL enableJitterBufferInPlayer; BOOL enableImmediateDecode; BOOL isLTRPEnabled; BOOL isAsyncDecodingEnabled; BOOL isReceiverSideVCRCFeedbackEnabled; BOOL isVCRCStatsOnlyVideoBased; BOOL fecHeaderV1Enabled; BOOL enableQueueAlarmForDisplay; BOOL useRTCPForFIR; BOOL sendRTCP_PSFB_FIR; BOOL enableJBDynamicModeSwitch; BOOL useInternalClockForPresentation; void *mediaControlInfoGenerator; BOOL isVariableSliceModeEnabled; BOOL streamSwitchEnabled; unsigned int cvoExtensionID; BOOL videoJBEnabled; BOOL enableAVLooseSync; unsigned short targetDisplayAlarmCount; struct tagVCJBTargetEstimatorSynchronizer *jbTargetEstimatorSynchronizer; struct __CFString *participantId; struct __CFString *sessionId; unsigned int streamGroupID; BOOL isReferenceFrameEnabled; BOOL isLateFrameRecoveryEnabled; BOOL enableHighWatermarkQueueDiscard; int externalPresentationClockType; BOOL isServerPacketRetransmissionEnabled; BOOL isRTTBasedFIRThrottlingEnabled; struct tagVCNACKGeneratorStoreBagsConfig { unsigned char nackGeneratorStorebagConfigVersion; float nackSeqNumAgingDuration; float nackThrottlingBitRateLimitingMaxRatio; BOOL isExtraDelayForPacketRetransmissionsEnabled; float nackThrottlingFactorBuckets[4]; float nackThrottlingPlrBuckets[4]; } nackGeneratorStoreBagsConfig; BOOL forceZeroRegionOfInterestOrigin; } videoReceiverConfig;
@property (retain) VideoAttributes *remoteVideoAttributes;
@property (nonatomic) int mode;
@property (nonatomic) BOOL shouldUpdateRemoteScreenAttributes;
@property (nonatomic) BOOL shouldEnableFaceZoom;
@property (nonatomic) BOOL shouldEnableMLEnhance;

- (void)dealloc;
- (void)setFeedbackDelegate:(id)a0;
- (double)roundTripTime;
- (void)setSynchronizer:(id)a0;
- (void)pauseVideo;
- (void)collectChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)a0 interval:(float)a1;
- (double)lastReceivedVideoRTCPPacketTime;
- (void)cleanUpDisplayLink;
- (void)didSwitchFromStreamID:(unsigned short)a0 toStreamID:(unsigned short)a1;
- (void)handleActiveConnectionChange:(id)a0;
- (void)handleKeyFrameRequestWithSizeAndFistMBs:(unsigned short *)a0 count:(int)a1 didReceiveRTCPFB:(BOOL)a2 didReceiveFIR:(BOOL)a3;
- (void)handleRemoteFrame:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 cameraStatusBits:(unsigned char)a2;
- (void)handleRequestingKeyFrameGenerationWithStreamID:(unsigned short)a0 firType:(int)a1;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithConfig:(struct tagVCVideoReceiverConfig { unsigned int x0; struct tagVCVideoReceiverStreamConfig { struct tagVCVideoReceiverStreamIDInfo { unsigned short x0; unsigned short x1; unsigned short x2; unsigned int x3; unsigned short x4[9]; unsigned short x5[9]; } x0; struct tagHANDLE *x1; struct __CFDictionary *x2; BOOL x3; unsigned short x4; unsigned char x5; BOOL x6; BOOL x7; struct tagVCCryptor *x8; void *x9; void *x10; int x11; BOOL x12; BOOL x13; BOOL x14; int x15; } x1[9]; int x2; int x3; long long x4; int x5; int x6; int x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; int x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; double x19; void *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; void /* function */ *x27; unsigned long long x28; BOOL x29; unsigned short x30; BOOL x31; struct tagWRMMetricsInfo *x32; unsigned int x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; void *x47; BOOL x48; BOOL x49; unsigned int x50; BOOL x51; BOOL x52; unsigned short x53; struct tagVCJBTargetEstimatorSynchronizer *x54; struct __CFString *x55; struct __CFString *x56; unsigned int x57; BOOL x58; BOOL x59; BOOL x60; int x61; BOOL x62; BOOL x63; struct tagVCNACKGeneratorStoreBagsConfig { unsigned char x0; float x1; float x2; BOOL x3; float x4[4]; float x5[4]; } x64; BOOL x65; } *)a0 delegate:(id)a1 reportingAgent:(struct opaqueRTCReporting { } *)a2 statisticsCollector:(id)a3 transmitterHandle:(struct tagHANDLE { int x0; } *)a4;
- (BOOL)initializeDisplayLink;
- (unsigned int)lastDisplayedFrameRTPTimestamp;
- (float)lastLastVideoStallDuration;
- (double)lastReceivedVideoRTPPacketTime;
- (int)oneToOneStreamIndex;
- (void)rtcpSendIntervalElapsed;
- (void)setEnableCVO:(BOOL)a0 cvoExtensionID:(unsigned long long)a1;
- (void)setEnableRateAdaptation:(BOOL)a0 maxBitrate:(unsigned int)a1 minBitrate:(unsigned int)a2 adaptationInterval:(double)a3;
- (void)setTargetStreamID:(unsigned short)a0;
- (void)setUpRemoteAspectRatios;
- (void)setUpRemoteAspectRatiosForPayload:(int)a0;
- (void)setUpRemoteAspectRatiosFromFreatureListString:(const char *)a0;
- (void)startVideo;
- (void)stopVideo;
- (void)updateSourcePlayoutTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0;

@end
