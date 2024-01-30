@class NSString, _EXDiscoveryController;

@interface _EXService : NSObject <NSXPCListenerDelegate, _EXServiceProtocol, LSObserverDelegate>

@property (readonly) _EXDiscoveryController *discoveryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;
+ (void)runAsXPCService;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)_init;
- (void)getServiceConfigForExtension:(id)a0 overlay:(id *)a1 subservices:(id *)a2;
- (BOOL)connection:(id)a0 hasRequiredEntitlements:(id)a1 error:(id *)a2;
- (BOOL)connection:(id)a0 canRunQuery:(id)a1 error:(id *)a2;
- (id)launchExtension:(id)a0 clientConnection:(id)a1 error:(id *)a2;
- (void)extensionsWithQuery:(id)a0 reply:(id /* block */)a1;
- (void)beginExtensionsQuery:(id)a0 listenerEndpoint:(id)a1 reply:(id /* block */)a2;
- (void)prepareExtension:(id)a0 reply:(id /* block */)a1;
- (BOOL)registerServiceForClientConnection:(id)a0 extension:(id)a1 error:(id *)a2;

@end
