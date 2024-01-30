@interface CNLaunchServicesRemoteAdapter : NSObject <CNLaunchServicesAdapter>

+ (id)launchServicesAdapterInterface;
+ (id)createConnectionWithInterface:(id)a0;

- (void)applicationsAvailableForHandlingURLScheme:(id)a0 withReply:(id /* block */)a1;
- (void)openUserActivityData:(id)a0 inApplication:(id)a1 withReply:(id /* block */)a2;
- (void)applicationsForUserActivityType:(id)a0 withReply:(id /* block */)a1;
- (void)applicationForBundleIdentifier:(id)a0 withReply:(id /* block */)a1;
- (void)openSensitiveURLInBackground:(id)a0 withOptions:(id)a1 withReply:(id /* block */)a2;

@end
