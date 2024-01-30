@class NSString, NSXPCConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AMSDaemonConnection : NSObject <AMSDServiceBrokerProtocol>

@property (retain, nonatomic) NSXPCConnection *sharedConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue;
@property (readonly, nonatomic) NSMutableArray *interruptionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleInterruption;
- (id)cookieServiceProxySyncWithError:(id *)a0;
- (void)_initializeConnection;
- (id)callService:(id)a0 then:(id /* block */)a1;
- (void)_handleInvalidation;
- (void)_errorForwardingProxyForServiceProxy:(id)a0 proxyReplyError:(id)a1 interface:(id)a2 proxyPromise:(id)a3;
- (void)addInterruptionHandler:(id /* block */)a0;
- (id)deviceMessengerProxyWithDelegate:(id)a0;
- (void)dealloc;
- (id)pushNotificationService;
- (id)_connectionProxyWithAccessBlock:(id /* block */)a0;
- (id)_serviceInterfaceForSelector:(SEL)a0;
- (id)purchaseServiceProxy;
- (id)init;
- (id)securityServiceProxyWithDelegate:(id)a0;
- (id)fraudReportServiceProxy;
- (void)_connectionSyncProxyWithAccessBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)cookieServiceProxy;

@end
