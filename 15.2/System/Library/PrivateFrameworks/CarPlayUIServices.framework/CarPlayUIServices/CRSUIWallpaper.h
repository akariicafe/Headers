@class NSString;

@interface CRSUIWallpaper : NSObject

@property (retain, nonatomic) NSString *wallpaperAssetCatalogName;
@property (retain, nonatomic) NSString *thumbnailAssetCatalogName;
@property (readonly, copy, nonatomic) NSString *wallpaperIdentifier;
@property (readonly, nonatomic) BOOL supportsDynamicAppearance;
@property (readonly, nonatomic) BOOL supportsDashboardPlatterMaterials;
@property (readonly, nonatomic) BOOL iconLabelsRequireBackground;

+ (id)_wallpaperInfo;

- (id)description;
- (void).cxx_destruct;
- (id)wallpaperColor;
- (id)initWithWallpaperIdentifier:(id)a0;
- (id)wallpaperImageCompatibleWithTraitCollection:(id)a0;
- (id)thumbnailImageCompatibleWithTraitCollection:(id)a0;
- (id)thumbnailColor;

@end
