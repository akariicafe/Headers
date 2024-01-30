@class NSLock, NSXPCConnection;

@interface WLDaemonConnection : NSObject {
    NSLock *_daemonLock;
    NSXPCConnection *_daemonConn;
}

@property (copy, nonatomic) id /* block */ interruptionHandler;

- (id)daemonConnection;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateDaemonConnection;

@end
