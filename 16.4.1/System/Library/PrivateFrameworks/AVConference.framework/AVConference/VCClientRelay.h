@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface VCClientRelay : NSObject {
    int _vtpSocket;
    int _idsSocket;
    NSObject<OS_dispatch_source> *_idsReadSource;
    NSObject<OS_dispatch_queue> *_idsReadQueue;
    BOOL _isConnectionResultSet;
    struct tagCONNRESULT { unsigned int dwCallID; int iResultCount; int iRole; unsigned int dwRemoteCallID; int proto; int bIfRelay; unsigned short wRelayServType; unsigned short wChannelNumber; struct tagIPPORT { int iFlags; char szIfName[16]; union { unsigned int dwIPv4; unsigned char abIPv6[16]; } IP; unsigned short wPort; } mbLocal; struct tagIPPORT { int iFlags; char szIfName[16]; union { unsigned int dwIPv4; unsigned char abIPv6[16]; } IP; unsigned short wPort; } mbRemote; struct tagIPPORT { int iFlags; char szIfName[16]; union { unsigned int dwIPv4; unsigned char abIPv6[16]; } IP; unsigned short wPort; } mbSrc; struct tagIPPORT { int iFlags; char szIfName[16]; union { unsigned int dwIPv4; unsigned char abIPv6[16]; } IP; unsigned short wPort; } mbDst; struct tagIPPORT { int iFlags; char szIfName[16]; union { unsigned int dwIPv4; unsigned char abIPv6[16]; } IP; unsigned short wPort; } mbRemoteSrc; struct tagIPPORT { int iFlags; char szIfName[16]; union { unsigned int dwIPv4; unsigned char abIPv6[16]; } IP; unsigned short wPort; } mbRelayExt; unsigned int dwRTT; int bIfLocalCellularQoS; int bIfRemoteCellularQoS; int iLocalCellTech; int iRemoteCellTech; unsigned short wCellularMTU; int bIfUpgrade; int bIfPrimary; int bIfReplaceOnly; struct tagCONNRESULT *next; int channelID; } _connectionResult;
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } _vtpDestination;
    unsigned int _vtpDestinationLength;
    struct OpaqueFigThread { } *_vtpReceiveTID;
}

@property (readonly) BOOL stopVTPReceiveThread;

- (int)stopRelay;
- (int)startRelay;
- (void)dealloc;
- (id)initWithIDSSocket:(int)a0;
- (BOOL)relayIDSPacket;
- (BOOL)relayVTPPacket;
- (void)setConnectionResult:(struct tagCONNRESULT { unsigned int x0; int x1; int x2; unsigned int x3; int x4; int x5; unsigned short x6; unsigned short x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x9; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x10; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x11; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x12; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x13; unsigned int x14; int x15; int x16; int x17; int x18; unsigned short x19; int x20; int x21; int x22; struct tagCONNRESULT *x23; int x24; } *)a0;
- (int)setupVTPSocket;

@end
