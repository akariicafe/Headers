@class NSXPCConnection;

@interface SLDServiceCenter : NSObject

@property (retain, nonatomic) NSXPCConnection *conn;
@property (nonatomic) BOOL shouldAutoReconnect;
@property (nonatomic) BOOL waitingForConnection;

+ (id)sharedCenter;

- (void)disconnect;
- (void).cxx_destruct;
- (id)init;
- (id)_synchronousRemoteObjectProxy;
- (void)_establishNewConnection;
- (void)_invalidateAndDestroyConnection;
- (void)connectionForServiceClass:(Class)a0 reply:(id /* block */)a1;

@end
