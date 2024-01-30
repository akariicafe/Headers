@class NSNumber, VCRedundancyControllerVideo;

@interface VCVideoStreamReceiveGroup : VCMediaStreamReceiveGroup <VCRedundancyControllerDelegate> {
    _Atomic unsigned char _videoPriority;
    unsigned char _lastVideoPriority;
    BOOL _isVideoDegraded;
    double _isVideoDegradedStartTime;
    BOOL _haveReportedPerfTimers;
    BOOL _isProcessingVideoOptIn;
    NSNumber *_previousOptedInStreamID;
    VCRedundancyControllerVideo *_videoRedundancyController;
    BOOL _isRedundancyRequested;
    BOOL _isMediaSuspended;
    double _lastVideoExpectationSwitch;
    BOOL _isVideoExpected;
    BOOL _didReportExtendedPoorConnection;
    BOOL _shouldConvertSourceRTPTimestamp;
    unsigned long long _syncUpdateCalled;
}

@property (nonatomic) BOOL isRemoteMediaStalled;
@property (nonatomic, getter=isRemoteVideoPaused) BOOL remoteVideoPaused;
@property (nonatomic, getter=isRemoteVideoEnabled) BOOL remoteVideoEnabled;
@property (nonatomic) unsigned char videoQuality;
@property (nonatomic) unsigned int visibilityIndex;
@property (readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
@property (nonatomic) BOOL shouldEnableMLEnhance;

- (BOOL)isVisible;
- (void)dealloc;
- (id)initWithConfig:(id)a0;
- (void)setVideoDegraded:(BOOL)a0;
- (void)didStart;
- (void)resetPerfTimers;
- (BOOL)isVideoExpected;
- (void)checkForExtendedPoorConnection;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)a0;
- (void)mediaStream:(id)a0 didReceiveNewMediaKeyIndex:(id)a1;
- (void)redundancyController:(id)a0 redundancyIntervalDidChange:(double)a1;
- (void)redundancyController:(id)a0 redundancyPercentageDidChange:(unsigned int)a1;
- (void)redundancyController:(id)a0 redundancyVectorDidChange:(struct { unsigned short x0; struct { unsigned char x0; unsigned char x1; } x1[32]; })a1;
- (void)reportParticipantsPerfTimingsOnce;
- (void)resetDidReceiveFirstFrame;
- (void)setActiveStreamIDs:(id)a0;
- (void)setMediaSuspended:(BOOL)a0 forStreamToken:(id)a1;
- (void)setOptedInStreamID:(id)a0;
- (void)setShouldEnableFaceZoom:(BOOL)a0;
- (BOOL)setSyncSource:(id)a0;
- (id)setupRedundancyController;
- (void)setupVideoPriority;
- (void)updateShouldEnableFaceZoom;
- (void)updateVideoExpected;
- (void)updateVideoPriority:(unsigned char)a0;
- (void)vcMediaStream:(id)a0 didReceiveFirstFrameWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)vcMediaStream:(id)a0 didSwitchFromStreamID:(unsigned short)a1 toStreamID:(unsigned short)a2;
- (void)vcMediaStream:(id)a0 priorityDidChange:(unsigned char)a1;
- (void)vcMediaStream:(id)a0 remoteMediaStalled:(BOOL)a1 duration:(double)a2;
- (void)vcMediaStream:(id)a0 requestKeyFrameGenerationWithStreamID:(unsigned short)a1 firType:(int)a2;
- (id)willStart;
- (void)willStop;

@end
