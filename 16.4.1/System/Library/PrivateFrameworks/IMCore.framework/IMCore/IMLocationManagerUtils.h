@interface IMLocationManagerUtils : NSObject

+ (id)sharedInstance;

- (void)sendCurrentLocationMessageWithChat:(id)a0 withLocationManager:(id)a1 withSourceApplicationIdentifier:(id)a2 foregroundAssertionForBundleIdentifier:(id)a3 completion:(id /* block */)a4;

@end
