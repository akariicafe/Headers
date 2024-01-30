@class NSXPCListener, NSXPCListenerEndpoint, NSXPCConnection, NSXPCInterface, NSString;

@interface WFSingleConnectionXPCListener : NSObject <NSXPCListenerDelegate>

@property (readonly, nonatomic) id exportedObject;
@property (readonly, nonatomic) NSXPCInterface *exportedInterface;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *activeConnection;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithExportedObject:(id)a0 exportedInterface:(id)a1;

@end
