@class NSString, VCVideoTransmitterBase, NSArray, VCImageQueue, AVCRateController, VCVideoRule, AVCStatisticsCollector, NSObject, VCVideoCaptureConverter, VCRedundancyControllerVideo, NSNumber, VCVideoReceiverBase;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface VCVideoStream : VCMediaStream <VCVideoReceiverDelegate, VCMediaStreamSyncDestination, VCVideoSink, VCVideoCaptureClient, VCVideoCaptureConverterDelegate, AVCRateControllerDelegate, VCRedundancyControllerDelegate> {
    long long _type;
    NSObject<OS_dispatch_queue> *_lastDecodedFrameQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _remoteLayerLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _localLayerLock;
    unsigned int _uplinkOperatingBitrate;
    struct __CVBuffer { } *_cachedRemoteVideoFrame;
    VCImageQueue *_remoteQueue;
    VCVideoTransmitterBase *_videoTransmitter;
    VCVideoReceiverBase *_videoReceiver;
    VCVideoRule *_videoRule;
    int _reportingModuleID;
    unsigned int _reportingDefaultRealtimePeriod;
    NSObject<OS_dispatch_semaphore> *_bufferQueueSemaphore;
    struct opaqueCMBufferQueue { } *_bufferQueue;
    VCVideoCaptureConverter *_captureConverter;
    unsigned char _lastMediaPriority;
    _Atomic BOOL _isVideoCaptureRegistered;
    int _captureSource;
    unsigned int _tilesPerFrame;
    unsigned int _initialTargetBitrate;
    struct OpaqueFigCFWeakReference { } *_weakStream;
    AVCRateController *_vcrcRateController;
    AVCStatisticsCollector *_statisticsCollector;
    VCRedundancyControllerVideo *_redundancyController;
    int _lastDisplayedFromImageQueueCount;
    int _lastDroppedFromImageQueueCount;
    int _networkInterfaceType;
    int _channelSequenceCountWithInactiveSlots;
}

@property (readonly) unsigned int networkMTU;
@property unsigned int lastSentAudioSampleTime;
@property double lastSentAudioHostTime;
@property (readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
@property (nonatomic) BOOL isServerBasedBandwidthProbingEnabled;
@property (retain, nonatomic) NSNumber *targetStreamID;
@property (readonly, nonatomic) NSNumber *sendingStreamID;
@property (readonly, nonatomic) NSArray *compoundStreamIDs;
@property (readonly, nonatomic) BOOL isCompoundStreamIDsIncreased;
@property (nonatomic) BOOL shouldEnableFaceZoom;
@property (nonatomic) BOOL didReceiveFirstFrame;
@property (nonatomic) double fecRatio;
@property (nonatomic) unsigned int screenDisplayID;
@property (nonatomic) unsigned int customWidth;
@property (nonatomic) unsigned int customHeight;
@property (nonatomic) unsigned int targetMediaBitrate;
@property (nonatomic) unsigned int targetBitrateChangeCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)capabilities;
+ (id)newFeatureListStringsWithConfiguration:(id)a0;
+ (id)supportedVideoPayloads;

