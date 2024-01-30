@class NSString, NEExtensionProviderContext, NSMutableArray;

@interface NEProviderServer : NSObject <NSXPCListenerDelegate>

@property (class, readonly) NEProviderServer *sharedServer;

@property (readonly, nonatomic) NSMutableArray *listeners;
@property (readonly, nonatomic) NSMutableArray *contexts;
@property (readonly) NEExtensionProviderContext *firstContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (id)getListenerForExtensionPoint:(id)a0;
- (void)generateProviderEndpointInfoInMessage:(id)a0 extensionPoint:(id)a1;
- (void)removeProviderContext:(id)a0;

@end
