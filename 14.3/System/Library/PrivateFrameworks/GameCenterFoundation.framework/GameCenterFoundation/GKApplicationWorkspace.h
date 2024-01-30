@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject

@property (retain, nonatomic) LSApplicationWorkspace *lsWorkspace;

+ (id)defaultWorkspace;

- (void)dealloc;
- (id)applicationProxyForBundleID:(id)a0;
- (void)openGameCenterSettings;
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)a0;
- (void)openURL:(id)a0;
- (BOOL)applicationIsInstalled:(id)a0;
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)a0;
- (id)initWithWorkspace:(id)a0;
- (void)openICloudSettings;
- (void)openSettings;

@end
