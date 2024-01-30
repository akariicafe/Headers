@class NSString, NSObject, NSXPCConnection;
@protocol ARDaemonServiceDelegate, ARDaemonServiceDataSource, OS_os_transaction;

@interface ARDaemonService : NSObject <ARServiceType, ARDaemonServiceBaseProtocol> {
    NSXPCConnection *_connection;
    NSObject<OS_os_transaction> *_transaction;
}

@property (class, readonly, nonatomic) BOOL isUnique;
@property (class, readonly, nonatomic) BOOL isSupported;

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

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)interruptionHandler;
- (void)resume;
- (void)suspend;
- (void)invalidate;
- (void)invalidationHandler;
- (id)initWithConnection:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2;
- (void)startService:(id /* block */)a0;
- (void)clearAlgorithmObservers;

@end
