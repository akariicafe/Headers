@class SBIconModel, NSString, SBWallpaperController, SBFMappedImageCache, SBIconController;

@interface SBWallpaperPreviewSnapshotCache : NSObject <SBIconIndexNodeObserver, SBWallpaperObserver> {
    SBWallpaperController *_wallpaperController;
    SBFMappedImageCache *_imageCache;
    long long _invalidatedLocations;
    SBIconController *_iconController;
    SBIconModel *_model;
}

@property (class, readonly, nonatomic) SBWallpaperPreviewSnapshotCache *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheKeyForVariant:(long long)a0 options:(unsigned long long)a1 scalingWidth:(double)a2;
+ (id)cacheKeyForVariant:(long long)a0 options:(unsigned long long)a1;

- (void)wallpaperDidChangeForVariant:(long long)a0;
- (void)node:(id)a0 didRemoveContainedNodeIdentifiers:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)nodeDidMoveContainedNodes:(id)a0;
- (void)dealloc;
- (void)node:(id)a0 didAddContainedNodeIdentifiers:(id)a1;
- (id)mappedWallpaperPreviewForKey:(id)a0;
- (id)snapshotProviderForVariant:(long long)a0 options:(unsigned long long)a1 wallpaperImage:(id)a2;
- (id)mappedWallpaperPreviewForScaledSnapshot:(id)a0 variant:(long long)a1 cacheKey:(id)a2;
- (id)initWithImageCache:(id)a0 iconController:(id)a1 wallpaperController:(id)a2;
- (void)_switchToIconModel:(id)a0;
- (void)_backlightFadeFinished;
- (void)_iconControllerDidChangeIconModel:(id)a0;
- (void)_modelWillLayout;
- (void)_modelDidLayout;
- (void)invalidateSnapshotsForLocations:(long long)a0;
- (void)regenerateSnapshotsForLocations:(long long)a0;
- (long long)_orientationForOptions:(unsigned long long)a0;
- (id)_homeScreenSnapshotProviderWithOptions:(unsigned long long)a0 wallpaperImage:(id)a1;
- (id)_lockScreenSnapshotProviderWithOptions:(unsigned long long)a0 wallpaperImage:(id)a1;

@end
