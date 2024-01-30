@class NSString, NSUUID, NSData, VCDatagramChannelIDS, IDSDataChannelLinkContext;

@interface VCConnectionIDS : VCConnection <VCConnectionProtocol> {
    IDSDataChannelLinkContext *_linkContext;
    int _localCellTech;
    int _remoteCellTech;
    int _connectionMTU;
}

@property (readonly) unsigned int datagramChannelToken;
@property (readonly) VCDatagramChannelIDS *datagramChannel;
@property (readonly) unsigned char linkID;
@property (readonly) NSString *relaySessionToken;
@property (readonly) NSData *sharedDigestKey;
@property (readonly) BOOL isLocalOnWiFi;
@property (readonly) BOOL isRemoteOnWiFi;
@property (readonly) BOOL isLocalOnCellular;
@property (readonly) BOOL isRemoteOnCellular;
@property (readonly) BOOL isLocalOn5G;
@property (readonly) BOOL isRemoteOn5G;
@property (readonly) BOOL isLocalExpensive;
@property (readonly) BOOL isRemoteExpensive;
@property (readonly) BOOL isLocalConstrained;
@property (readonly) BOOL isRemoteConstrained;
@property (readonly) BOOL isLocalDelegated;
@property (readonly) BOOL isRemoteDelegated;
@property (readonly) BOOL isIPv6;
@property int connectionMTU;
@property (readonly) int connectionId;
@property (readonly) BOOL isRelay;
@property (readonly) BOOL isVPN;
@property (readonly) BOOL serverIsDegraded;
@property (readonly) NSUUID *connectionUUID;
@property (readonly) int localConnectionType;
@property (readonly) int remoteConnectionType;
@property int localCellTech;
@property int remoteCellTech;
@property int priority;
@property (readonly) unsigned int type;
@property (readonly) NSString *localInterfaceTypeString;
@property (readonly) NSString *remoteInterfaceTypeString;
@property unsigned int uplinkBitrateCap;
@property unsigned int downlinkBitrateCap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)worstCaseNetworkOverheadInBytesWithNumOfStreamId:(int)a0 isPriorityIncluded:(BOOL)a1;

- (void)dealloc;
- (int)networkOverheadInBytesWithNumOfStreamId:(int)a0 isPriorityIncluded:(BOOL)a1;
- (BOOL)isSameAsConnection:(id)a0;
- (BOOL)isOnSameInterfacesWithConnection:(id)a0;
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x0; union { struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; struct { BOOL x0; unsigned short x1; } x2; } x0; struct { int x0; int x1; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x2; } x1; struct { unsigned int x0; struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } x1; } x2; struct { id x0; } x3; } x1; struct tagVCSourceDestinationInfo *x2; void *x3; } *)a0;
- (BOOL)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x0; union { struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; struct { BOOL x0; unsigned short x1; } x2; } x0; struct { int x0; int x1; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x2; } x1; struct { unsigned int x0; struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } x1; } x2; struct { id x0; } x3; } x1; struct tagVCSourceDestinationInfo *x2; void *x3; } *)a0;
- (int)cellTechForSoMask:(unsigned int)a0 fallbackTo:(int)a1;
- (id)connectionQRSessionID;
- (BOOL)isOnSameQRSessionWithConnection:(id)a0;
- (BOOL)matchesChannelTokenWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x0; union { struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; struct { BOOL x0; unsigned short x1; } x2; } x0; struct { int x0; int x1; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x2; } x1; struct { unsigned int x0; struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } x1; } x2; struct { id x0; } x3; } x1; struct tagVCSourceDestinationInfo *x2; void *x3; } *)a0;
- (id)initWithLinkContext:(id)a0 dataChannelToken:(unsigned int)a1;
- (void)setCellularMTU:(int)a0;
- (BOOL)isOnSameInterfacesAndQRSessionWithConnection:(id)a0;

@end
