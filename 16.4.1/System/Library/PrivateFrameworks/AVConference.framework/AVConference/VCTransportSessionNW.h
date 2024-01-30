@class NSString, NSObject;
@protocol OS_nw_connection;

@interface VCTransportSessionNW : VCTransportSession {
    NSObject<OS_nw_connection> *_rtpConnection;
    NSObject<OS_nw_connection> *_rtcpConnection;
    NSString *_rtpConnectionID;
    NSString *_rtcpConnectionID;
    BOOL _isSharedConnection;
    BOOL _didScheduleReceive;
    int _networkInterfaceType;
    BOOL _isIPv6;
    unsigned int _networkMTU;
}

- (BOOL)isIPv6;
- (void)dealloc;
- (void)stop;
- (void)start;
- (struct tagVCNWConnectionMonitor { } *)createNWMonitor;
- (int)dupRTPNWConnectionBackingSocket;
- (void)createNWConnection:(id *)a0 forConnectionID:(id)a1;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (int)dupRTCPNWConnectionBackingSocket;
- (int)dupRTPNWConnectionBackingSocketForNWConnection:(id)a0;
- (void)handleStateChanges:(int)a0 error:(id)a1 semaphore:(id)a2 operationResult:(BOOL *)a3;
- (id)initWithRTPNWConnectionID:(id)a0 RTCPNWConnectionID:(id)a1 handlerQueue:(id)a2 context:(void *)a3 notificationHandler:(void /* function */ *)a4 eventHandler:(void /* function */ *)a5;
- (void)initializeInterfaceType;
- (BOOL)initializeIsIPv6;
- (BOOL)initializeNetworkMTU;
- (int)networkInterfaceType;
- (unsigned int)networkMTU;
- (BOOL)setStateChangeHandlerForConnection:(id)a0 result:(BOOL *)a1 semaphore:(id)a2;
- (BOOL)setupNWConnection:(id)a0;

@end
