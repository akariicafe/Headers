@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject

@property (retain, nonatomic) LSApplicationWorkspace *lsWorkspace;

+ (id)defaultWorkspace;

- (id)initWithWorkspace:(id)a0;
- (void)openURL:(id)a0;
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)a0;
- (id)applicationProxyForBundleID:(id)a0;
- (void)openGameCenterSettings;
- (BOOL)applicationIsInstalled:(id)a0;
- (void).cxx_destruct;
- (void)openICloudSettings;
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)a0;
- (void)openSettings;

@end
