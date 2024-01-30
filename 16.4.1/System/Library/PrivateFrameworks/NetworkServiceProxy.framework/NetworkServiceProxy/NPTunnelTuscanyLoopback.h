@class NPTunnelFlow;

@interface NPTunnelTuscanyLoopback : NPTunnelTuscany

@property void *window;
@property (retain) NPTunnelFlow *flow;

- (unsigned long long)initialWindowSize;
- (void)write:(id)a0;
- (void)removeFlow:(unsigned long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)addNewFlow:(id)a0;
- (void)cancelConnection;
- (void)cancelConnectionTimer;
- (void)createTuscanyClient;
- (long long)currentMTU;
- (unsigned int)dayPassSessionCounter;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1 appRule:(id)a2 flowProperties:(id)a3 onRamp:(id)a4 delegate:(id)a5;
- (unsigned long long)maxFrameSize;
- (void)pingWithCompletionHandler:(id /* block */)a0;
- (BOOL)selectBestEdge;
- (void)sendUsageReportWithRTT:(unsigned long long)a0 geohash:(id)a1 fallbackReason:(long long)a2;
- (void)startConnectionTimer;

@end
