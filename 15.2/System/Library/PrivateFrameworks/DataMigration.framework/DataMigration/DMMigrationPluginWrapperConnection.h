@class DMXPCConnection;

@interface DMMigrationPluginWrapperConnection : NSObject {
    DMXPCConnection *_connection;
    BOOL _didReceivePid;
}

@property (readonly, nonatomic) BOOL didReceivePid;

+ (id)connection;

- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)runPluginAtPath:(id)a0 withParameters:(id)a1 completion:(id /* block */)a2;
- (void)invalidate;
- (void)resume;
- (int)pid;

@end
