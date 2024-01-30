@class NSXPCListener, NSString;

@interface CDPDXPCListener : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)_connection:(id)a0 hasEntitlement:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_clientTypeForConnection:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)_shouldAcceptNewConnectionWithEntitlements:(unsigned long long)a0;
- (void)start;

@end
