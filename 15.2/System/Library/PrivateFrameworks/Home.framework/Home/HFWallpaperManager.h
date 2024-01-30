@class HFReaderWriterCache, HFWallpaperFileManager, HFWallpaperImageCache, NSString, HFWallpaperLegacyFileManager, NSUserDefaults;
@protocol HFNamedWallpaperSource;

@interface HFWallpaperManager : NSObject <HFHomeManagerObserver, HFHomeObserver>

@property (retain, nonatomic) id<HFNamedWallpaperSource> namedWallpaperSource;
@property (retain, nonatomic) HFWallpaperFileManager *fileManager;
@property (retain, nonatomic) HFWallpaperLegacyFileManager *legacyFileManager;
@property (retain, nonatomic) HFWallpaperImageCache *imageCache;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) HFReaderWriterCache *wallpapersCache;
@property (retain, nonatomic) HFReaderWriterCache *wallpaperSlicesCache;
@property (nonatomic) BOOL hasPreheatedCache;
@property (readonly, nonatomic) BOOL wallpaperSourceRegistered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)home:(id)a0 didRemoveRoom:(id)a1;
- (void)homeKitDispatcher:(id)a0 manager:(id)a1 didChangeHome:(id)a2;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)a0;
- (void)setWallpaper:(id)a0 image:(id)a1 forHomeKitObject:(id)a2;
- (id)wallpaperForHomeKitObject:(id)a0;
- (id)sliceFromWallpaper:(id)a0 variant:(long long)a1;
- (id)defaultNamedWallpaperForCollection:(long long)a0;
- (id)imageForNamedWallpaper:(id)a0;
- (id)generateProcessedImageFromWallpaper:(id)a0 originalImage:(id)a1;
- (void)_migrateIfNeeded;
- (id)_cachedWallpaperForKey:(id)a0;
- (id)_wallpaperForKey:(id)a0 createIfNeeded:(BOOL)a1;
- (id)_cachedWallpaperSliceForIdentifier:(id)a0;
- (id)_sliceFromWallpaper:(id)a0 variant:(long long)a1 preloading:(BOOL)a2;
- (id)_originalImageForWallpaper:(id)a0;
- (void)_setWallpaper:(id)a0 image:(id)a1 forKey:(id)a2;
- (void)_setWallpaper:(id)a0 image:(id)a1 forHomeKitIdentifier:(id)a2;
- (void)_dispatchWallpaperChangedForKey:(id)a0;
- (void)_pruneUnusedWallpapers;
- (void)_preloadWallpapersForHome:(id)a0;
- (void)_preloadWallpaperSlicesForKey:(id)a0;
- (long long)_namedCollectionTypeForKey:(id)a0;
- (void)_setImageCacheForWallpaper:(id)a0 image:(id)a1 forHomeKitIdentifier:(id)a2;
- (void)_logUserMetricsAfterSettingWallpaper;
- (void)_pruneUnusedWallpapersWithExistingHomeKitIdentifiers:(id)a0;
- (id)_resolveHomeKitObjectForKey:(id)a0;
- (void)registerWallpaperSource:(id)a0 processedSource:(id)a1;
- (id)allNamedWallpapersForCollection:(long long)a0;
- (void)preheatCache;

@end
