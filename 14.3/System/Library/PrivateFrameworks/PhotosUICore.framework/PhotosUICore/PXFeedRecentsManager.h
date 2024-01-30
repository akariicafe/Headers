@class NSOrderedSet, NSArray, PHPhotoLibrary, NSMutableArray;
@protocol PXFeedRecentsManagerDelegate;

@interface PXFeedRecentsManager : NSObject <PLCloudFeedEntriesObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver> {
    NSMutableArray *_pendingFeedEntriesChangeNotifications;
    NSMutableArray *_pendingAssetsChangeNotifications;
}

@property (retain, nonatomic, setter=_setPhotoLibrary:) PHPhotoLibrary *photoLibrary;
@property (nonatomic, setter=_setCount:) long long count;
@property (copy, nonatomic, setter=_setCachedRecentAssets:) NSOrderedSet *_cachedRecentAssets;
@property (copy, nonatomic, setter=_setCachedRecentPHAssets:) NSArray *_cachedRecentPHAssets;
@property (weak, nonatomic) id<PXFeedRecentsManagerDelegate> delegate;
@property (readonly, copy, nonatomic) NSOrderedSet *recentAssets;
@property (readonly, copy, nonatomic) NSArray *recentPHAssets;

- (void).cxx_destruct;
- (void)dealloc;
- (void)shouldReload:(id)a0;
- (void)assetsDidChange:(id)a0;
- (void)cloudFeedEntriesDidChange:(id)a0;
- (void)_didFinishPostingNotifications:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 count:(long long)a1;
- (BOOL)_updateCachedRecentAssets;
- (void)_invalidateCachedRecentAssets;

@end
