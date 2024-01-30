@class NSXPCListenerEndpoint, NSXPCListener, NSDictionary, NSExtensionContext, NSXPCConnection, NSString;

@interface RPBroadcastHandler : NSObject <NSXPCListenerDelegate, NSExtensionRequestHandling>

@property (retain, nonatomic) NSDictionary *serviceInfo;
@property (retain, nonatomic) NSExtensionContext *extensionContext;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)_completeRequestWithReturnItems:(id)a0;
- (void)updateBroadcastURL:(id)a0;
- (void)updateServiceInfo:(id)a0;

@end
