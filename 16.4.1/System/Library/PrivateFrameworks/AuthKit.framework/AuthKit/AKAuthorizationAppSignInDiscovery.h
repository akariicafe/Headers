@class AKAuthorizationDaemonConnection;

@interface AKAuthorizationAppSignInDiscovery : NSObject {
    AKAuthorizationDaemonConnection *_daemonConnection;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startDiscoveryWithCompletion:(id /* block */)a0;

@end
