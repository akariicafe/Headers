@class NSXPCConnection;
@protocol SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate;

@interface SKAStatusSubscriptionServiceClientConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate> connectionLifecycleDelegate;
@property (readonly) int processIdentifier;

+ (id)logger;
+ (BOOL)_connection:(id)a0 isEntitledForSubscriptionWithStatusTypeIdentifier:(id)a1;
+ (BOOL)clientIsEntitledForAtLeastOneSubscriptionServiceType:(id)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)asynchronousRemoteDaemonDelegateWithErrorHandler:(id /* block */)a0;
- (BOOL)clientIsEntitledForAtLeastOneSubscriptionServiceType;
- (BOOL)clientIsEntitledForSubscriptionWithStatusTypeIdentifier:(id)a0;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1 daemonProtocolDelegate:(id)a2 connectionLifecycleDelegate:(id)a3;
- (id)synchronousRemoteDaemonDelegateWithErrorHandler:(id /* block */)a0;

@end
