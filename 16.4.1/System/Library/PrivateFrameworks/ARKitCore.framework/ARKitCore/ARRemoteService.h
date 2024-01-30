@class ARServerConnection, NSString, NSXPCInterface, NSMutableDictionary, NSObject;
@protocol ARDaemonServiceBaseProtocol, OS_dispatch_group, OS_os_activity, ARRemoteServiceAnchorDelegate, OS_dispatch_queue;

@interface ARRemoteService : NSObject <ARServerConnectionDelegate, ARNamedService, ARRemoteServiceBaseProtocol> {
    NSMutableDictionary *_anchorsByIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _anchorsLock;
    NSObject<OS_dispatch_queue> *_asyncServiceQueue;
    NSObject<OS_dispatch_group> *_connectionDispatchGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionDispatchGroupLock;
    NSObject<OS_dispatch_queue> *_dispatchChannelQueue;
    NSObject<OS_os_activity> *_remoteServiceActivity;
    unsigned long long _traceIdentifier;
    BOOL _isAnchorProviding;
}

@property (class, readonly, nonatomic) NSXPCInterface *remoteServiceInterface;
@property (class, readonly, nonatomic) NSXPCInterface *daemonServiceInterface;
@property (class, readonly, nonatomic) BOOL isSupported;

@property (retain) id<ARDaemonServiceBaseProtocol> syncService;
@property (readonly, nonatomic) id<ARDaemonServiceBaseProtocol> service;
@property unsigned long long status;
@property (weak) id<ARRemoteServiceAnchorDelegate> anchorDelegate;
@property (retain) ARServerConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;
+ (id)_runningServices;
+ (id)createDaemonServiceInterface:(id)a0;
+ (id)createRemoteServiceInterface:(id)a0;
+ (BOOL)isSupportedWithError:(id *)a0;

- (id)initWithDaemon:(id)a0;
- (void)_commonInit;
- (id)clientProcessName;
- (int)clientProcessIdentifier;
- (void)_startService;
- (void)reconnect;
- (id)initWithEndpoint:(id)a0;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)initWithDaemon:(id)a0 startConnection:(BOOL)a1;
- (BOOL)_waitUntilStarted:(unsigned long long)a0;
- (void)asyncServiceWithCallback:(id /* block */)a0;
- (void)connectionDispatchGroupLeave;
- (id)initWithEndpoint:(id)a0 startConnection:(BOOL)a1;
- (id)initWithMachServiceName:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2;
- (id)initWithMachServiceName:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2 endpoint:(id)a3;
- (id)initWithMachServiceName:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2 endpoint:(id)a3 startConnection:(BOOL)a4 queue:(id)a5;
- (void)serverConnectionInterrupted:(id)a0;
- (void)serverConnectionInvalidated:(id)a0;
- (void)serviceConfiguredWithCompletionHandler:(id /* block */)a0;
- (void)serviceConfiguredWithError:(id)a0;
- (void)serviceDidReconnect:(BOOL)a0;
- (void)setService:(id)a0 syncService:(id)a1;
- (void)syncServiceWithTimeout:(unsigned long long)a0 callback:(id /* block */)a1;
- (BOOL)waitUntilStarted:(unsigned long long)a0;

@end
