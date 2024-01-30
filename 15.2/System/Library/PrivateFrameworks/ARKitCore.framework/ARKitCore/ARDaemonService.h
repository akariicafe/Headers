@class NSString, NSObject, NSXPCConnection;
@protocol ARRemoteServiceBaseProtocol, OS_os_transaction, ARDaemonServiceDelegate, ARDaemonServiceDataSource;

@interface ARDaemonService : NSObject <ARServiceType, ARDaemonServiceBaseProtocol> {
    NSObject<OS_os_transaction> *_transaction;
    _Atomic int _inFlightXPCDataCount;
    double _lastDroppedXPCMessageTimestamp;
    unsigned long long _skippedDroppedXPCMessageCount;
}

@property (class, readonly, nonatomic) Class remoteServiceClass;
@property (class, readonly, nonatomic) BOOL isUnique;
@property (class, readonly, nonatomic) BOOL isSupported;

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) id<ARRemoteServiceBaseProtocol> clientService;
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

- (void)invalidationHandler;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)suspend;
- (void)interruptionHandler;
- (void)invalidate;
- (void)resume;
- (id)initWithConnection:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2;
- (void)startService:(id /* block */)a0;
- (BOOL)sendDroppableXPCMessageBlockToClient:(id /* block */)a0;

@end
