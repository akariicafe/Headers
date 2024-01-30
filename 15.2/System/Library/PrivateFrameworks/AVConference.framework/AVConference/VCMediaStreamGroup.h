@class AVCStatisticsCollector, NSArray, NSString, VCNetworkFeedbackController, NSDictionary, NSMutableDictionary, NSObject, TimingCollection, VCSecurityKeyManager;
@protocol VCMediaCaptureController, OS_dispatch_queue;

@interface VCMediaStreamGroup : VCObject <VCMediaStreamDelegate, VCMediaCaptureController, VCSecurityEventHandler, VCMediaStreamNotification> {
    NSArray *_mediaStreams;
    NSString *_participantUUID;
    NSString *_sessionUUID;
    NSObject<OS_dispatch_queue> *_stateQueue;
    VCNetworkFeedbackController *_networkFeedbackController;
    TimingCollection *_perfTimers;
    double _creationTime;
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    unsigned long long _idsParticipantID;
    unsigned int _rtpTimestampRate;
    NSMutableDictionary *_groupEntries;
    id _captureController;
    VCSecurityKeyManager *_securityKeyManager;
    struct tagVCJBTargetEstimatorSynchronizer { } *_jbTargetEstimatorSynchronizer;
}

@property (readonly, nonatomic) unsigned int streamGroupID;
@property (nonatomic) unsigned int syncGroupID;
@property (readonly, nonatomic) long long streamToken;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic) unsigned int mediaSubtype;
@property (readonly, nonatomic) unsigned int state;
@property (nonatomic) id<VCMediaCaptureController> captureController;
@property (nonatomic) BOOL encryptionInfoReceived;
@property (readonly, nonatomic) NSArray *mediaStreamInfoArray;
@property (readonly, nonatomic) NSDictionary *streamIDToMediaStreamMap;
@property (readonly, nonatomic) BOOL hasRepairedStreams;
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didStop;
- (id)stopCapture;
- (id)startCapture;
- (id)start;
- (id)pause;
- (id)resume;
- (void)dealloc;
- (void)didStart;
- (id)initWithConfig:(id)a0;
- (id)stop;
- (BOOL)configureStreams;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; } *)a0;
- (void)callDelegateWithBlock:(id /* block */)a0;
- (void)mediaStream:(id)a0 didReceiveNewMediaKeyIndex:(id)a1;
- (void)setPerfTimersWithMediaKeyIndex:(id)a0 perfTimerIndexToStart:(int)a1;
- (id)willStart;
- (BOOL)addSyncDestination:(id)a0;
- (BOOL)removeSyncDestination:(id)a0;
- (void)handleActiveConnectionChange:(id)a0;
- (BOOL)containsStreamWithSSRC:(unsigned int)a0;
- (BOOL)handleEncryptionInfoChange:(id)a0;
- (void)resetDecryptionTimeout;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList { union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; unsigned char x1; struct tagRTCPPACKET *x2[10]; struct OpaqueCMBlockBuffer *x3; char *x4; unsigned long long x5; unsigned int x6; unsigned char x7[1472]; unsigned short x8[12]; unsigned char x9; struct { struct _RTCPPacketList *x0; } x10; } *)a0;
- (void)didEncryptionKeyRollTimeout;
- (void)didPause:(BOOL)a0;
- (void)willStop;
- (BOOL)setupStreamsWithConfig:(id)a0;
- (void)registerMediaStreamNotificationDelegate;
- (void)unregisterMediaStreamNotificationDelegate;
- (id)stopMediaStreams;
- (BOOL)shouldSetPause:(BOOL)a0 onStream:(id)a1;
- (id)setPauseOnMediaStreams:(BOOL)a0;
- (id)startMediaStreams;
- (id)pauseMediaStreams;
- (id)resumeMediaStreams;
- (BOOL)containsStreamWithIDSStreamID:(unsigned short)a0;

@end
