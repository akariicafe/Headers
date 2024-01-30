@class NSXPCConnection;

@interface AXDragEndpointClient : NSObject {
    NSXPCConnection *_connection;
}

+ (BOOL)isValidServiceName:(id)a0;

- (id)initWithServiceName:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)getDragEndpoint:(id /* block */)a0;

@end
