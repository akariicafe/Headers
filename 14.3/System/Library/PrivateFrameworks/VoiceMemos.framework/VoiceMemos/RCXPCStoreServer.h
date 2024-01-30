@interface RCXPCStoreServer : NSXPCStoreServer

@property (copy, nonatomic) id /* block */ shouldAcceptDatabaseConnection;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
