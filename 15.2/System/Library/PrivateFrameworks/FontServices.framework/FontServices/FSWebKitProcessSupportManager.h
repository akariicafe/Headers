@class NSXPCListener, NSString, NSXPCConnection;

@interface FSWebKitProcessSupportManager : NSObject <FontServicesWebKitSupportClientProtocol, FontServicesWebKitSupportServerProtocol, NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCConnection *hostConnection;
@property (retain, nonatomic) NSXPCListener *serverListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ping:(id /* block */)a0;
- (void)checkin;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)ping2:(id /* block */)a0;
- (void)userInstalledFontsInfo:(id)a0 reply:(id /* block */)a1;
- (id)initWithXPCEndpoint:(id)a0;

@end
