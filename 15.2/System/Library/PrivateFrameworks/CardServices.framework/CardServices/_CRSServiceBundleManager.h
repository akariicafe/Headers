@interface _CRSServiceBundleManager : CRBundleManager

+ (id)sharedInstance;
+ (id)bundleDirectoryName;
+ (Class)bundleClass;

- (void)getServiceBundlesWithCompletion:(id /* block */)a0;

@end
