@class NSString, NSObject, NSXPCConnection;
@protocol OS_os_activity, ARRemoteServiceBaseProtocol, OS_os_transaction, ARDaemonServiceDelegate, ARDaemonServiceDataSource;

@interface ARDaemonService : NSObject <ARServiceType, ARDaemonServiceBaseProtocol> {
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_os_activity> *_daemonServiceActivity;
}

@property (class, readonly, nonatomic) Class remoteServiceClass;
@property (class, readonly, nonatomic) BOOL isUnique;
@property (class, readonly, nonatomic) BOOL isSupported;

@property (retain) NSXPCConnection *connection;
@property (readonly) id<ARRemoteServiceBaseProtocol> clientService;
@property (readonly, nonatomic, getter=isAuthorized) BOOL authorized;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, nonatomic) int clientProcessIdentifier;
@property (readonly, nonatomic) NSString *clientProcessName;
@property (weak, nonatomic) id<ARDaemonServiceDataSource> dataSource;
@property (weak, nonatomic) id<ARDaemonServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;

- (void)suspend;
- (void)invalidationHandler;
- (id)initWithConnection:(id)a0;
- (void)interruptionHandler;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resume;
- (id)initAsLocalService;
- (id)initWithConnection:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2;
- (void)startService:(id /* block */)a0;

@end
