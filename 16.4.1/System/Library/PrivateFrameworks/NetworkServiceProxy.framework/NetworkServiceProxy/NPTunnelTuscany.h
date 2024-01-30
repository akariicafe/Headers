@class NSObject, NPTuscanyOnRamp, NSDate;
@protocol OS_nw_connection;

@interface NPTunnelTuscany : NPTunnel {
    unsigned long long _nextFlowID;
    NSObject<OS_nw_connection> *_UDPSession;
    void *_connectionTimer;
    BOOL _shouldReportUsage;
    void *_pingTimer;
    void *_usageReportTimer;
    NPTuscanyOnRamp *_onRamp;
    unsigned int _waldoTimestamp;
}

@property (copy, nonatomic) id /* block */ pendingPingCompletionHandler;
@property (nonatomic) BOOL isFirstTunnel;
@property (readonly, nonatomic) unsigned int dayPassSessionCounter;
@property (readonly, nonatomic) unsigned long long maxFrameSize;
@property (nonatomic) void *clientRef;
@property (readonly, nonatomic) long long currentMTU;
@property (nonatomic) BOOL ignoreWaldoTimestamp;
@property (readonly, nonatomic) NSDate *dayPassCreationDate;

- (unsigned long long)initialWindowSize;
- (void)dealloc;
- (BOOL)start;
- (void).cxx_destruct;
- (void)handleHelloAck:(unsigned int)a0;
- (void)handleConnected;
- (void)handleReadData:(struct nw_frame_array_s { struct nw_frame *x0; struct nw_frame **x1; } *)a0;
- (void)acknowledgeData:(unsigned long long)a0 sentToFlow:(id)a1;
- (unsigned long long)allocateFlowID;
- (BOOL)canHandleMoreData;
- (void)cancelConnection;
- (void)cancelConnectionTimer;
- (void)closeFlow:(id)a0;
- (id)createConnectionInfo;
- (void)createTuscanyClient;
- (void)destroyConnection;
- (BOOL)flowIsFirstFlow:(id)a0;
- (void)handleConnectionError;
- (void)handleDataWrittenWithError:(int)a0;
- (void)handleDisconnected;
- (void)handleEOF;
- (void)handleFallbackForFlow:(id)a0;
- (void)handleFlowUsedTunnel;
- (void)handleInputAvailable;
- (void)handlePingResponseRTT:(unsigned long long)a0 geohash:(id)a1;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1 appRule:(id)a2 flowProperties:(id)a3 onRamp:(id)a4 delegate:(id)a5;
- (BOOL)isTFOProbeSucceeded;
- (unsigned long long)maxDataSendSizeForFlow:(id)a0;
- (void)pingWithCompletionHandler:(id /* block */)a0;
- (long long)sendData:(id)a0 forFlow:(id)a1;
- (void)sendDataOnUDPSession:(id)a0;
- (void)sendUsageReportWithRTT:(unsigned long long)a0 geohash:(id)a1 fallbackReason:(long long)a2;
- (void)startConnectionTimer;
- (void)writeInitialData;

@end
