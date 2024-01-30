@class OS_xpc_remote_connection;

@interface RemoteXPCPair : NSObject

@property (retain, nonatomic) OS_xpc_remote_connection *client;
@property (retain, nonatomic) OS_xpc_remote_connection *server;

- (void).cxx_destruct;
- (id)initWithClient:(id)a0 server:(id)a1;

@end
