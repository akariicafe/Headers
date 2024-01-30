@class VCAudioStreamGroupCommon, TimingCollection;
@protocol VCMediaStreamSyncSource;

@interface VCAudioStreamReceiveGroup : VCMediaStreamReceiveGroup <VCAudioStreamGroup> {
    VCAudioStreamGroupCommon *_common;
    struct tagVCAudioStreamGroupPriorityInfo { BOOL isAudioActive; unsigned int audioActiveProbabilityThreshold; unsigned int audioInactiveProbabilityThreshold; unsigned int audioActiveAccumulationThreshold; unsigned int audioInactiveAccumulationThreshold; unsigned int audioActiveCount; unsigned int lastAudioPriority; unsigned int refreshCounter; } _mediaPriorityInfo;
    void /* function */ *_didPullSamplesCallback;
    void *_didPullSamplesCallbackContext;
    BOOL _receivingEndToEndStream;
    float _averageOutputPower;
    unsigned long long _speakerProcsCalled;
    TimingCollection *_perfTimers;
    BOOL _haveReportedPerfTimers;
}

@property (readonly) id<VCMediaStreamSyncSource> syncSource;
@property (nonatomic, setter=setMuted:) BOOL isMuted;
@property (readonly, nonatomic) int deviceRole;
@property (setter=setPowerSpectrumEnabled:) BOOL isPowerSpectrumEnabled;

- (void)didStop;
- (id)stopCapture;
- (id)startCapture;
- (void)dealloc;
- (void)didStart;
- (id)initWithConfig:(id)a0;
- (void)setMuteOnStreams;
- (BOOL)setDeviceRole:(int)a0 operatingMode:(int)a1;
- (BOOL)configureStreams;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; } *)a0;
- (void)setReportingAgent:(struct opaqueRTCReporting { } *)a0;
- (void)setOptedInStreamID:(id)a0;
- (BOOL)isAudioExpected;
- (void)reportParticipantsPerfTimingsOnce;
- (void)mediaStream:(id)a0 didReceiveNewMediaKeyIndex:(id)a1;
- (void)setActiveStreamIDs:(id)a0;
- (id)willStart;
- (BOOL)addSyncDestination:(id)a0;
- (BOOL)removeSyncDestination:(id)a0;
- (void)vcMediaStream:(id)a0 remoteMediaStalled:(BOOL)a1 duration:(double)a2;
- (void)vcMediaStream:(id)a0 didSwitchToAudioStreamWithID:(unsigned short)a1;
- (void)vcMediaStream:(id)a0 didReceiveFirstFrameWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
