@class NSXPCListener, NSString, NSXPCConnection;

@interface FontPickerSupportHandler : NSObject <FontServicesFontPickerSupportProtocol, NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCListener *listenerForFontServicesDaemon;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)checkin:(id /* block */)a0;
- (void)ping:(id)a0 reply:(id /* block */)a1;
- (void)registeredFontsChanged:(id)a0;
- (void)activateFontsForFontPickerClient:(id)a0 reply:(id /* block */)a1;
- (BOOL)pathsContainsFontAsset:(id)a0;

@end
