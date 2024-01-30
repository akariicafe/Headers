@class NSString, NWAddressEndpoint, NSArray, NWEndpoint, NSSet;

@interface NEIKEv2IKESAConfiguration : NSObject <NSCopying> {
    NSArray *_proposals;
}

@property (retain) NWEndpoint *localEndpoint;
@property (retain) NWEndpoint *remoteEndpoint;
@property (retain) NSString *outgoingInterfaceName;
@property BOOL randomizeLocalPort;
@property BOOL serverMode;
@property BOOL allowRedirect;
@property BOOL disableSwitchToNATTPorts;
@property BOOL allowTCPEncapsulation;
@property BOOL useTLSForTCPEncapsulation;
@property BOOL forceUDPEncapsulation;
@property BOOL preferInitiatorProposalOrder;
@property unsigned short tcpEncapsulationPort;
@property unsigned int nonceSize;
@property (retain) NWAddressEndpoint *redirectedFromServer;
@property (copy, nonatomic) NSArray *proposals;
@property (retain) NSArray *customIKESAInitPayloads;
@property (retain) NSArray *customIKESAInitVendorPayloads;
@property (retain) NSSet *extraSupportedSignatureHashes;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
