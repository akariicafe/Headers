@class NSMutableDictionary, NAIdentity, NSURL, NSString;

@interface WKWallpaperBundle : NSObject <NAIdentifiable, WKWallpaperRepresenting>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (retain, nonatomic) NSMutableDictionary *_defaultAppearanceWallpapers;
@property (retain, nonatomic) NSMutableDictionary *_darkAppearanceWallpapers;
@property (copy, nonatomic) NSURL *_bundleURL;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *family;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSURL *thumbnailImageURL;
@property (readonly, nonatomic, getter=isAppearanceAware) BOOL appearanceAware;
@property (readonly, nonatomic, getter=hasDistinctWallpapersForLocations) BOOL distinctWallpapersForLocations;
@property (readonly, nonatomic, getter=isDynamicWallpaperBundle) BOOL dynamicWallpaperBundle;
@property (readonly, copy, nonatomic) NSString *identifierString;
@property (readonly, nonatomic) unsigned long long contentSource;
@property (readonly, nonatomic) BOOL disableParallax;

+ (BOOL)shouldLoadWallpaperBundleAtURL:(id)a0;
+ (id)createTemporaryWallpaperBundleWithImages:(id)a0 videoAssetURLs:(id)a1 wallpaperOptions:(id)a2 error:(id *)a3;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)fileBasedWallpaperForLocation:(id)a0 andAppearance:(id)a1;
- (void)_loadBundle;
- (id)initWithDynamicDictionary:(id)a0 identifier:(long long)a1;
- (void)_loadDynamicWallpaper:(id)a0;
- (void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)a0;
- (void)_processAssetDictionary:(id)a0 forLocation:(id)a1;
- (unsigned long long)wallpaperBackingTypeForLocation:(id)a0;
- (id)_stillWallpaperWithMetadataDictionary:(id)a0 wallpaperAppearance:(id)a1;
- (id)_liveWallpaperWithMetadataDictionary:(id)a0 wallpaperAppearance:(id)a1;
- (id)_stripeWallpaperWithMetadataDictionary:(id)a0 wallpaperAppearance:(id)a1;
- (id)valueBasedWallpaperForLocation:(id)a0 andAppearance:(id)a1;
- (id)_processCommonFileBackedWallpaperMetadataWithDictionary:(id)a0 wallpaperAppearance:(id)a1;
- (id)fileBasedWallpaperForLocation:(id)a0;
- (id)valueBasedWallpaperForLocation:(id)a0;

@end
