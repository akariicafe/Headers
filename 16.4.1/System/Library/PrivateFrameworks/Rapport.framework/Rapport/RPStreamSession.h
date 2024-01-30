@class CUWiFiManager, NSString, NSUUID, NSData, RPConnection, NSObject, CUTCPServer;
@protocol OS_nw_path_evaluator, RPMessageable, OS_dispatch_queue, OS_nw_listener;

@interface RPStreamSession : NSObject <NSSecureCoding> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_nw_listener> *_nwListener;
    NSObject<OS_nw_path_evaluator> *_nwPathEvaluator;
    unsigned char _ourCurveSK[32];
    union { struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } _peerIP;
    int _peerPort;
    BOOL _prepareOnly;
    RPConnection *_rpCnx;
    CUTCPServer *_tcpServer;
    BOOL _trafficRegistrationCalled;
    CUWiFiManager *_wifiManager;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *destinationString;
@property (copy, nonatomic) NSUUID *nwClientID;
@property (copy, nonatomic) NSData *pskData;
@property (nonatomic) BOOL serverMode;
@property (copy, nonatomic) id /* block */ streamAcceptHandler;
@property (copy, nonatomic) NSData *streamKey;
@property (nonatomic) int streamSocket;
@property (nonatomic) unsigned long long delegatedProcessUPID;
@property (copy, nonatomic) id /* block */ disconnectHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ flowControlWriteChangedHandler;
@property (readonly, nonatomic) int flowControlWriteState;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) id<RPMessageable> messenger;
@property (copy, nonatomic) id /* block */ receivedEventHandler;
@property (copy, nonatomic) id /* block */ receivedRequestHandler;
@property (copy, nonatomic) id /* block */ connectionReadyHandler;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) id /* block */ statusChangedHandler;
@property (readonly, nonatomic) unsigned long long statusFlags;
@property (nonatomic) unsigned int streamFlags;
@property (copy, nonatomic) NSString *streamID;
@property (nonatomic) int streamType;
@property (nonatomic) int streamQoS;
@property (nonatomic) unsigned int trafficFlags;
@property (copy, nonatomic) NSString *trafficSessionID;

- (void)encodeWithCoder:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)prepareWithCompletion:(id /* block */)a0;
- (void)_updateTrafficRegistration;
- (void)sendEventID:(id)a0 event:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)sendRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (void)_clientRPConnectionPrepareResponse:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_clientRPConnectionPrepareWithCompletion:(id /* block */)a0;
- (void)_clientRPConnectionStartWithCompletion:(id /* block */)a0;
- (void)_clientUDPNWPathNextWithEndpoint:(id)a0 nwInterface:(id)a1 selfMACData:(id)a2 usb:(BOOL)a3 completion:(id /* block */)a4;
- (void)_clientUDPNWPathStartResponse:(id)a0 options:(id)a1 localEndpoint:(id)a2 nwInterface:(id)a3 selfIPString:(id)a4 usb:(BOOL)a5 completion:(id /* block */)a6;
- (void)_clientUDPNWPathStartWithCompletion:(id /* block */)a0;
- (void)_clientUDPSocketStartResponse:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_clientUDPSocketStartWithCompletion:(id /* block */)a0;
- (unsigned int)_getSockAddrInterfaceType:(const void *)a0;
- (id)_lowLatencySelfAddressString:(id *)a0;
- (void)_serverRPConnectionHandleConnectionAccepted:(int)a0;
- (void)_serverRPConnectionHandleConnectionStarted:(id)a0;
- (void)_serverRPConnectionStartRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_serverUDPNWPathNextWithEndpoint:(id)a0 nwInterface:(id)a1 selfMACData:(id)a2 peerIP:(union { struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x0; struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x1; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x2; })a3 peerMACData:(id)a4 usb:(BOOL)a5 responseHandler:(id /* block */)a6;
- (void)_serverUDPNWPathStartRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_serverUDPSocketStartRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (BOOL)_startServerConnectionAndReturnError:(id *)a0;
- (void)_updateTrafficRegistrationForDestination:(id)a0;
- (void)_updateTrafficRegistrationForIP:(const union { struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x0; struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x1; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x2; } *)a0;
- (void)acceptedByServer;
- (void)activateForServerRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)setStreamQoSOnSocket:(int)a0;
- (void)startServerConnectionWithCompletion:(id /* block */)a0;

@end
