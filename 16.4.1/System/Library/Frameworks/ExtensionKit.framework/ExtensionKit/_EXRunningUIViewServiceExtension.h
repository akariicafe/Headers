@class NSXPCListener, NSString, NSXPCConnection;

@interface _EXRunningUIViewServiceExtension : _EXRunningUIExtension <NSXPCListenerDelegate>

@property (retain) NSXPCConnection *xpcConnection;
@property (retain) NSXPCListener *serviceListener;
@property (retain) NSXPCListener *internalListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)startWithArguments:(const char **)a0 count:(int)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
