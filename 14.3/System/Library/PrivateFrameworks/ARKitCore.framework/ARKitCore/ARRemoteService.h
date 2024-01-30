@class NSString, NSXPCConnection;
@protocol ARDaemonServiceBaseProtocol;

@interface ARRemoteService : NSObject <ARNamedService>

@property (retain) NSXPCConnection *connection;
@property (readonly, nonatomic) id<ARDaemonServiceBaseProtocol> service;
@property (readonly, nonatomic) id<ARDaemonServiceBaseProtocol> syncService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reconnect;
- (void).cxx_destruct;
- (id)clientProcessName;
- (id)initWithEndpoint:(id)a0;
- (void)setService:(id)a0;
- (int)clientProcessIdentifier;
- (void)interruptionHandler;
- (void)setSyncService:(id)a0;
- (void)invalidate;
- (void)invalidationHandler;
- (id)initWithMachServiceName:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2 endpoint:(id)a3;
- (id)initWithMachServiceName:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2;
- (void)setService:(id)a0 syncService:(id)a1;

@end
