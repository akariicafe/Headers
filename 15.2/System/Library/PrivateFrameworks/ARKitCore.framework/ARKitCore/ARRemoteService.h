@class ARServerConnection, NSString, NSXPCInterface, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore, ARRemoteServiceAnchorDelegate, ARDaemonServiceBaseProtocol;

@interface ARRemoteService : NSObject <ARServerConnectionDelegate, ARNamedService, ARRemoteServiceBaseProtocol> {
    NSMutableDictionary *_anchorsByIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _anchorsLock;
}

@property (class, readonly, nonatomic) NSXPCInterface *remoteServiceInterface;
@property (class, readonly, nonatomic) NSXPCInterface *daemonServiceInterface;
@property (class, readonly, nonatomic) BOOL isSupported;

@property (retain) id<ARDaemonServiceBaseProtocol> syncService;
@property unsigned long long status;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *connectionSemaphore;
@property (weak) id<ARRemoteServiceAnchorDelegate> anchorDelegate;
@property (retain) ARServerConnection *connection;
@property (readonly, nonatomic) id<ARDaemonServiceBaseProtocol> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;
+ (id)_runningServices;

- (id)initWithDaemon:(id)a0;
- (int)clientProcessIdentifier;
- (id)initWithEndpoint:(id)a0;
- (void)_connect;
- (void).cxx_destruct;
- (id)init;
- (void)_commonInit;
- (void)invalidate;
- (void)reconnect;
- (id)clientProcessName;
- (id)initWithMachServiceName:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2;
- (id)initWithMachServiceName:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2 endpoint:(id)a3 startConnection:(BOOL)a4;
- (void)serviceDidReconnect:(BOOL)a0;
- (void)_didRemoveAnchors:(id)a0;
- (void)_didAddAnchors:(id)a0;
- (void)_didUpdateAnchors:(id)a0;
- (id)initWithDaemon:(id)a0 startConnection:(BOOL)a1;
- (id)initWithEndpoint:(id)a0 startConnection:(BOOL)a1;
- (void)serverConnectionInterrupted:(id)a0;
- (void)serverConnectionInvalidated:(id)a0;
- (void)serviceConfiguredWithError:(id)a0;
- (id)initWithMachServiceName:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2 endpoint:(id)a3;
- (BOOL)waitUntilStarted:(unsigned long long)a0;
- (void)setService:(id)a0 syncService:(id)a1;
- (id)allAnchors;
- (BOOL)removeAnchors:(id)a0;
- (BOOL)updateAnchors:(id)a0;
- (BOOL)updateAnchorWithIdentifier:(id)a0 updateBlock:(id /* block */)a1;

@end
