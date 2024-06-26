@class NSMutableDictionary, VCSessionStatsController, VCNetworkFeedbackController, NSDictionary, NSObject, VCSecurityKeyManager, VCRateControlMediaController, VCTransportSession, NSMutableArray, VCSessionBitrateArbiter, NSString, VCSessionMessaging, AVCRateController, VCSessionParticipantLocal, NSArray, VCSessionDownlinkBandwidthAllocator, VCControlChannelMultiWay, VCSessionConfiguration, NSError;
@protocol VCConnectionProtocol, OS_dispatch_queue, VCSessionDelegate;

@interface VCSession : VCObject <VCSessionParticipantStreamDelegate, AVCRateControllerDelegate, VCRateControlMediaControllerDelegate, VCMediaStreamNotification, RTCPReportProvider, VCSecurityEventHandler, VCSessionParticipantDelegate, VCNetworkFeedbackControllerDelegate, VCSessionStatsControllerDelegate, VCConnectionChangedHandler, VCMomentTransportDelegate> {
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id<VCSessionDelegate> _delegate;
    VCControlChannelMultiWay *_controlChannel;
    VCSessionConfiguration *_configuration;
    NSMutableDictionary *_remoteParticipantsMapByUUID;
    int _reportUpdateInterval;
    int _reportReportFrequency;
    VCNetworkFeedbackController *_feedbackController;
    NSMutableArray *_startingParticipants;
    NSMutableArray *_stoppingParticipants;
    NSMutableArray *_initializingParticipants;
    VCSecurityKeyManager *_securityKeyManager;
    int _currentconnectionType;
    BOOL _localSourceNeedsReset;
    BOOL _useReducedSizeRTCP;
    AVCRateController *_uplinkRateController;
    unsigned int _uplinkTargetBitrate;
    unsigned int _downlinkTargetBitrate;
    VCRateControlMediaController *_uplinkMediaController;
    unsigned int _basebandFlushTransactionID;
    VCSessionDownlinkBandwidthAllocator *_downlinkBandwidthAllocator;
    double _sessionStartTime;
    BOOL _forceDisableMediaPriority;
    NSError *_stopError;
    BOOL _isGKVoiceChat;
    struct _VCSessionOneToOneSettings { AVCRateController *rateController; VCRateControlMediaController *mediaController; void *audioMediaControlInfoGenerator; void *videoMediaControlInfoGenerator; struct tagHANDLE *mediaQueue; BOOL negotiatedVideoEnabled; } _oneToOneSettings;
    VCSessionBitrateArbiter *_bitrateArbiter;
}

