@interface AVAssetDownloadStorageManager : NSObject

+ (id)sharedDownloadStorageManager;

- (void)setStorageManagementPolicy:(id)a0 forURL:(id)a1;
- (id)storageManagementPolicyForURL:(id)a0;

@end
