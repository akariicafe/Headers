@class NPTunnelFlow;

@interface NPTunnelTuscanyLoopback : NPTunnelTuscany

@property void *window;
@property (retain) NPTunnelFlow *flow;

- (unsigned long long)maxFrameSize;
- (void)removeFlow:(unsigned long long)a0;
- (unsigned long long)initialWindowSize;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (void)dealloc;
- (unsigned int)dayPassSessionCounter;
- (void)cancelConnection;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1 appRule:(id)a2 flowProperties:(id)a3 onRamp:(id)a4 delegate:(id)a5;
- (BOOL)addNewFlow:(id)a0;
- (void)createTuscanyClient;
- (long long)currentMTU;
- (BOOL)selectBestEdge;
- (void)startConnectionTimer;
- (void)cancelConnectionTimer;
- (void)sendUsageReportWithRTT:(unsigned long long)a0 geohash:(id)a1 fallbackReason:(long long)a2;
- (void)pingWithCompletionHandler:(id /* block */)a0;

@end
