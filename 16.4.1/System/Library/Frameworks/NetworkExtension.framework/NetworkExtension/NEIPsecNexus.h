@class NSArray;

@interface NEIPsecNexus : NEInternetNexus

@property (retain, nonatomic) NSArray *nexusInstances;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 delegate:(id)a1 enableWithChannelCount:(unsigned int)a2;
- (id)initWithName:(id)a0 delegate:(id)a1 enableWithChannelCount:(unsigned int)a2 netifRingSize:(unsigned int)a3 kernelPipeTxRingSize:(unsigned int)a4 kernelPipeRxRingSize:(unsigned int)a5;
- (id)initWithName:(id)a0 delegate:(id)a1 enableWithChannelCount:(unsigned int)a2 netifRingSize:(unsigned int)a3 kernelPipeTxRingSize:(unsigned int)a4 kernelPipeRxRingSize:(unsigned int)a5 execUUID:(id)a6;
- (id)initWithName:(id)a0 delegate:(id)a1 shouldCreateKernelChannel:(BOOL)a2;
- (BOOL)setDefaultInputHandler:(struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *)a0;
- (void)setRemotePacketProxy:(id)a0;

@end
