@class AKAuthorizationDaemonConnection;

@interface AKAuthorizationAppSignInDiscovery : NSObject {
    AKAuthorizationDaemonConnection *_daemonConnection;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)startDiscoveryWithCompletion:(id /* block */)a0;

@end
