@class NSXPCListener, NSString;

@interface FSWebKitHostSupportManager : NSObject <NSXPCListenerDelegate>

@property (class, readonly) FSWebKitHostSupportManager *sharedManager;

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
