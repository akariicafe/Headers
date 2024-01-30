@class VCMediaStreamConfig, AVCBasebandCongestionDetector;
@protocol VCMediaStreamTransportDelegate;

@interface VCMediaStreamTransport : NSObject {
    unsigned int _localSSRC;
    BOOL _isSRTPInitialized;
    int _payloadType;
    struct { void *context; void /* function */ *creationCallback; BOOL isReceiveExternallyScheduled; } _transportStreamInfo;
    id _delegate;
}

@property (readonly, nonatomic) VCMediaStreamConfig *streamConfig;
@property (readonly, nonatomic) struct tagHANDLE { int x0; } *rtpHandle;
@property (readonly, nonatomic) unsigned short idsStreamId;
@property (readonly, nonatomic) id<VCMediaStreamTransportDelegate> delegate;
@property (readonly, nonatomic) double lastReceivedRTCPPacketTime;
@property (readonly, nonatomic, getter=isRTCPSendEnabled) BOOL rtcpSendEnabled;
@property (nonatomic) long long streamDirection;
@property (nonatomic) double rtpTimeoutInterval;
@property (nonatomic, getter=isRTPTimeoutEnabled) BOOL rtpTimeoutEnabled;
@property (nonatomic) double decryptionMKMRecoveryInterval;
@property (nonatomic) double decryptionTimeoutInterval;
@property (nonatomic, getter=isDecryptionTimeoutEnabled) BOOL decryptionTimeoutEnabled;
@property (nonatomic) double rtcpTimeoutInterval;
@property (nonatomic) double rtcpSendInterval;
@property (nonatomic, getter=isRTCPTimeoutEnabled) BOOL rtcpTimeoutEnabled;
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector;

+ (BOOL)isSameSRTPKey:(id)a0 newKey:(id)a1;
+ (int)getSRTPMasterKeyLength:(long long)a0;
+ (int)SRTPCipherSuiteForVCMediaStreamCipherSuite:(long long)a0;

