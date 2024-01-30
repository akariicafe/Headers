@class NSXPCConnection;
@protocol SKAStatusPublishingServiceClientConnectionLifecycleDelegate;

@interface SKAStatusPublishingServiceClientConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<SKAStatusPublishingServiceClientConnectionLifecycleDelegate> connectionLifecycleDelegate;
@property (readonly) int processIdentifier;

+ (id)logger;
+ (BOOL)_connection:(id)a0 isEntitledForPublishingWithStatusTypeIdentifier:(id)a1;
+ (BOOL)clientIsEntitledForAtLeastOnePublishingServiceType:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1 daemonProtocolDelegate:(id)a2 connectionLifecycleDelegate:(id)a3;
- (id)asynchronousRemoteDaemonDelegateWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteDaemonDelegateWithErrorHandler:(id /* block */)a0;
- (BOOL)clientIsEntitledForPublishingWithStatusTypeIdentifier:(id)a0;

@end
