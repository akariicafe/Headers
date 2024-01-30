@class NSString, NSObject;
@protocol OS_nw_connection, OS_dispatch_queue;

@interface VCTransportSessionNW : VCTransportSession {
    NSString *_connectionID;
    struct tagVCNWConnectionMonitor { } *_monitor;
    void /* function */ *_notificationHandler;
    void /* function */ *_packetEventHandler;
    void *_handlerContext;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    BOOL _didScheduleReceive;
    int _networkInterfaceType;
    BOOL _isIPv6;
    unsigned int _networkMTU;
}

@property (readonly) NSObject<OS_nw_connection> *nwConnection;

- (BOOL)isIPv6;
- (void)start;
- (void)dealloc;
- (int)networkInterfaceType;
- (void)stop;
- (BOOL)setupNWConnection;
- (BOOL)initializeNetworkMTU;
- (BOOL)initializeIsIPv6;
- (void)initializeInterfaceType;
- (void)destroyNWMonitorInternal;
- (void)handleStateChanges:(int)a0 error:(id)a1 semaphore:(id)a2 operationResult:(BOOL *)a3;
- (BOOL)setStateChangeHandlerWithResult:(BOOL *)a0 semaphore:(id)a1;
- (void)createNWMonitor;
- (void)destroyNWMonitor;
- (id)initWithNWConnectionID:(id)a0 handlerQueue:(id)a1 context:(void *)a2 notificationHandler:(void /* function */ *)a3 eventHandler:(void /* function */ *)a4;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (int)dupNWConnectionBackingSocket;
- (unsigned int)networkMTU;

@end
