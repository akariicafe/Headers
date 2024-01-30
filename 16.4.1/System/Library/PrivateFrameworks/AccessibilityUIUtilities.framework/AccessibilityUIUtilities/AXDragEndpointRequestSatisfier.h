@class NSString, NSXPCConnection;
@protocol AXDragEndpointRequestSatisfierDelegate;

@interface AXDragEndpointRequestSatisfier : NSObject <AXEndpointVending> {
    NSXPCConnection *_connection;
}

@property (weak, nonatomic) id<AXDragEndpointRequestSatisfierDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)requestDragEndpoint:(id /* block */)a0;

@end
