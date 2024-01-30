@class SSXPCConnection;

@interface SSMigrator : NSObject {
    SSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)performMigration:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (id)init;

@end
