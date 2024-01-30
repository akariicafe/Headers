@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject

@property (retain, nonatomic) LSApplicationWorkspace *lsWorkspace;

+ (id)defaultWorkspace;
+ (long long)getPlatformForBundleID:(id)a0;

- (void)launchApplication:(id)a0;
- (void)openURL:(id)a0;
- (id)initWithWorkspace:(id)a0;
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)a0;
- (void)openGameCenterSettings;
- (id)applicationProxyForBundleID:(id)a0;
- (void)openSettings;
- (void)openICloudSettings;
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)a0;
- (void).cxx_destruct;
- (BOOL)applicationIsInstalled:(id)a0;

@end
