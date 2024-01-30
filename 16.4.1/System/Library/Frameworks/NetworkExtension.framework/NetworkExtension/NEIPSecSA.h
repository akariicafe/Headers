@class NWAddressEndpoint, NSString, NSData;

@interface NEIPSecSA : NSObject <NEPrettyDescription, NSCopying> {
    unsigned int _spi;
    unsigned int _internalSAID;
}

@property (readonly) unsigned int spi;
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
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initInboundSA;
- (id)initInboundSAWithSPI:(unsigned int)a0;
- (id)initOutboundSAWithSPI:(unsigned int)a0;

@end
