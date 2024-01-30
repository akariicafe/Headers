@class NWPollHandler, NSMutableDictionary, NSMutableSet, NWUsageMonitor, NSObject, NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue, NWUsageManagerDelegate;

@interface NWUsageManager : NSObject {
    int _interfaceTraceFd;
    char *_iftracebuf;
    unsigned int _continuationCount;
    unsigned long long _currentPollReference;
    unsigned long long _nextPollReference;
    _Atomic unsigned long long _pollsOutstanding;
    struct provider_counts { unsigned long long numSrcsAdded; unsigned long long numUpdatesOnOpen; unsigned long long numUpdatesOnPoll; unsigned long long numUpdatesOnEvent; unsigned long long numUpdatesOnClose; } _providerCounts[11];
    struct combined_counts { unsigned long long numRemoves; unsigned long long numRemovesAfterDrop; unsigned long long numRemovesAfterFilter; unsigned long long numRemoveSources; unsigned long long numRemoveSourcesAfterDrop; unsigned long long numRemoveSourcesAfterFilter; } _combinedCounts;
}

@property (retain) NSObject<OS_dispatch_source> *readSource;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property int sockfd;
@property (retain) NSMutableDictionary *internalSources;
@property (retain) NSMutableSet *interfaceSources;
@property (retain) NWUsageMonitor *usageMonitor;
@property unsigned long long currentQueryAllReference;
@property unsigned long long querySequenceNumber;
@property char *readBuffer;
@property (retain) NSMutableArray *queuedPolls;
@property (retain) NWPollHandler *activePoll;
@property BOOL configured;
@property (getter=isInvalidated) BOOL invalidated;
@property (weak, nonatomic) id<NWUsageManagerDelegate> delegate;

- (BOOL)enumerateSelectFlows:(id)a0 deliveryBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)_handleMessage:(struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } *)a0 length:(long long)a1;
- (void)_startPoll:(id)a0;
- (id)stateDictionary;
- (id)getState;
- (void)ignoreFlow:(unsigned long long)a0;
- (void)_handleRemoveForSource:(id)a0;
- (BOOL)configure:(id)a0;
- (void)_setThreshold:(unsigned long long)a0 onInterface:(unsigned int)a1;
- (void)_handleReadEvent;
- (void)_sendUpdateRequestMessage:(unsigned long long)a0;
- (void)enumerateChangedFlowsUsingBlock:(id /* block */)a0;
- (BOOL)enumerateSelectSources:(id)a0 flowDeliveryBlock:(id /* block */)a1 genericDeliveryBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void)_setInterfaceTraceFd:(int)a0;
- (void)_sendMessage:(struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } *)a0 length:(long long)a1;
- (id)_stage2InitWithQueue:(id)a0;
- (void)_noteInterfaceSrcRef:(unsigned long long)a0 forInterface:(unsigned int)a1 threshold:(unsigned long long)a2;
- (int)flowEnumerationCurrentUsage;
- (void)enumerateSelectItems:(id)a0 deliveryBlock:(id /* block */)a1;
- (void)enumerateSelectSources:(id)a0 flowDeliveryBlock:(id /* block */)a1 genericDeliveryBlock:(id /* block */)a2;
- (BOOL)enumerateItemsUsingBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)_handleCounts:(struct nstat_msg_src_counts { struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } x0; unsigned long long x1; unsigned long long x2; struct nstat_counts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } x3; } *)a0;
- (void)ignoreSource:(unsigned long long)a0;
- (void)dumpState;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (void)enumerateFlowsUsingBlock:(id /* block */)a0;
- (BOOL)_setThresholds:(id)a0;
- (void)_removeSourceInternal:(unsigned long long)a0;
- (void)dealloc;
- (void)_restartPoll:(id)a0;
- (void)_addAllForProvider:(int)a0 filter:(unsigned long long)a1 events:(unsigned long long)a2;
- (BOOL)reconfigure:(id)a0;
- (BOOL)enumerateFlowsUsingBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)enumerateSelectFlows:(id)a0 deliveryBlock:(id /* block */)a1;
- (void)_trace:(char *)a0;
- (BOOL)initialConfigure:(id)a0;
- (void)invalidate;
- (void)_startQueuedPoll;
- (BOOL)enumerateSelectItems:(id)a0 deliveryBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)_sendRemoveSource:(unsigned long long)a0;
- (void)_handleCompletion:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_sendPoll;
- (id)initWithQueue:(id)a0;
- (void)_traceMemoryBuf:(char *)a0 length:(long long)a1 tag:(char *)a2;

@end
