@class NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlowDivertFlow : NENexusFlow {
    NSUUID *_clientID;
    NWEndpoint *_internalEndpoint;
    NWParameters *_internalParameters;
    struct _NEFlow { } *_flowDivertFlow;
}

- (id)parameters;
- (id)endpoint;
- (void)dealloc;
- (void).cxx_destruct;
- (id)clientIdentifier;

@end
