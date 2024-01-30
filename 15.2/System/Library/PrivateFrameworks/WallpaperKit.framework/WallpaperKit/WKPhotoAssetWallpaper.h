@class PHAsset, NSString;

@interface WKPhotoAssetWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>

@property (retain, nonatomic) PHAsset *_asset;
@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long backingType;

- (id)thumbnailImage;
- (void).cxx_destruct;
- (id)wallpaperValue;
- (id)initWithPhotoAsset:(id)a0;

@end
