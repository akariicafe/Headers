@class NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlowDivertFlow : NENexusFlow

@property (retain) NSUUID *clientID;
@property (retain) NWEndpoint *internalEndpoint;
@property (retain) NWParameters *internalParameters;
@property struct _NEFlow { } *flowDivertFlow;

- (id)clientIdentifier;
- (id)parameters;
- (id)endpoint;
- (id)initWithFlowDivertFlow:(struct _NEFlow { } *)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
