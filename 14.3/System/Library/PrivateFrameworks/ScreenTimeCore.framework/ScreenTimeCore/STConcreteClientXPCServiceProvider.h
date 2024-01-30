@class NSXPCListener, NSString, NSXPCInterface;
@protocol STPasscodeProviderService;

@interface STConcreteClientXPCServiceProvider : NSObject <NSXPCListenerDelegate, STClientXPCServiceProvider>

@property (retain) NSXPCListener *activeListener;
@property (retain) id<STPasscodeProviderService> providedService;
@property (retain) NSXPCInterface *providedServiceInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)providePasscodeProviderService;

@end
