@class NSUUID, NSMutableDictionary, NSPAppRule, NSDate, NSObject;
@protocol NPTunnelDelegate, OS_dispatch_data, OS_nw_path, OS_nw_parameters, OS_nw_endpoint, OS_nw_interface;

@interface NPTunnel : NSObject {
    struct nw_protocol { unsigned char flow_id[16]; struct nw_protocol_identifier *identifier; struct nw_protocol_callbacks *callbacks; struct nw_protocol *output_handler; void *handle; struct nw_protocol *default_input_handler; void *output_handler_context; } _protocol;
    NSObject<OS_dispatch_data> *_savedData;
    void *_idleTimer;
}

@property (nonatomic) BOOL eof;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *localEndpoint;
@property (retain, nonatomic) NSObject<OS_nw_path> *path;
@property (nonatomic) BOOL handledDisconnected;
@property (nonatomic) BOOL disableIdleTimeout;
@property (nonatomic) long long connectionState;
@property (retain, nonatomic) NSDate *connectionStartDate;
@property (nonatomic) int error;
@property (nonatomic) long long fallbackReason;
@property (nonatomic) double timeToFirstRequest;
@property (nonatomic) double timeToFirstByte;
@property (nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *protocol;
@property (readonly, nonatomic) NSObject<OS_nw_parameters> *parameters;
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint;
@property (readonly, nonatomic) NSObject<OS_nw_interface> *outputInterface;
@property (readonly, weak, nonatomic) id<NPTunnelDelegate> delegate;
@property (readonly, nonatomic) NSMutableDictionary *flows;
@property (readonly, nonatomic) NSPAppRule *appRule;
@property (readonly, nonatomic) BOOL canHandleMoreData;
@property (readonly, nonatomic) unsigned long long initialWindowSize;
@property (readonly, nonatomic) BOOL isConnectionAlive;
@property (readonly, nonatomic) unsigned long long *timestamps;
@property (readonly, nonatomic) BOOL isTFOProbeSucceeded;
@property (readonly, nonatomic) BOOL isReadyForData;

+ (void)initializeProtocol;

- (void)removeFlow:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (void)dealloc;
- (BOOL)start;
- (void)closeFlow:(id)a0;
- (void)destroyConnection;
- (void)cancelConnection;
- (BOOL)addNewFlow:(id)a0;
- (BOOL)hasFlow:(unsigned long long)a0;
- (id)createConnectionInfo;
- (id)handleFlowClosed:(unsigned long long)a0 withFallbackReason:(long long)a1;
- (void)sendData:(id)a0 toClientFlow:(unsigned long long)a1;
- (void)increaseWindowSizeForFlow:(unsigned long long)a0 byBytes:(unsigned long long)a1;
- (BOOL)flowIsFirstFlow:(id)a0;
- (void)acknowledgeData:(unsigned long long)a0 sentToFlow:(id)a1;
- (long long)sendData:(id)a0 forFlow:(id)a1;
- (void)handleFlowUsedTunnel;
- (void)handleFallbackForFlow:(id)a0;
- (unsigned long long)maxDataSendSizeForFlow:(id)a0;
- (void)handleConnected;
- (void)handleDisconnected;
- (void)readMinimumLength:(unsigned long long)a0 maximumLength:(unsigned long long)a1;
- (void)handleCanHandleMoreData;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1 appRule:(id)a2 flowProperties:(id)a3 delegate:(id)a4;
- (void)handleReady;
- (void)handleInputAvailable;
- (void)handleReadData:(struct nw_frame_array_s { struct nw_frame *x0; struct nw_frame **x1; } *)a0;
- (void)handleEOF;
- (void)handleDataWrittenWithError:(int)a0;
- (void)writeInitialData;
- (unsigned long long)allocateFlowID;
- (void)startIdleTimer;
- (void)teardownOutputHandler;
- (void)handleConnectionIsDisconnected;
- (void)handleOutputAvailable;

@end
