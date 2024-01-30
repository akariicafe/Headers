@class NSMutableArray, NSObject;
@protocol NWRemotePacketProxyDelegate;

@interface NWRemotePacketProxy : NSObject

@property (weak) NSObject<NWRemotePacketProxyDelegate> *delegate;
@property (retain) NSMutableArray *writeRequests;
@property struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *packetProtocol;
@property struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *defaultOutputHandler;
@property struct nw_hash_table { } *packetHashTable;
@property (readonly, nonatomic) struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *protocol;
@property (nonatomic) unsigned int receiveWindowPacketCount;

- (id)initWithDelegate:(id)a0;
- (void)setDefaultOutputProtocolHandler:(struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *)a0;
- (void)setOutputProtocolHandler:(struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *)a0 local:(id)a1 remote:(id)a2 ipProtocol:(unsigned char)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *)outputHandlerForPacket:(id)a0 inbound:(BOOL)a1;
- (BOOL)receiveRemotePacket:(id)a0;

@end
