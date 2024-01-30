@class VCNetworkAddress;

@interface VCTransportSessionSocket : VCTransportSession {
    int _rtpVFD;
    int _rtcpVFD;
    BOOL _isRTPUsable;
    BOOL _isRTCPUsable;
    BOOL _isSharedSocket;
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } _rtpIPPort;
    unsigned int _rtpIPPortLength;
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } _rtcpIPPort;
    unsigned int _rtcpIPPortLength;
    VCNetworkAddress *_remoteAddress;
    int _networkInterfaceType;
    char _networkInterfaceName[16];
    BOOL _isIPv6;
    unsigned int _networkMTU;
}

- (id)streams;
- (BOOL)isIPv6;
- (void)dealloc;
- (void)stop;
- (void)start;
- (struct tagVCNWConnectionMonitor { } *)createNWMonitor;
- (int)configureParamatersForStreamType:(unsigned int)a0 socket:(int *)a1 packetType:(int *)a2 remoteIP:(struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *)a3 remoteIPLength:(unsigned int *)a4;
- (int)connectSocket:(int)a0 remoteAddress:(id)a1 storage:(struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *)a2;
- (int)createAndConfigureVFDForSocket:(int)a0 packetType:(int)a1 remoteIP:(struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *)a2 remoteIPLength:(unsigned int)a3 vfd:(int *)a4;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (int)createVFD:(int *)a0 realSocket:(int)a1 sockAddr:(struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *)a2 length:(unsigned int *)a3 isUsable:(BOOL *)a4;
- (id)initWithRTPSocket:(int)a0 RTCPSocket:(int)a1;
- (id)initWithRTPSocket:(int)a0 RTCPSocket:(int)a1 notificationHandler:(void /* function */ *)a2 eventHandler:(void /* function */ *)a3 handlerQueue:(id)a4 context:(void *)a5;
- (id)initWithSharedSocket:(int)a0;
- (id)initWithSocketDictionary:(id)a0 notificationHandler:(void /* function */ *)a1 eventHandler:(void /* function */ *)a2 handlerQueue:(id)a3 context:(void *)a4;
- (void)initializeInterfaceTypeWithSocket:(int)a0;
- (int)initializeNetworkInfoWithSocket:(int)a0;
- (int)networkInterfaceType;
- (unsigned int)networkMTU;
- (int)setAudioRTCPStreamParamatersForSocket:(int *)a0 packetType:(int *)a1 remoteIP:(struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *)a2 remoteIPLength:(unsigned int *)a3;
- (int)setAudioRTPStreamParamatersForSocket:(int *)a0 packetType:(int *)a1 remoteIP:(struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *)a2 remoteIPLength:(unsigned int *)a3;
- (int)setBasebandNotificationStreamParamatersForSocket:(int *)a0 packetType:(int *)a1 remoteIP:(struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *)a2 remoteIPLength:(unsigned int *)a3;
- (int)setRemoteAddress:(id)a0 remoteRTCPPort:(int)a1;
- (int)setVideoRTCPStreamParamatersForSocket:(int *)a0 packetType:(int *)a1 remoteIP:(struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *)a2 remoteIPLength:(unsigned int *)a3;
- (int)setVideoRTPStreamParamatersForSocket:(int *)a0 packetType:(int *)a1 remoteIP:(struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *)a2 remoteIPLength:(unsigned int *)a3;
- (int)updateTransportStream:(struct OpaqueVCTransportStream { } *)a0;

@end
