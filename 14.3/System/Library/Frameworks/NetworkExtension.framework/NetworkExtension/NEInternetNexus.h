@class NWRemotePacketProxy;

@interface NEInternetNexus : NENexus

@property struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *utunProtocol;
@property (retain) NWRemotePacketProxy *packetProxy;
@property (readonly) struct NEVirtualInterface_s { } *virtualInterface;

- (id)initWithName:(id)a0 delegate:(id)a1 shouldCreateKernelChannel:(BOOL)a2;
- (BOOL)setDefaultInputHandler:(struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *)a0;
- (void)setRemotePacketProxy:(id)a0;
- (BOOL)setUseFlowswitch:(BOOL)a0;
- (void)connectNewFlow:(id)a0;
- (void)disconnectFlow:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)a0 delegate:(id)a1;

@end
