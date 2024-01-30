@class NWRemoteConnectionDirector, NSData, NSMutableSet, NSObject, NEFlowDivertFileHandle;
@protocol OS_dispatch_queue;

@interface NEFlowNexus : NENexus

@property struct _NEFlowDirector { } *flowDivertDirector;
@property (retain) NEFlowDivertFileHandle *flowDivertControl;
@property (retain) NSObject<OS_dispatch_queue> *flowDivertQueue;
@property unsigned int flowDivertControlUnit;
@property (retain) NSData *flowDivertTokenHMACKey;
@property (retain) NWRemoteConnectionDirector *connectionDirector;
@property (retain) NSMutableSet *browseAssertions;
@property (nonatomic) BOOL supportsBrowseRequests;

- (BOOL)setupFlowDivertDirector;
- (BOOL)setupFlowDivertPolicies;
- (BOOL)installFlowDivertRules;
- (void)handleAssertFromClient:(id)a0;
- (void)handleUnassertFromClient:(id)a0;
- (BOOL)setDiscoveredEndpoints:(id)a0 forClient:(id)a1;
- (void)setRemoteConnectionDirector:(id)a0;
- (void)connectNewFlow:(id)a0;
- (void)disconnectFlow:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)flowDivertNewFlow:(struct _NEFlow { } *)a0 completionHandler:(id /* block */)a1;
- (id)initWithName:(id)a0 delegate:(id)a1;

@end
