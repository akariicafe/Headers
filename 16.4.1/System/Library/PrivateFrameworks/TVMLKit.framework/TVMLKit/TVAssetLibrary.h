@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TVAssetLibrary : NSObject {
    NSObject<OS_dispatch_queue> *assetWriteQueue;
    NSObject<OS_dispatch_queue> *assetAccessQueue;
}

@property (copy, nonatomic) NSString *cachePath;
@property (retain, nonatomic) NSMutableArray *registeredGroups;

+ (id)sharedInstance;
+ (void)initializeAssetLibraryWithCachePath:(id)a0 purgeCacheOnLoad:(BOOL)a1;
+ (void)_initializeAssetLibraryWithCachePath:(id)a0 screensaverCache:(BOOL)a1 purgeCacheOnLoad:(BOOL)a2;
+ (void)initializeAssetLibraryWithCachePath:(id)a0;
+ (void)intializeScreensaverSharedAssetLibrary;

- (void).cxx_destruct;
- (void)_setImageAsset:(id)a0 forKey:(id)a1 inGroupOfType:(long long)a2 expiryDate:(id)a3 overWrite:(BOOL)a4 tags:(id)a5;
- (id)assetExpiryDateForKey:(id)a0 inGroupOfType:(long long)a1;
- (id)assetForKey:(id)a0 inGroupOfType:(long long)a1;
- (id)assetPathForKey:(id)a0 inGroupOfType:(long long)a1;
- (id)assetPathsForGroupOfType:(long long)a0;
- (id)cachePathForGroupOfType:(long long)a0;
- (id)groupWithGroupType:(long long)a0;
- (id)keyForAssetWithTags:(id)a0 inGroupOfType:(long long)a1;
- (void)purgeAssetsInGroupOfType:(long long)a0;
- (void)registerGroup:(id)a0;
- (void)removeAssetForKey:(id)a0 inGroupOfType:(long long)a1;
- (void)setImageAsset:(id)a0 forKey:(id)a1 inGroupOfType:(long long)a2 expiryDate:(id)a3;
- (void)setImageAsset:(id)a0 forKey:(id)a1 inGroupOfType:(long long)a2 expiryDate:(id)a3 overWrite:(BOOL)a4;
- (void)setImageAsset:(id)a0 forKey:(id)a1 inGroupOfType:(long long)a2 expiryDate:(id)a3 tags:(id)a4;
- (void)setImageAssetFromPath:(id)a0 forKey:(id)a1 inGroupOfType:(long long)a2 expiryDate:(id)a3;
- (void)setImageAssetFromPath:(id)a0 forKey:(id)a1 inGroupOfType:(long long)a2 expiryDate:(id)a3 tags:(id)a4;
- (void)unRegisterGroup:(long long)a0;
- (void)updateAssetsInGroupOfType:(long long)a0;
- (id)initWithCachePath:(id)a0 screensaverCache:(BOOL)a1 purgeCacheOnLoad:(BOOL)a2;

@end
