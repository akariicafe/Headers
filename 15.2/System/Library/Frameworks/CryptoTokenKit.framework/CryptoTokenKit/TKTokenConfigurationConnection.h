@class NSXPCListenerEndpoint, NSXPCConnection;

@interface TKTokenConfigurationConnection : NSObject {
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_endpoint;
}

- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)configurationProtocol;

@end