- (void)reset;
- (void)dealloc;
- (void)onStop;
- (int)onStart;
- (void)setDelegate:(id)a0;
- (BOOL)configureWithStreamConfig:(id)a0 setupInfo:(struct _VCMediaStreamTransportSetupInfo { unsigned char x0; union { struct { int x0; int x1; } x0; struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; } x1; struct { void *x0; void /* function */ *x1; BOOL x2; } x2; id x3; } x1; unsigned int x2; unsigned int x3; BOOL x4; } *)a1 customRTCPPackets:(BOOL)a2 statisticsCollector:(id)a3 basebandCongestionDetector:(id)a4 error:(id *)a5;
- (void)sendControlPacket:(struct _RTCP_SEND_CONTROL_PARAMETERS { unsigned int x0; int x1; char *x2; unsigned long long x3; unsigned char x4; unsigned short *x5; int x6; unsigned short x7; unsigned short x8; unsigned int x9; struct _RTCP_RECEPTION_REPORT *x10; unsigned char x11; struct tagRTCP_CUSTOM_RATE_CONTROL_INFO *x12; } *)a0;
- (void)resetPayloadMapping;
- (void)handleEncryptionInfoChange:(id)a0;
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)a0;
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)a0;
- (BOOL)setupRTPWithIPInfo:(struct _VCMediaStreamTransportSetupInfo { unsigned char x0; union { struct { int x0; int x1; } x0; struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; } x1; struct { void *x0; void /* function */ *x1; BOOL x2; } x2; id x3; } x1; unsigned int x2; unsigned int x3; BOOL x4; } *)a0 error:(id *)a1;
- (id)initWithDelegate:(id)a0 handle:(struct tagHANDLE { int x0; } *)a1 localSSRC:(unsigned int)a2;
- (BOOL)generateReceptionReport:(struct _RTCP_RECEPTION_REPORT { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8; } *)a0 reportCount:(char *)a1;
- (BOOL)sendIntervalDidElapse:(int *)a0 remainingTime:(double *)a1;
- (void)onRTCPPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned char x0 : 5; unsigned char x1 : 1; unsigned char x2 : 2; unsigned char x3 : 8; unsigned short x4; } x0; union { struct tagSR_RTCP { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct tagRTCP_RRB { unsigned int x0; unsigned char x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x6[1]; } x0; struct tagRR_RTCP { unsigned int x0; struct tagRTCP_RRB { unsigned int x0; unsigned char x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x1[1]; } x1; struct tagSDES_RTCP { unsigned int x0; struct tagRTCPSDES { unsigned char x0; unsigned char x1; char x2[258]; } x1; } x2; struct tagBYE_RTCP { unsigned int x0; } x3; struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x4; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x5; struct tagFIR_RTCP { unsigned int x0; unsigned short x1[10]; } x6; struct tagNACK_RTCP { unsigned int x0; unsigned short x1; unsigned short x2; } x7; struct tagRTCP_PSFB_PLI { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; } x8; struct tagRTCP_PSFB_SLI { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x9; struct tagRTCP_PSFB_FIR { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned char x2; unsigned char x3[3]; } x10; struct tagRTCP_PSFB_TST { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x11; struct tagRTCP_PSFB_TST { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x12; struct tagRTCP_RTPFB_GNACK { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned short x1; unsigned short x2; } x13; struct tagRTCP_RTPFB_TMMB { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x14; struct tagRTCP_RTPFB_TMMB { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x15; struct tagRTCP_CUSTOM_SR { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; struct tagRTCP_CUSTOM_SENDER_INFO { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4 : 4; unsigned char x5 : 4; } x2; struct tagRTCP_CUSTOM_RECEPTION_REPORT { unsigned int x0; unsigned char x1 : 4; unsigned short x2 : 12; unsigned short x3; unsigned short x4; unsigned char x5; unsigned char x6; } x3[1]; } x16; struct tagRTCP_CUSTOM_RR { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; struct tagRTCP_CUSTOM_RECEIVER_INFO { unsigned char x0 : 4; unsigned char x1 : 4; } x2; struct tagRTCP_CUSTOM_RECEPTION_REPORT { unsigned int x0; unsigned char x1 : 4; unsigned short x2 : 12; unsigned short x3; unsigned short x4; unsigned char x5; unsigned char x6; } x3[1]; } x17; struct tagRTCP_CUSTOM_RCTL { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; struct tagRTCP_CUSTOM_RATE_CONTROL_INFO { unsigned char x0[20]; } x1; } x18; } x1; } *)a0 arrivalNTPTime:(union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
- (int)setupRTPWithTransportStreams;
- (void)registerRTCPCallback;
- (void)unregisterRTCPCallback;
- (BOOL)isSameSRTPConfig:(id)a0;
- (BOOL)setupRTPWithTransportSetupInfo:(struct _VCMediaStreamTransportSetupInfo { unsigned char x0; union { struct { int x0; int x1; } x0; struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; } x1; struct { void *x0; void /* function */ *x1; BOOL x2; } x2; id x3; } x1; unsigned int x2; unsigned int x3; BOOL x4; } *)a0 error:(id *)a1;
- (int)setupSRTP;
- (void)registerRTPPayloadMappings;
- (id)rxNetworkPayloads;
- (int)getCryptoSet:(struct tagSRTPExchangeInfo { char x0[65]; char x1[29]; void *x2; } *)a0 withMasterKey:(id)a1;
- (BOOL)setupRTPForIDS:(id *)a0;
- (BOOL)setupRTPWithSockets:(struct _VCMediaStreamTransportSetupInfo { unsigned char x0; union { struct { int x0; int x1; } x0; struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; } x1; struct { void *x0; void /* function */ *x1; BOOL x2; } x2; id x3; } x1; unsigned int x2; unsigned int x3; BOOL x4; } *)a0 error:(id *)a1;
- (BOOL)setupRTPWithNWConnection:(struct _VCMediaStreamTransportSetupInfo { unsigned char x0; union { struct { int x0; int x1; } x0; struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; } x1; struct { void *x0; void /* function */ *x1; BOOL x2; } x2; id x3; } x1; unsigned int x2; unsigned int x3; BOOL x4; } *)a0 error:(id *)a1;
- (int)getKeyDerivationCryptoSet:(struct { char x0[65]; int x1; char x2[65]; int x3; void *x4; } *)a0 withKeyMaterial:(id)a1;
- (void)reportRTCPPackets:(struct _RTCPPacketList { union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; unsigned char x1; struct tagRTCPPACKET *x2[10]; struct OpaqueCMBlockBuffer *x3; char *x4; unsigned long long x5; unsigned int x6; unsigned char x7[1472]; struct { struct _RTCPPacketList *x0; } x8; } *)a0;
- (void)configureForMultiway;
- (BOOL)setThrottlingInterval:(double)a0;

@end
