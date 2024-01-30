@interface RCXPCStoreServer : NSXPCStoreServer

@property (copy, nonatomic) id /* block */ shouldAcceptDatabaseConnection;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