@property (retain) NSMutableDictionary *optInDictionary;
@property (nonatomic) struct tagVCMediaQueue { } *mediaQueue;
@property (retain, nonatomic) NSMutableDictionary *remoteParticipantsMapByServerID;
@property (retain, nonatomic) VCSessionMessaging *sessionMessaging;
@property (readonly, nonatomic) VCSessionStatsController *sessionStatsController;
@property (readonly, nonatomic) NSDictionary *capabilities;
@property (readonly, nonatomic) VCSessionParticipantLocal *localParticipant;
@property (readonly, nonatomic) NSArray *remoteParticipants;
@property (readonly, nonatomic) id<VCSessionDelegate> delegate;
@property (readonly, nonatomic) NSString *idsDestination;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned int transportSessionID;
@property (retain, nonatomic) id<VCConnectionProtocol> currentActiveConnection;
@property (readonly, nonatomic) VCTransportSession *transportSession;
@property (readonly, nonatomic) AVCRateController *downlinkRateController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)tearDown;
- (void)setState:(unsigned int)a0;
- (void)removeParticipant:(id)a0;
- (void)updateConfiguration:(id)a0;
- (void)rateController:(void *)a0 targetBitrateDidChange:(unsigned int)a1 rateChangeCounter:(unsigned int)a2;
- (int)maxRemoteParticipants30fps;
- (void)handleActiveConnectionChange:(id)a0;
- (BOOL)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8; } *)a0 reportCount:(char *)a1;
- (void)moments:(id)a0 shouldProcessRequest:(id)a1 recipientID:(id)a2;
- (void)mediaController:(void *)a0 mediaSuggestionDidChange:(struct VCRateControlMediaSuggestion { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; })a1;
- (id)participantForID:(id)a0;
- (id)initWithIDSDestination:(id)a0 configurationDict:(id)a1 negotiationData:(id)a2 delegate:(id)a3 processId:(int)a4 isGKVoiceChat:(BOOL)a5;
- (void)stopWithError:(id)a0;
- (void)addParticipantConfigurations:(id)a0 processID:(int)a1;
- (void)updateParticipantConfigurations:(id)a0;
- (void)vcSessionParticipant:(id)a0 audioPaused:(BOOL)a1 didSucceed:(BOOL)a2 error:(id)a3;
- (void)vcSessionParticipant:(id)a0 videoPaused:(BOOL)a1 didSucceed:(BOOL)a2 error:(id)a3;
- (void)vcSessionParticipant:(id)a0 remoteVideoEnabledDidChange:(BOOL)a1;
- (void)vcSessionParticipant:(id)a0 didRequestVideoRedundancy:(BOOL)a1;
- (void)vcSessionParticipantDidChangeActualNetworkBitrateVideo:(id)a0;
- (void)vcSessionParticipantDidChangeActualNetworkBitrateAudio:(id)a0;
- (void)vcSessionParticipant:(id)a0 didChangeMediaPriority:(unsigned char)a1 description:(id)a2;
- (void)vcSessionParticipantDidMediaDecryptionTimeOut:(id)a0;
- (void)vcSessionParticipantDidMediaDecryptionTimeOutForMKMRecovery:(id)a0;
- (void)vcSessionParticipant:(id)a0 didSwitchFromStreamID:(unsigned short)a1 toStreamID:(unsigned short)a2;
- (void)vcSessionParticipantDidChangeReceivingStreams:(id)a0;
- (void)reportingIntervalChanged:(double)a0;
- (void)recommendedSettingsChanged:(id)a0;
- (void)setupMomentsMessages;
- (void)createSessionMessaging;
- (void)setupUplinkBitrateCaps;
- (void)createMediaQueue;
- (void)setupRateControllersMultiway;
- (int)setupOneToOne;
- (void)setupTransportSessionWithDestination:(id)a0;
- (void)setSessionInfoSynchronizerCallbacks;
- (struct __CFDictionary { } *)getClientSpecificUserInfo;
- (void)reportingSessionParticipantEvent:(unsigned short)a0 withParticipant:(id)a1;
- (void)registerReportingTask;
- (void)cleanupOneToOne;
- (void)destroySessionMessaging;
- (void)unregisterReportingTask;
- (void)cleanupVCRC;
- (char *)sessionStateToString:(unsigned int)a0;
- (void)dispatchedAddParticipantConfigurations:(id)a0 processID:(int)a1;
- (void)dispatchedRemoveParticipant:(id)a0;
- (void)dispatchedStart;
- (void)dispatchedStopWithError:(id)a0;
- (void)dispatchedUpdateConfiguration:(id)a0;
- (void)distributeBitrateAndOptInToStreamIDsWithSeamlessTransition:(BOOL)a0;
- (void)handleCellTechChange:(int)a0 connection:(id)a1;
- (void)handleCellularMTUChanged:(unsigned short)a0 connection:(id)a1;
- (void)handleEncryptionInfoEvent:(id)a0;
- (void)handleMembershipChangeInfoEvent:(id)a0;
- (void)dispatchedParticipant:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)dispatchedParticipant:(id)a0 didStopWithError:(id)a1;
- (void)broadcastMessage:(id)a0 withTopic:(id)a1;
- (void)mediaStateChangedForParticipant:(id)a0;
- (void)reportingSessionRemoteParticipantEvent:(unsigned short)a0 withParticipant:(id)a1 value:(id)a2;
- (void)reportingSessionParticipantEvent:(unsigned short)a0 withStreamID:(unsigned short)a1;
- (unsigned int)calculateExpectedTotalNetworkBitrateUplink;
- (unsigned int)calculateExpectedTotalNetworkBitrateDownlink;
- (void)updateNetworkFeedbackControllerReport:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
- (void)setMediaQueuePeakBitrateWithTargetBitrate:(unsigned int)a0;
- (int)flushBasebandWithPayloads:(id)a0;
- (void)reportingSessionDownlinkOptInEvent:(id)a0 selectedMediaEntriesForParticipants:(id)a1;
- (void)setSessionInfoSynchronizerErrorResponseCallback;
- (void)setSessionInfoSynchronizerPeerSubscribedStreamsCallback;
- (void)cleanupRateControllerOneToOne;
- (void)reportingSessionParticipantEvent:(unsigned short)a0 keyChangeReason:(id)a1 newMKI:(id)a2;
- (void)registerMediaStreamNotificationDelegateForParticipant:(id)a0;
- (void)updateLocalStreamConfiguration;
- (void)unregisterMediaStreamNotificationDelegateForParticipant:(id)a0;
- (void)cleaupMediaControlInfoGeneratorsOneToOne;
- (void)setupAudioEnabledMessages;
- (void)setupVideoEnabledMessages;
- (void)setupAudioPausedMessages;
- (void)setupVideoPausedMessages;
- (void)setupKeyFrameGenerationMessages;
- (void)setupSymptomEnabledMessages;
- (void)stopSessionMessaging;
- (void)vcSessionParticipant:(id)a0 remoteAudioEnabledDidChange:(BOOL)a1;
- (void)vcSessionParticipant:(id)a0 remoteAudioPausedDidChange:(BOOL)a1;
- (void)vcSessionParticipant:(id)a0 remoteVideoPausedDidChange:(BOOL)a1;
- (void)generateKeyFrameWithReceivedMessage:(id)a0;
- (void)didReceiveMomentsRequest:(id)a0;
- (void)reportingMomentsWithRequest:(id)a0 recipientID:(id)a1;
- (void)didReceiveReportPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned char x0 : 5; unsigned char x1 : 1; unsigned char x2 : 2; unsigned char x3 : 8; unsigned short x4; } x0; union { struct tagSR_RTCP { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct tagRTCP_RRB { unsigned int x0; unsigned char x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x6[1]; } x0; struct tagRR_RTCP { unsigned int x0; struct tagRTCP_RRB { unsigned int x0; unsigned char x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x1[1]; } x1; struct tagSDES_RTCP { unsigned int x0; struct tagRTCPSDES { unsigned char x0; unsigned char x1; char x2[258]; } x1; } x2; struct tagBYE_RTCP { unsigned int x0; } x3; struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x4; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x5; struct tagFIR_RTCP { unsigned int x0; unsigned short x1[10]; } x6; struct tagNACK_RTCP { unsigned int x0; unsigned short x1; unsigned short x2; } x7; struct tagRTCP_PSFB_PLI { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; } x8; struct tagRTCP_PSFB_SLI { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x9; struct tagRTCP_PSFB_FIR { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned char x2; unsigned char x3[3]; } x10; struct tagRTCP_PSFB_TST { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x11; struct tagRTCP_PSFB_TST { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x12; struct tagRTCP_RTPFB_GNACK { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned short x1; unsigned short x2; } x13; struct tagRTCP_RTPFB_TMMB { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x14; struct tagRTCP_RTPFB_TMMB { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x15; struct tagRTCP_CUSTOM_SR { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; struct tagRTCP_CUSTOM_SENDER_INFO { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4 : 4; unsigned char x5 : 4; } x2; struct tagRTCP_CUSTOM_RECEPTION_REPORT { unsigned int x0; unsigned char x1 : 4; unsigned short x2 : 12; unsigned short x3; unsigned short x4; unsigned char x5; unsigned char x6; } x3[1]; } x16; struct tagRTCP_CUSTOM_RR { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; struct tagRTCP_CUSTOM_RECEIVER_INFO { unsigned char x0 : 4; unsigned char x1 : 4; } x2; struct tagRTCP_CUSTOM_RECEPTION_REPORT { unsigned int x0; unsigned char x1 : 4; unsigned short x2 : 12; unsigned short x3; unsigned short x4; unsigned char x5; unsigned char x6; } x3[1]; } x17; struct tagRTCP_CUSTOM_RCTL { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; struct tagRTCP_CUSTOM_RATE_CONTROL_INFO { unsigned char x0[20]; } x1; } x18; } x1; } *)a0 arrivalNTPTime:(union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned char x0 : 5; unsigned char x1 : 1; unsigned char x2 : 2; unsigned char x3 : 8; unsigned short x4; } x0; union { struct tagSR_RTCP { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct tagRTCP_RRB { unsigned int x0; unsigned char x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x6[1]; } x0; struct tagRR_RTCP { unsigned int x0; struct tagRTCP_RRB { unsigned int x0; unsigned char x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x1[1]; } x1; struct tagSDES_RTCP { unsigned int x0; struct tagRTCPSDES { unsigned char x0; unsigned char x1; char x2[258]; } x1; } x2; struct tagBYE_RTCP { unsigned int x0; } x3; struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x4; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x5; struct tagFIR_RTCP { unsigned int x0; unsigned short x1[10]; } x6; struct tagNACK_RTCP { unsigned int x0; unsigned short x1; unsigned short x2; } x7; struct tagRTCP_PSFB_PLI { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; } x8; struct tagRTCP_PSFB_SLI { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x9; struct tagRTCP_PSFB_FIR { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned char x2; unsigned char x3[3]; } x10; struct tagRTCP_PSFB_TST { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x11; struct tagRTCP_PSFB_TST { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x12; struct tagRTCP_RTPFB_GNACK { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned short x1; unsigned short x2; } x13; struct tagRTCP_RTPFB_TMMB { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x14; struct tagRTCP_RTPFB_TMMB { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x15; struct tagRTCP_CUSTOM_SR { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; struct tagRTCP_CUSTOM_SENDER_INFO { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4 : 4; unsigned char x5 : 4; } x2; struct tagRTCP_CUSTOM_RECEPTION_REPORT { unsigned int x0; unsigned char x1 : 4; unsigned short x2 : 12; unsigned short x3; unsigned short x4; unsigned char x5; unsigned char x6; } x3[1]; } x16; struct tagRTCP_CUSTOM_RR { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; struct tagRTCP_CUSTOM_RECEIVER_INFO { unsigned char x0 : 4; unsigned char x1 : 4; } x2; struct tagRTCP_CUSTOM_RECEPTION_REPORT { unsigned int x0; unsigned char x1 : 4; unsigned short x2 : 12; unsigned short x3; unsigned short x4; unsigned char x5; unsigned char x6; } x3[1]; } x17; struct tagRTCP_CUSTOM_RCTL { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; struct tagRTCP_CUSTOM_RATE_CONTROL_INFO { unsigned char x0[20]; } x1; } x18; } x1; } *)a0 arrivalNTPTime:(union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
- (BOOL)handleEncryptionInfoChange:(id)a0;
- (void)reportingSessionParticipantEvent:(unsigned short)a0 withParticipant:(id)a1 keyChangeReason:(id)a2 newMKI:(id)a3;
- (void)resetDecryptionTimeout;
- (void)reportingSessionParticipantEvent:(unsigned short)a0 withParticipant:(id)a1 keyChangeReason:(id)a2 newMKI:(id)a3 withStreamID:(unsigned short)a4;
- (void)collectSessionEventKeyFields:(struct __CFDictionary { } *)a0 eventType:(unsigned short)a1 withParticipant:(id)a2 keyChangeReason:(id)a3 newMKI:(id)a4 withStreamID:(unsigned short)a5;
- (BOOL)detectSSRCCollision:(id)a0 resetNeeded:(BOOL *)a1;
- (BOOL)configureRemoteParticipant:(id)a0 withConfig:(id)a1;
- (void)setDelegatesForRemoteParticipant:(id)a0;
- (BOOL)addOneToOneParticipant:(id)a0 withConfig:(id)a1;
- (void)registerRemoteParticipantToSession:(id)a0;
- (int)setupOneToOneMediaControlInfoGenerators;
- (id)newParticipantOneToOneConfigWithIDSParticipantID:(unsigned long long)a0 isLocal:(BOOL)a1;
- (void)startOneToOne;
- (void)dispatchedAddParticipantWithConfig:(id)a0 processID:(int)a1;
- (void)removeDelegatesForRemoteParticipant:(id)a0;
- (void)unregisterRemoteParticipantFromSession:(id)a0;
- (void)setTransportSessionEventHandler;
- (void)startRateControllers;
- (void)startSessionMessaging;
- (void)stopAllParticipants;
- (void)stopRateControllerOneToOne;
- (id)participantsToString;
- (void)reportingSessionStopEventWithError:(id)a0;
- (int)setupOneToOneMediaQueue;
- (int)setupRateControllerOneToOne;
- (void)cleanupOneToOneMediaQueue;
- (void)startRateControllerOneToOne;
- (void)vcSessionParticipant:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)vcSessionParticipant:(id)a0 didStopWithError:(id)a1;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList { union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; unsigned char x1; struct tagRTCPPACKET *x2[10]; struct OpaqueCMBlockBuffer *x3; char *x4; unsigned long long x5; unsigned int x6; unsigned char x7[1472]; struct { struct _RTCPPacketList *x0; } x8; } *)a0;
- (void)mediaStream:(id)a0 didReceiveNewMasterKeyIndex:(id)a1;
- (void)vcSessionParticipant:(id)a0 audioEnabled:(BOOL)a1 didSucceed:(BOOL)a2 error:(id)a3;
- (void)vcSessionParticipant:(id)a0 videoEnabled:(BOOL)a1 didSucceed:(BOOL)a2 error:(id)a3;
- (void)vcSessionParticipant:(id)a0 requestKeyFrameGenerationWithStreamID:(unsigned short)a1;
- (void)vcSessionParticipantDidChangeSendingStreams:(id)a0;
- (void)vcSessionParticipant:(id)a0 didDetectError:(id)a1;
- (void)vcSessionParticipant:(id)a0 spatialAudioSourceIDDidChange:(unsigned long long)a1;
- (void)didReceivedSessionStatsAtTime:(double)a0;
- (void)optInStreamWithIDSStreamIDs:(id)a0;
- (void)optOutStreamWithIDSStreamIDs:(id)a0;
- (void)sendSymptomsToRemoteParticipants:(id)a0 symptom:(id)a1 groupID:(id)a2;
- (void)setupVideoRedundancyMessages;

@end
