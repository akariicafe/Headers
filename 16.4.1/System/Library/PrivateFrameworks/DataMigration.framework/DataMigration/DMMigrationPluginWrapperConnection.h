@class DMXPCConnection;

@interface DMMigrationPluginWrapperConnection : NSObject {
    DMXPCConnection *_connection;
    BOOL _didReceivePid;
}

@property (readonly, nonatomic) BOOL didReceivePid;

+ (id)connection;

- (void)handleMessage:(id)a0;
- (int)pid;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resume;
- (void)runPluginAtPath:(id)a0 withParameters:(id)a1 completion:(id /* block */)a2;

@end
