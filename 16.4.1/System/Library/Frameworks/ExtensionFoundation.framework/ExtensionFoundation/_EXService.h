@class NSString, _EXDiscoveryController, NSObject;
@protocol OS_dispatch_source;

@interface _EXService : NSObject <NSXPCListenerDelegate, _EXServiceProtocol, LSObserverDelegate>

@property (class, readonly) BOOL currentProcessIsService;

@property (readonly) _EXDiscoveryController *discoveryController;
@property (readonly) NSObject<OS_dispatch_source> *sigtermSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;
+ (void)runAsXPCService;
+ (BOOL)currentProcessIsService;

- (void)photoServiceAuthorizationStatusForExtensionUUID:(id)a0 completion:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)launchWithConfiguration:(id)a0 clientConnection:(id)a1 error:(id *)a2;
- (id)_init;
- (void)getServiceConfigForExtension:(id)a0 overlay:(id *)a1 subservices:(id *)a2;
- (void)beginExtensionsQuery:(id)a0 listenerEndpoint:(id)a1 reply:(id /* block */)a2;
- (void)extensionsWithQuery:(id)a0 reply:(id /* block */)a1;
- (void)invalidateLaunchAssertionsForExtensionAuditToken:(struct { unsigned int x0[8]; })a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)registerServiceForClientConnection:(id)a0 extension:(id)a1 error:(id *)a2;
- (void)prepareWithLaunchConfiguration:(id)a0 reply:(id /* block */)a1;

@end
