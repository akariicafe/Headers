@class NSXPCInterface, NSXPCConnection;

@interface CallDBMigrator : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
}

- (void).cxx_destruct;
- (id)init;
- (void)migrate:(id)a0 queue:(id)a1 block:(id /* block */)a2;

@end
