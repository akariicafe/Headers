@class NSXPCListener, NSString;
@protocol CXNotificationServiceExtensionHostDelegate;

@interface CXNotificationServiceExtensionVoIPXPCHost : NSObject <NSXPCListenerDelegate, CXNotificationServiceExtensionHostDelegate, CXNotificationServiceExtensionVoIPXPC>

@property (readonly, nonatomic) NSXPCListener *xpcListener;
@property (weak, nonatomic) id<CXNotificationServiceExtensionHostDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)notificationServiceExtension:(id)a0 reply:(id /* block */)a1;
- (void)notificationServiceExtensionHost:(id)a0 didReceiveIncomingMessage:(id)a1 forBundleIdentifier:(id)a2 reply:(id /* block */)a3;

@end
