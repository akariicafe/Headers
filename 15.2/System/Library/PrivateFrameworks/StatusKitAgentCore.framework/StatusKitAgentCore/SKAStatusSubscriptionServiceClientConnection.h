@class NSXPCConnection;
@protocol SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate;

@interface SKAStatusSubscriptionServiceClientConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate> connectionLifecycleDelegate;
@property (readonly) int processIdentifier;

+ (id)logger;
+ (BOOL)clientIsEntitledForAtLeastOneSubscriptionServiceType:(id)a0;
+ (BOOL)_connection:(id)a0 isEntitledForSubscriptionWithStatusTypeIdentifier:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1 daemonProtocolDelegate:(id)a2 connectionLifecycleDelegate:(id)a3;
- (id)asynchronousRemoteDaemonDelegateWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteDaemonDelegateWithErrorHandler:(id /* block */)a0;
- (BOOL)clientIsEntitledForSubscriptionWithStatusTypeIdentifier:(id)a0;
- (BOOL)clientIsEntitledForAtLeastOneSubscriptionServiceType;

@end
