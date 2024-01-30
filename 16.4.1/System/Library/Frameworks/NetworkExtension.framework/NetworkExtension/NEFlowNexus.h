@class NWRemoteConnectionDirector, NSData, NSMutableSet, NSObject, NEFlowDivertFileHandle;
@protocol OS_dispatch_queue;

@interface NEFlowNexus : NENexus {
    unsigned int _flowDivertControlUnit;
    struct _NEFlowDirector { } *_flowDivertDirector;
    NEFlowDivertFileHandle *_flowDivertControl;
    NSObject<OS_dispatch_queue> *_flowDivertQueue;
    NSData *_flowDivertTokenHMACKey;
    NWRemoteConnectionDirector *_connectionDirector;
    NSMutableSet *_browseAssertions;
}

@property (nonatomic) BOOL supportsBrowseRequests;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)setDiscoveredEndpoints:(id)a0 forClient:(id)a1;
- (id)initWithName:(id)a0 delegate:(id)a1;
- (void)handleAssertFromClient:(id)a0;
- (void)handleUnassertFromClient:(id)a0;
- (void)setRemoteConnectionDirector:(id)a0;

@end
