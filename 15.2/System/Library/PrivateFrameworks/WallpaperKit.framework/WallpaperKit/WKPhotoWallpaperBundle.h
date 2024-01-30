@class NSUUID, NAIdentity, WKPhotoAssetWallpaper, NSDate, NSString, NSURL;

@interface WKPhotoWallpaperBundle : NSObject <NAIdentifiable, WKWallpaperRepresenting>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (retain, nonatomic) WKPhotoAssetWallpaper *_wallpaper;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSURL *thumbnailImageURL;
@property (readonly, nonatomic, getter=isAppearanceAware) BOOL appearanceAware;
@property (readonly, nonatomic, getter=hasDistinctWallpapersForLocations) BOOL distinctWallpapersForLocations;
@property (readonly, nonatomic, getter=isDynamicWallpaperBundle) BOOL dynamicWallpaperBundle;
@property (readonly, copy, nonatomic) NSString *identifierString;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long contentSource;
@property (readonly, nonatomic) BOOL disableParallax;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)fileBasedWallpaperForLocation:(id)a0 andAppearance:(id)a1;
- (unsigned long long)wallpaperBackingTypeForLocation:(id)a0;
- (id)valueBasedWallpaperForLocation:(id)a0 andAppearance:(id)a1;
- (id)fileBasedWallpaperForLocation:(id)a0;
- (id)valueBasedWallpaperForLocation:(id)a0;
- (id)initWithPhotosAsset:(id)a0;

@end
