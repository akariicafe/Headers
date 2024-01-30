@class NSXPCConnection;

@interface AXDragEndpointClient : NSObject {
    NSXPCConnection *_connection;
}

+ (BOOL)isValidServiceName:(id)a0;

- (void)getDragEndpoint:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithServiceName:(id)a0;

@end
