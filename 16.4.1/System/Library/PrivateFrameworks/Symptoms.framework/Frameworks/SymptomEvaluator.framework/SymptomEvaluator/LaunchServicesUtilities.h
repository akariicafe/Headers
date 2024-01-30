@interface LaunchServicesUtilities : NSObject

+ (id)appBundleIdentifierFromBundleRecord:(id)a0 isWebBrowser:(BOOL *)a1;
+ (void)bundleIdentifier:(id)a0 hasEntitlement:(id)a1 ofClass:(Class)a2 handler:(id /* block */)a3;
+ (id)implicitlyAssumedIdentityEntitlementForBundleIdentifier:(id)a0;

@end
