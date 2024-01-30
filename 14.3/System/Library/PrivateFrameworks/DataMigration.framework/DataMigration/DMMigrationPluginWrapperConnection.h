@class DMXPCConnection;

@interface DMMigrationPluginWrapperConnection : NSObject {
    DMXPCConnection *_connection;
    BOOL _didReceivePid;
}

@property (readonly, nonatomic) BOOL didReceivePid;

+ (id)connection;

- (id)init;
- (void).cxx_destruct;
- (int)pid;
- (void)handleMessage:(id)a0;
- (void)runPluginAtPath:(id)a0 withParameters:(id)a1 completion:(id /* block */)a2;
- (void)resume;
- (void)invalidate;

@end
