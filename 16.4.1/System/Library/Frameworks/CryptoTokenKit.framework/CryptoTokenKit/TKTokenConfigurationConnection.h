@class NSXPCListenerEndpoint, NSXPCConnection;

@interface TKTokenConfigurationConnection : NSObject {
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_endpoint;
}

- (id)initWithEndpoint:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)configurationProtocol;

@end
