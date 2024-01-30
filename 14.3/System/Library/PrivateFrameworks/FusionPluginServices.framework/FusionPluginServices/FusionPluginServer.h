@class NSXPCListener, NSString, NSXPCConnection;
@protocol FusionPluginServerInterface;

@interface FusionPluginServer : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) Class principalClass;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<FusionPluginServerInterface> exportedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resume;
- (id)initWithClass:(Class)a0;

@end
