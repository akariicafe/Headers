@class SBIconModel, NSString, SBWallpaperController, BSUIMappedImageCache, SBIconController;

@interface SBWallpaperPreviewSnapshotCache : NSObject <SBIconIndexNodeObserver, PBUIWallpaperObserver> {
    SBWallpaperController *_wallpaperController;
    BSUIMappedImageCache *_imageCache;
    long long _invalidatedLocations;
    SBIconController *_iconController;
    SBIconModel *_model;
}

@property (class, readonly, nonatomic) SBWallpaperPreviewSnapshotCache *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheKeyForVariant:(long long)a0 options:(unsigned long long)a1;
+ (id)cacheKeyForVariant:(long long)a0 options:(unsigned long long)a1 scalingWidth:(double)a2;

- (void)wallpaperDidChangeForVariant:(long long)a0;
- (void)node:(id)a0 didRemoveContainedNodeIdentifiers:(id)a1;
- (void)node:(id)a0 didAddContainedNodeIdentifiers:(id)a1;
- (void)dealloc;
- (id)init;
- (void)nodeDidMoveContainedNodes:(id)a0;
- (void).cxx_destruct;
- (void)_modelDidLayout;
- (void)_backlightFadeFinished;
- (id)_homeScreenSnapshotProviderWithOptions:(unsigned long long)a0 wallpaperImage:(id)a1;
- (void)_iconControllerDidChangeIconModel:(id)a0;
- (id)_lockScreenSnapshotProviderWithOptions:(unsigned long long)a0 wallpaperImage:(id)a1;
- (void)_modelWillLayout;
- (long long)_orientationForOptions:(unsigned long long)a0;
- (void)_switchToIconModel:(id)a0;
- (id)initWithImageCache:(id)a0 iconController:(id)a1 wallpaperController:(id)a2;
- (void)invalidateSnapshotsForLocations:(long long)a0;
- (id)mappedWallpaperPreviewForKey:(id)a0;
- (id)mappedWallpaperPreviewForScaledSnapshot:(id)a0 variant:(long long)a1 cacheKey:(id)a2;
- (void)regenerateSnapshotsForLocations:(long long)a0;
- (id)snapshotProviderForVariant:(long long)a0 options:(unsigned long long)a1 wallpaperImage:(id)a2;

@end
