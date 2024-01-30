@class NSXPCListenerEndpoint;

@interface WBSHistoryConnectionProxyForTesting : WBSHistoryConnectionProxy {
    NSXPCListenerEndpoint *_listenerEndpoint;
}

- (id)initWithListenerEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)_createConnection;

@end
