@interface IMAVInterface : NSObject

@property (readonly, nonatomic) unsigned int overallChatState;
@property (readonly, nonatomic) BOOL supportsRelay;
@property (weak, nonatomic) id delegate;
@property (readonly, nonatomic) BOOL supportsLayers;
@property (readonly, nonatomic) BOOL isAVInterfaceReady;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) unsigned long long capabilitiesOfNetwork;
@property (readonly, nonatomic) unsigned long long capabilitiesOfCPU;
@property (readonly, nonatomic) id _controller;
@property (nonatomic) unsigned int maxBitrate;
@property (readonly, nonatomic) id controller;
@property (readonly, nonatomic) BOOL systemCanVideoChat;
@property (readonly, nonatomic) BOOL systemCanAudioChat;
@property (readonly, nonatomic) BOOL systemSupportsFrontFacingCamera;
@property (readonly, nonatomic) BOOL systemSupportsBackFacingCamera;
@property (nonatomic) void *localVideoBackLayer;
@property (nonatomic) void *localVideoLayer;
@property (nonatomic) BOOL shouldKeepCameraRunning;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_conferenceEnded:(id)a0;
- (void)dealloc;
- (void)persistentProperty:(id)a0 changedTo:(id)a1 from:(id)a2;
- (long long)_checkNetworkForChat:(id)a0 requiresWifi:(BOOL)a1;
- (void)chatStateUpdated;
- (long long)_runPingTestForChat:(id)a0;
- (void)_conferenceWillStart:(id)a0;
- (BOOL)stopPreview;
- (void)_notifyAboutPotentialCallForChat:(id)a0;
- (void)_avChatDealloc:(id)a0;
- (void)unsetDelegate:(id)a0;
- (void)cancelConferenceForAVChat:(id)a0;
- (int)endConferenceForAVChat:(id)a0;
- (void)initAVInterface;
- (void)processRemoteIPChanged:(id)a0 fromParticipant:(id)a1;
- (id)natTypeForAVChat:(id)a0;
- (void)chatRelayedStatusChanged:(id)a0;
- (void)endAVConferenceWithChat:(id)a0 callID:(long long)a1;
- (void)avChat:(id)a0 prepareConnectionWithCallInfo:(id)a1;
- (BOOL)avChat:(id)a0 generateCallInfoForID:(id)a1 service:(id)a2 usingRelay:(BOOL)a3 callInfo:(id)a4;
- (void)cleanupAVInterface;
- (BOOL)isMuteForAVChat:(id)a0;
- (void)avChat:(id)a0 setMute:(BOOL)a1;
- (BOOL)isPausedForAVChat:(id)a0;
- (void)avChat:(id)a0 setPaused:(BOOL)a1;
- (BOOL)isRemoteMuteForAVChat:(id)a0;
- (void)avChat:(id)a0 setRemoteMute:(BOOL)a1;
- (BOOL)isSendingAudioForAVChat:(id)a0;
- (void)avChat:(id)a0 setSendingAudio:(BOOL)a1;
- (BOOL)isSendingVideoForAVChat:(id)a0;
- (void)avChat:(id)a0 setSendingVideo:(BOOL)a1;
- (void)avChat:(id)a0 setValidatedIdentity:(struct __SecIdentity { } *)a1;
- (BOOL)startPreviewWithError:(id *)a0;
- (int)avChat:(id)a0 endConferenceForUserID:(id)a1;
- (id)getNatIPFromICEData:(id)a0;
- (id)avChat:(id)a0 IPAndPortDataWithCallerIPAndPortData:(id)a1 shouldFindExternalIP:(BOOL)a2;
- (id)avChat:(id)a0 IPAndPortDataWithCallerIP:(id)a1 callerSIPPort:(unsigned int)a2 shouldFindExternalIP:(BOOL)a3;
- (void)setRemoteVideoPresentationSize:(struct CGSize { double x0; double x1; })a0 forChat:(id)a1;
- (void)setRemoteVideoPresentationState:(unsigned int)a0 forChat:(id)a1;
- (void)handleRelayInitate:(id)a0 fromParticipant:(id)a1 callInfo:(id)a2;
- (void)handleRelayUpdate:(id)a0 fromParticipant:(id)a1 callInfo:(id)a2;
- (void)handleRelayCancel:(id)a0 fromParticipant:(id)a1 callInfo:(id)a2;
- (void)avChat:(id)a0 setLocalLandscapeAspectRatio:(struct CGSize { double x0; double x1; })a1 localPortraitAspectRatio:(struct CGSize { double x0; double x1; })a2;
- (BOOL)_submitLoggingInformation:(id)a0 forChat:(id)a1;
- (BOOL)_submitEndCallMetric:(id)a0 forCallID:(long long)a1;
- (void)updateAVChat:(id)a0 withCallMetadata:(id)a1 isFinalUpdate:(BOOL)a2;

@end
