@class UIImage, NSUUID, NAIdentity, WKPhotoAssetWallpaper, NSDate, NSString, NSURL;

@interface WKPhotoWallpaperBundle : NSObject <NAIdentifiable, WKWallpaperRepresenting>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (retain, nonatomic) WKPhotoAssetWallpaper *_wallpaper;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isAppearanceAware) BOOL appearanceAware;
@property (readonly, nonatomic, getter=hasDistinctWallpapersForLocations) BOOL distinctWallpapersForLocations;
@property (readonly, nonatomic, getter=isDynamicWallpaperBundle) BOOL dynamicWallpaperBundle;
@property (readonly, copy, nonatomic) NSString *identifierString;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *logicalScreenClass;
@property (readonly, nonatomic) unsigned long long contentSource;
@property (readonly, nonatomic) BOOL disableParallax;
@property (readonly, nonatomic, getter=isOffloaded) BOOL offloaded;
@property (readonly, nonatomic) BOOL supportsCopying;
@property (readonly, nonatomic) BOOL disableModifyingLegibilityBlur;
@property (readonly, copy, nonatomic) NSURL *thumbnailImageURL;
@property (readonly, nonatomic) UIImage *thumbnailImage;

- (unsigned long long)wallpaperBackingTypeForLocation:(id)a0;
- (id)valueBasedWallpaperForLocation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWallpaperRepresentingToDestinationDirectoryURL:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)valueBasedWallpaperForLocation:(id)a0 andAppearance:(id)a1;
- (id)fileBasedWallpaperForLocation:(id)a0;
- (id)thumbnailRepresentableForLocation:(id)a0 andAppearance:(id)a1;
- (id)thumbnailRepresentableForLocation:(id)a0;
- (void).cxx_destruct;
- (id)fileBasedWallpaperForLocation:(id)a0 andAppearance:(id)a1;
- (id)initWithPhotosAsset:(id)a0;

@end
