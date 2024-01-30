@interface _CRSServiceBundleManager : CRBundleManager

+ (id)sharedInstance;
+ (Class)bundleClass;
+ (id)bundleDirectoryName;

- (void)getServiceBundlesWithCompletion:(id /* block */)a0;

@end
