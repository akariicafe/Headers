@class NSXPCListener, NSString;

@interface _LSDService : NSObject <NSXPCListenerDelegate>

@property (class, readonly, getter=isEnabled) BOOL enabled;

@property (readonly, weak) NSXPCListener *XPCListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned short)connectionType;
+ (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
+ (id)synchronousXPCProxyWithErrorHandler:(id /* block */)a0;
+ (id)XPCProxyWithErrorHandler:(id /* block */)a0;
+ (id)dispatchQueue;
+ (Class)clientClass;
+ (id)allServiceClasses;
+ (BOOL)XPCConnectionIsAlwaysPrivileged;
+ (id)XPCInterface;
+ (id)XPCConnectionToService;
+ (void)beginListeningWithAllServices;

- (id)initWithXPCListener:(id)a0;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
