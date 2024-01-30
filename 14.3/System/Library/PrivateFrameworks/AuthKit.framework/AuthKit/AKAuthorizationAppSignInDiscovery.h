@class AKAuthorizationDaemonConnection;

@interface AKAuthorizationAppSignInDiscovery : NSObject {
    AKAuthorizationDaemonConnection *_daemonConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startDiscoveryWithCompletion:(id /* block */)a0;

@end