- (id)init;
- (void)dealloc;
- (BOOL)onVideoFrame:(struct opaqueCMSampleBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 attribute:(struct { BOOL x0; BOOL x1; int x2; BOOL x3; BOOL x4; int x5; unsigned char x6; })a2;
- (void)sourceFrameRateDidChange:(unsigned int)a0;
- (void)rateController:(void *)a0 targetBitrateDidChange:(unsigned int)a1 rateChangeCounter:(unsigned int)a2;
- (id)supportedPayloads;
- (void)initializeInterfaceType;
- (double)lastReceivedRTPPacketTime;
- (double)lastReceivedRTCPPacketTime;
- (void)onCallIDChanged;
- (BOOL)onConfigureStreamWithConfiguration:(id)a0 error:(id *)a1;
- (void)onStartWithCompletionHandler:(id /* block */)a0;
- (void)onStopWithCompletionHandler:(id /* block */)a0;
- (void)onPauseWithCompletionHandler:(id /* block */)a0;
- (void)onResumeWithCompletionHandler:(id /* block */)a0;
- (void)onSendRTCPPacket;
- (void)onRTPTimeout;
- (void)onRTCPTimeout;
- (double)rtcpHeartbeatLeeway;
- (void)redundancyController:(id)a0 redundancyPercentageDidChange:(unsigned int)a1;
- (void)generateKeyFrame;
- (void)gatherRealtimeStats:(struct __CFDictionary { } *)a0;
- (void)reportingVideoStreamEvent:(unsigned short)a0;
- (void)setFECRedundancyVector:(const struct { unsigned short x0; struct { unsigned char x0; unsigned char x1; } x1[16]; } *)a0;
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; } *)a0;
- (BOOL)setEncodingMode:(int)a0;
- (void)handleActiveConnectionChange:(id)a0;
- (void)cleanupBeforeReconfigure:(id)a0;
- (int)getReportingClientType;
- (struct __CFString { } *)getReportingClientName;
- (void)collectRxChannelMetrics:(struct { unsigned int x0; unsigned int x1; double x2; double x3; } *)a0;
- (void)setStreamIDs:(id)a0 repairStreamIDs:(id)a1;
- (void)collectRxChannelMetrics:(struct { unsigned int x0; unsigned int x1; double x2; double x3; } *)a0 interval:(float)a1;
- (void)collectTxChannelMetrics:(struct { unsigned int x0; unsigned int x1; double x2; double x3; } *)a0;
- (BOOL)startSynchronization:(id)a0;
- (void)stopSynchronization;
- (void)updateVideoConfig:(id)a0;
- (void)requestLastDecodedFrame;
- (void)vcVideoReceiver:(id)a0 downlinkQualityDidChange:(id)a1;
- (unsigned int)vcVideoReceiver:(id)a0 receivedTMMBR:(unsigned int)a1;
- (void)vcVideoReceiverRequestKeyFrame:(id)a0 rtcpPSFBType:(unsigned int)a1;
- (BOOL)vcVideoReceiver:(id)a0 didReceiveRemoteFrame:(struct __CVBuffer { } *)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 newVideoAttributes:(id)a3 isFirstFrame:(BOOL)a4;
- (void)updateSourcePlayoutTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0;
- (id)initWithTransportSessionID:(unsigned int)a0 ssrc:(unsigned int)a1 streamToken:(long long)a2;
- (void)redundancyController:(id)a0 redundancyIntervalDidChange:(double)a1;
- (void)vcVideoReceiver:(id)a0 requestKeyFrameGenerationWithStreamID:(unsigned short)a1;
- (void)vcVideoReceiver:(id)a0 didSwitchFromStreamID:(unsigned short)a1 toStreamID:(unsigned short)a2;
- (void)thermalLevelDidChange:(int)a0;
- (id)clientCaptureRule;
- (void)avConferencePreviewError:(id)a0;
- (void)avConferenceScreenCaptureError:(id)a0;
- (void)cameraAvailabilityDidChange:(BOOL)a0;
- (struct __CFDictionary { } *)getClientSpecificUserInfo;
- (void)deregisterForVideoCapture;
- (void)converter:(id)a0 didConvertFrame:(struct opaqueCMSampleBuffer { } *)a1 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 cameraStatusBits:(unsigned char)a3;
- (id)getTransmitStatsCollectorWithStreamConfig:(id)a0;
- (id)getTransmitMediaControllerWithStreamConfig:(id)a0;
- (BOOL)isTransportIPv6;
- (id)newVideoTransmitterConfigWithVideoStreamConfig:(id)a0;
- (void)setupFeatureListStringsForReceiverConfig:(struct tagVCVideoReceiverConfig { unsigned int x0; struct tagVCVideoReceiverStreamConfig { struct tagHANDLE *x0; struct __CFDictionary *x1; unsigned short x2; unsigned short x3; BOOL x4; unsigned int x5; unsigned short x6[9]; unsigned short x7[9]; unsigned short x8; unsigned char x9; BOOL x10; } x1[9]; int x2; int x3; long long x4; int x5; int x6; int x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; int x14; BOOL x15; BOOL x16; void *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; unsigned long long x21; BOOL x22; unsigned short x23; BOOL x24; struct tagWRMMetricsInfo *x25; unsigned int x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; unsigned char x39; void *x40; } *)a0 streamConfig:(id)a1;
- (void)setupMultiwayVideoReceiverConfig:(struct tagVCVideoReceiverConfig { unsigned int x0; struct tagVCVideoReceiverStreamConfig { struct tagHANDLE *x0; struct __CFDictionary *x1; unsigned short x2; unsigned short x3; BOOL x4; unsigned int x5; unsigned short x6[9]; unsigned short x7[9]; unsigned short x8; unsigned char x9; BOOL x10; } x1[9]; int x2; int x3; long long x4; int x5; int x6; int x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; int x14; BOOL x15; BOOL x16; void *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; unsigned long long x21; BOOL x22; unsigned short x23; BOOL x24; struct tagWRMMetricsInfo *x25; unsigned int x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; unsigned char x39; void *x40; } *)a0 forTransportStream:(id)a1;
- (BOOL)useUEPForVideoConfig:(int)a0;
- (struct tagVCVideoReceiverConfig { unsigned int x0; struct tagVCVideoReceiverStreamConfig { struct tagHANDLE *x0; struct __CFDictionary *x1; unsigned short x2; unsigned short x3; BOOL x4; unsigned int x5; unsigned short x6[9]; unsigned short x7[9]; unsigned short x8; unsigned char x9; BOOL x10; } x1[9]; int x2; int x3; long long x4; int x5; int x6; int x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; int x14; BOOL x15; BOOL x16; void *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; unsigned long long x21; BOOL x22; unsigned short x23; BOOL x24; struct tagWRMMetricsInfo *x25; unsigned int x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; unsigned char x39; void *x40; })videoReceiverConfigWithVideoStreamConfig:(id)a0;
- (void)cleaunpReceiverConfig:(struct tagVCVideoReceiverConfig { unsigned int x0; struct tagVCVideoReceiverStreamConfig { struct tagHANDLE *x0; struct __CFDictionary *x1; unsigned short x2; unsigned short x3; BOOL x4; unsigned int x5; unsigned short x6[9]; unsigned short x7[9]; unsigned short x8; unsigned char x9; BOOL x10; } x1[9]; int x2; int x3; long long x4; int x5; int x6; int x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; int x14; BOOL x15; BOOL x16; void *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; unsigned long long x21; BOOL x22; unsigned short x23; BOOL x24; struct tagWRMMetricsInfo *x25; unsigned int x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; unsigned char x39; void *x40; } *)a0;
- (void)destroyVideoTransmitter;
- (void)destroyVideoReceiver;
- (void)setupVideoStream;
- (BOOL)registerForVideoCapture;
- (void)initVideoTransmitter;
- (void)updateVideoReceiver:(id)a0;
- (void)sendLastRemoteVideoFrame:(struct __CVBuffer { } *)a0;
- (BOOL)validateVideoStreamConfigurations:(id)a0;
- (int)operatingModeForVideoStreamType:(long long)a0;
- (BOOL)validateStreamConfiguration:(id)a0 error:(id *)a1;
- (id)getReceiveStatsCollectorWithStreamConfig:(id)a0;
- (void)overrideConfigWithDefaults;
- (void)collectImageQueuePerformanceMetrics:(struct __CFDictionary { } *)a0;
- (void)collectChannelSequenceMetrics:(id)a0;
- (void)initializeInterfaceTypeForNWConnection;
- (void)initializeInterfaceTypeForSocket;
- (void)cacheRemoteVideoFrame:(struct __CVBuffer { } *)a0;
- (void)destroyVideoModules;
- (void)setupReportingAgent;
- (void)startVCRCWithStreamConfig:(id)a0;
- (void)reportTransportInfo;
- (void)setupVideoReceiver:(id)a0 withTransmitterHandle:(struct tagHANDLE { int x0; } *)a1;
- (void)stopVCRC;
- (void)setupCompoundStreamIDsWithStreamIDs:(id)a0;
- (void)handleNWConnectionPacketEvent:(struct packet_id { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 eventType:(int)a1;
- (void)collectVideoConfigMetrics:(struct __CFDictionary { } *)a0;
- (void)reportingVideoStreamEvent:(unsigned short)a0 newVideoAttributes:(id)a1;
- (void)reportingVideoStreamEvent:(unsigned short)a0 newVideoAttributes:(id)a1 currentStreamID:(id)a2;
- (void)collectVideoStreamStartMetrics:(struct __CFDictionary { } *)a0;
- (void)handleNWConnectionNotification:(struct ifnet_interface_advisory { unsigned char x0; unsigned char x1; unsigned short x2; int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; } *)a0;
- (BOOL)setRTPPayloads:(int *)a0 numPayloads:(int)a1 withError:(id *)a2;
- (void)handleVTPSendFailedWithData:(void *)a0;

@end
