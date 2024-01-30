@class NSLock, NSXPCConnection;

@interface WLDaemonConnection : NSObject {
    NSLock *_daemonLock;
    NSXPCConnection *_daemonConn;
}

@property (copy, nonatomic) id /* block */ interruptionHandler;

- (id)daemonConnection;
- (void).cxx_destruct;
- (id)init;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (void)invalidateDaemonConnection;

@end
