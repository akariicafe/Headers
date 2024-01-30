@class NSMutableArray, NSMutableDictionary;
@protocol VCRedundancyControllerProtocol;

@interface VCMediaStreamSendGroup : VCMediaStreamGroup {
    BOOL _isRedundancyEnabled;
    NSMutableArray *_peerSubscribedStreams;
    BOOL _isRemoteOnPeace;
    NSMutableDictionary *_sendGroupConfigForMode;
    unsigned int _streamGroupMode;
    BOOL _shouldSynchronizeWithSourceRTPTimestamps;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _sourceTimestampRWLock;
    unsigned int _lastSentSourceSampleTime;
    double _lastSentSourceHostTime;
    BOOL _isSourceTimestampInfoAvailable;
    double _sourceSampleRate;
}

@property (nonatomic) unsigned int currentUplinkTargetBitrate;
@property (nonatomic) unsigned int currentUplinkTotalBitrate;
@property (nonatomic) unsigned int uplinkBitrateCapWifi;
@property (nonatomic) unsigned int uplinkBitrateCapCell;
@property (nonatomic) BOOL isSuspended;
@property (retain, nonatomic) id<VCRedundancyControllerProtocol> redundancyController;

- (void)dealloc;
- (id)initWithConfig:(id)a0;
- (void)didStart;
- (void)didStop;
- (unsigned int)streamGroupMode;
- (id)checkStreamsForAdditionalOptIn:(id)a0;
- (id)activeStreamKeys;
- (unsigned int)calculateUplinkTotalBitrateForMediaStreams:(id)a0;
- (void)didPause:(BOOL)a0;
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned char x0 : 5; unsigned char x1 : 1; unsigned char x2 : 2; unsigned char x3 : 8; unsigned short x4; } x0; union { struct tagSR_RTCP { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct tagRTCP_RRB { unsigned int x0; unsigned char x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x6[1]; } x0; struct tagRR_RTCP { unsigned int x0; struct tagRTCP_RRB { unsigned int x0; unsigned char x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x1[1]; } x1; struct tagSDES_RTCP { unsigned int x0; struct tagRTCPSDES { unsigned char x0; unsigned char x1; char x2[258]; } x1; } x2; struct tagBYE_RTCP { unsigned int x0; } x3; struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x4; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x5; struct tagFIR_RTCP { unsigned int x0; unsigned short x1[10]; } x6; struct tagNACK_RTCP { unsigned int x0; unsigned short x1; unsigned short x2; } x7; struct tagRTCP_PSFB_PLI { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; } x8; struct tagRTCP_PSFB_SLI { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x9; struct tagRTCP_PSFB_FIR { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned char x2; unsigned char x3[3]; } x10; struct tagRTCP_PSFB_TST { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x11; struct tagRTCP_PSFB_TST { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x12; struct tagRTCP_PSFB_ALFB_HEADER { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x13; struct tagRTCP_PSFB_LOSSFB { struct tagRTCP_PSFB_ALFB_HEADER { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x0; struct tagRTCP_CUSTOM_PSFB_LOSS_FB_INFO { unsigned int x0; unsigned short x1; unsigned char x2; unsigned char x3; } x1; } x14; struct tagRTCP_PSFB_LTRACK { struct tagRTCP_PSFB_ALFB_HEADER { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; } x15; struct tagRTCP_RTPFB_GNACK { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned short x1; unsigned short x2; } x16; struct tagRTCP_RTPFB_TMMB { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x17; struct tagRTCP_RTPFB_TMMB { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x18; struct tagVCRTCPXR { unsigned int x0; unsigned int x1[0]; } x19; struct tagRTCP_CUSTOM_SR { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; struct tagRTCP_CUSTOM_SENDER_INFO { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4 : 4; unsigned char x5 : 4; } x2; struct tagRTCP_CUSTOM_RECEPTION_REPORT { unsigned int x0; unsigned char x1 : 4; unsigned short x2 : 12; unsigned short x3; unsigned short x4; unsigned char x5; unsigned char x6; } x3[1]; } x20; struct tagRTCP_CUSTOM_RR { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; struct tagRTCP_CUSTOM_RECEIVER_INFO { unsigned char x0 : 4; unsigned char x1 : 4; } x2; struct tagRTCP_CUSTOM_RECEPTION_REPORT { unsigned int x0; unsigned char x1 : 4; unsigned short x2 : 12; unsigned short x3; unsigned short x4; unsigned char x5; unsigned char x6; } x3[1]; } x21; struct tagRTCP_CUSTOM_RCTL { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; struct tagRTCP_CUSTOM_RATE_CONTROL_INFO { unsigned char x0[20]; } x1; } x22; } x1; } *)a0 arrivalNTPTime:(union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList { union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; unsigned char x1; struct tagRTCPPACKET *x2[10]; struct OpaqueCMBlockBuffer *x3; char *x4; unsigned long long x5; unsigned int x6; unsigned char x7[1472]; unsigned short x8[12]; unsigned char x9; BOOL x10; unsigned long long x11; struct { struct _RTCPPacketList *x0; } x12; } *)a0;
- (void)didReceiveReportPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned char x0 : 5; unsigned char x1 : 1; unsigned char x2 : 2; unsigned char x3 : 8; unsigned short x4; } x0; union { struct tagSR_RTCP { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct tagRTCP_RRB { unsigned int x0; unsigned char x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x6[1]; } x0; struct tagRR_RTCP { unsigned int x0; struct tagRTCP_RRB { unsigned int x0; unsigned char x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x1[1]; } x1; struct tagSDES_RTCP { unsigned int x0; struct tagRTCPSDES { unsigned char x0; unsigned char x1; char x2[258]; } x1; } x2; struct tagBYE_RTCP { unsigned int x0; } x3; struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x4; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x5; struct tagFIR_RTCP { unsigned int x0; unsigned short x1[10]; } x6; struct tagNACK_RTCP { unsigned int x0; unsigned short x1; unsigned short x2; } x7; struct tagRTCP_PSFB_PLI { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; } x8; struct tagRTCP_PSFB_SLI { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x9; struct tagRTCP_PSFB_FIR { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned char x2; unsigned char x3[3]; } x10; struct tagRTCP_PSFB_TST { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x11; struct tagRTCP_PSFB_TST { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x12; struct tagRTCP_PSFB_ALFB_HEADER { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x13; struct tagRTCP_PSFB_LOSSFB { struct tagRTCP_PSFB_ALFB_HEADER { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x0; struct tagRTCP_CUSTOM_PSFB_LOSS_FB_INFO { unsigned int x0; unsigned short x1; unsigned char x2; unsigned char x3; } x1; } x14; struct tagRTCP_PSFB_LTRACK { struct tagRTCP_PSFB_ALFB_HEADER { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; } x15; struct tagRTCP_RTPFB_GNACK { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned short x1; unsigned short x2; } x16; struct tagRTCP_RTPFB_TMMB { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x17; struct tagRTCP_RTPFB_TMMB { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x18; struct tagVCRTCPXR { unsigned int x0; unsigned int x1[0]; } x19; struct tagRTCP_CUSTOM_SR { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; struct tagRTCP_CUSTOM_SENDER_INFO { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4 : 4; unsigned char x5 : 4; } x2; struct tagRTCP_CUSTOM_RECEPTION_REPORT { unsigned int x0; unsigned char x1 : 4; unsigned short x2 : 12; unsigned short x3; unsigned short x4; unsigned char x5; unsigned char x6; } x3[1]; } x20; struct tagRTCP_CUSTOM_RR { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; struct tagRTCP_CUSTOM_RECEIVER_INFO { unsigned char x0 : 4; unsigned char x1 : 4; } x2; struct tagRTCP_CUSTOM_RECEPTION_REPORT { unsigned int x0; unsigned char x1 : 4; unsigned short x2 : 12; unsigned short x3; unsigned short x4; unsigned char x5; unsigned char x6; } x3[1]; } x21; struct tagRTCP_CUSTOM_RCTL { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; struct tagRTCP_CUSTOM_RATE_CONTROL_INFO { unsigned char x0[20]; } x1; } x22; } x1; } *)a0 arrivalNTPTime:(union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
- (void)dispatchedUpdateActiveMediaStreamIDs:(id)a0 withTargetBitrate:(unsigned int)a1 mediaBitrates:(id)a2 rateChangeCounter:(unsigned int)a3;
- (BOOL)enableRedundancy:(BOOL)a0;
- (id)peerSubscribedStreams;
- (void)setActiveConnection:(id)a0 uplinkBitrateCap:(unsigned int)a1 activeMediaStreamIDs:(id)a2 mediaBitrates:(id)a3 rateChangeCounter:(unsigned int)a4;
- (void)setStatisticsCollector:(id)a0;
- (BOOL)setStreamGroupMode:(unsigned int)a0;
- (BOOL)setupStreamGroupWithConfig:(id)a0;
- (BOOL)shouldCompoundListIgnoreStream:(id)a0 streamConfig:(id)a1 activeStreamIds:(id)a2;
- (BOOL)shouldSubscribeToStreamID:(id)a0 peerSubscribedStreams:(id)a1;
- (id)streamDescriptionForMediaStreamConfig:(id)a0;
- (id)streamGroupConfigForMode:(unsigned int)a0;
- (void)updateActiveMediaStreamIDs:(id)a0 withTargetBitrate:(unsigned int)a1 mediaBitrates:(id)a2 rateChangeCounter:(unsigned int)a3;
- (void)updateActiveStreamsCount:(unsigned int)a0;
- (BOOL)updateConfig:(id)a0 forMode:(unsigned int)a1;
- (void)updateEnabledState;
- (void)updateEncryptionInformationWithConfig:(id)a0;
- (BOOL)updatePeerSubscribedStreams:(id)a0 containsRepairStreams:(BOOL)a1;
- (void)updateStreamIDCompoundingWithBlock:(id /* block */)a0 activeStreamIds:(id)a1;
- (void)updateUplinkBitrateCapCell:(unsigned int)a0 activeStreamIDs:(id)a1;
- (void)updateUplinkBitrateCapWifi:(unsigned int)a0 activeStreamIDs:(id)a1;
- (BOOL)updateUplinkStreamsForPeerSubscribedStreams:(id)a0;

@end
