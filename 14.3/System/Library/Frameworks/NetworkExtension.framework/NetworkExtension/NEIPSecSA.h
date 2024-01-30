@class NWAddressEndpoint, NSString, NSData;

@interface NEIPSecSA : NSObject <NSCopying>

@property unsigned int internalSAID;
@property unsigned int spi;
@property (readonly) int direction;
@property int mode;
@property int protocol;
@property (retain) NWAddressEndpoint *localAddress;
@property (retain) NWAddressEndpoint *remoteAddress;
@property (retain) NSString *boundInterfaceName;
@property (retain) NSString *tunnelInterfaceName;
@property unsigned int replayWindowSize;
@property unsigned long long lifetimeSeconds;
@property int encryptionAlgorithm;
@property (retain) NSData *encryptionKey;
@property int authenticationAlgorithm;
@property (retain) NSData *authenticationKey;
@property BOOL natTraversalEnabled;
@property BOOL natDetectedOnPeer;
@property BOOL natKeepaliveEnabled;
@property BOOL natKeepaliveOffloadEnabled;
@property unsigned long long natKeepaliveIntervalSeconds;
@property unsigned long long natKeepaliveOffloadIntervalSeconds;
@property unsigned short natTraversalPort;
@property unsigned short natTraversalSrcPort;
@property BOOL sequencePerTrafficClass;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initInboundSAWithSPI:(unsigned int)a0;
- (id)createDictionary;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)invalidate;
- (id)initInboundSA;
- (id)initOutboundSAWithSPI:(unsigned int)a0;

@end
