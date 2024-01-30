@class NSXPCListenerEndpoint;

@interface WBSHistoryConnectionProxyForTesting : WBSHistoryConnectionProxy {
    NSXPCListenerEndpoint *_listenerEndpoint;
}

- (id)initWithListenerEndpoint:(id)a0;
- (id)_createConnection;
- (void).cxx_destruct;

@end
