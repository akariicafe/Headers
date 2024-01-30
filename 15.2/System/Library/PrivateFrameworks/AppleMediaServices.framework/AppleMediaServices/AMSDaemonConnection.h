@class NSString, NSXPCConnection, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AMSDaemonConnection : NSObject <AMSDServiceBrokerProtocol>

@property (retain, nonatomic) NSXPCConnection *sharedConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue;
@property (readonly, nonatomic) NSMutableSet *activePromises;
@property (readonly, nonatomic) NSMutableArray *interruptionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleInvalidation;
- (void)_handleInterruption;
- (id)fraudReportServiceProxy;
- (id)securityServiceProxyWithDelegate:(id)a0;
- (id)callService:(id)a0 then:(id /* block */)a1;
- (void)_checkInPromise:(id)a0;
- (void)addInterruptionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)deviceMessengerProxyWithDelegate:(id)a0;
- (id)_connectionProxyForAsync:(BOOL)a0 accessBlock:(id /* block */)a1;
- (id)pushNotificationService;
- (void)dealloc;
- (void)_checkOutPromise:(id)a0;

@end
