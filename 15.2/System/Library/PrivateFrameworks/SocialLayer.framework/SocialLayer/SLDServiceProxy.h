@class NSXPCConnection;
@protocol SLDServiceProxyDelegate;

@interface SLDServiceProxy : NSObject

@property (retain, nonatomic) NSXPCConnection *conn;
@property (nonatomic) BOOL waitingForConnection;
@property (nonatomic) BOOL shouldAutoReconnect;
@property (nonatomic) BOOL connectionActive;
@property (nonatomic) Class serviceClass;
@property (weak, nonatomic) id<SLDServiceProxyDelegate> delegate;

+ (id)proxyForServiceClass:(Class)a0 delegate:(id)a1;

- (void)connect;
- (void)disconnect;
- (id)remoteService;
- (void).cxx_destruct;
- (void)_connectionInvalidated;
- (void)dealloc;
- (id)initWithServiceClass:(Class)a0 delegate:(id)a1;
- (void)_establishNewConnection;
- (void)_invalidateAndDestroyConnection;
- (void)_receivedServiceConnection:(id)a0;
- (int)remoteProcessID;

@end
