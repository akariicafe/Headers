@class NSString, NSXPCListener;

@interface HAENotificationCenterServer : NSObject <NSXPCListenerDelegate, HAENotificationCenterDelegate> {
    NSXPCListener *_xpcListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void)addHAENotificationEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)verifyInvariants;

@end
