@class NSXPCListener, NSString, NSXPCInterface;

@interface STConcreteClientXPCServiceProvider : NSObject <NSXPCListenerDelegate, STClientXPCServiceProvider>

@property (retain) NSXPCListener *activeListener;
@property (retain) id providedService;
@property (retain) NSXPCInterface *providedServiceInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
