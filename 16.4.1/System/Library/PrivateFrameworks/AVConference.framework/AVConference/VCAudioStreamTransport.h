@class WRMClient;

@interface VCAudioStreamTransport : VCMediaStreamTransport <WRMClientDelegate> {
    WRMClient *_wrmClient;
    struct _VCAudioStreamTransportRealtimeContext { struct tagWRMMetricsInfo { BOOL bInitialized; struct tagHANDLE *hRTPHandle; unsigned int dwReportInterval; unsigned int dwWrmTime; unsigned int dwPlaybackCount; unsigned int dwPlaybackCountSpeech; unsigned int dwErasureCount; unsigned int dwErasureSilence; unsigned int videoFrameErasureCount; unsigned int dwTimeOfLastRRPacket; unsigned int dwEstimatedRTTMilliSeconds; unsigned int dwJitter; unsigned int dwTotalPacketRecv; unsigned int dwDTXPacketRecv; unsigned long long callId; unsigned long long nominalJitterBufferDelay; unsigned long long targetJitterQueueSize; int nFraction; void /* function */ *reportWRMMetricsCallback; struct { void *info; void /* function */ *retain; void /* function */ *release; } wrmMetricsReportingContext; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } wrmMetricsReportingLock; unsigned int dwInternalTSRate; unsigned int dwPacketSent; unsigned int isCallAudioOnly; unsigned int bwEstimation; unsigned int targetBitrate; unsigned int oneWayRelativeDelay; unsigned int adaptationPacketLossPercentage; unsigned int isLocalCellular; unsigned int isVideoPaused; unsigned long long linkType; unsigned int primaryVideoPacketReceived; unsigned int primaryAudioPacketReceived; unsigned int totalVideoPacketReceived; unsigned int totalAudioPacketReceived; unsigned int totalVideoPacketExpected; unsigned int totalAudioPacketExpected; } wrmInfo; struct tagHANDLE *rtpHandle; } _realtimeContext;
}

@property (readonly, nonatomic) void *realtimeContext;

- (void)dealloc;
- (int)onStart;
- (void)stopWRM;
- (id)initWithHandle:(struct tagHANDLE { int x0; } *)a0 callId:(unsigned int)a1 localSSRC:(unsigned int)a2;
- (id)initWithHandle:(struct tagHANDLE { int x0; } *)a0 callId:(unsigned int)a1 localSSRC:(unsigned int)a2 enableNetworkMonitor:(BOOL)a3;
- (void)onStop;
- (void)reportWRMMetrics:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; } *)a0;
- (void)setPreWarmState:(BOOL)a0;
- (void)setWRMCallId:(unsigned int)a0;
- (void)setWRMCoexMetrics:(id)a0;
- (void)setWRMMetricConfig:(struct { unsigned long long x0; } *)a0;
- (void)setWRMNotification:(struct { int x0; int x1; unsigned long long x2; char x3[128]; unsigned long long x4; unsigned long long x5; } *)a0;
- (void)startWRM;

@end
