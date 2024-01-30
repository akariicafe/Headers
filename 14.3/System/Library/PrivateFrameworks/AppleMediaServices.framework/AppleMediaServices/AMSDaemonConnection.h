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
- (void)addInterruptionHandler:(id /* block */)a0;
- (void)_handleInterruption;
- (id)init;
- (void).cxx_destruct;
- (id)_connectionProxyForAsync:(BOOL)a0 accessBlock:(id /* block */)a1;
- (void)dealloc;
- (id)deviceMessengerProxyWithDelegate:(id)a0;
- (id)pushNotificationService;
- (id)callService:(id)a0 then:(id /* block */)a1;
- (void)_checkOutPromise:(id)a0;
- (id)securityServiceProxyWithDelegate:(id)a0;
- (void)_checkInPromise:(id)a0;

@end
