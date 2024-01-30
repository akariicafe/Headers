@class NSXPCListenerEndpoint, NSXPCConnection;

@interface TKTokenConfigurationConnection : NSObject {
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_endpoint;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEndpoint:(id)a0;
- (id)configurationProtocol;

@end
