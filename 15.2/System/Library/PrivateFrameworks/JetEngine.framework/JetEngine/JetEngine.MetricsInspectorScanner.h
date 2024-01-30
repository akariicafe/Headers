@interface JetEngine.MetricsInspectorScanner : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    void /* unknown type, empty encoding */ serviceBrowser;
    void /* unknown type, empty encoding */ stateLock;
    void /* unknown type, empty encoding */ foundServices;
}

- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowserDidStopSearch:(id)a0;
- (void)netServiceDidResolveAddress:(id)a0;
- (void).cxx_destruct;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (id)init;
- (void)dealloc;
- (void)netServiceBrowserWillSearch:(id)a0;

@end
