@class NSString, HFCroppedWallpaperInfo;

@interface HFWallpaper : NSObject <NSCopying>

@property (copy, nonatomic) HFCroppedWallpaperInfo *cropInfo;
@property (readonly, copy, nonatomic) NSString *assetIdentifier;
@property (readonly, nonatomic) long long type;

+ (struct CGSize { double x0; double x1; })size;
+ (struct CGSize { double x0; double x1; })contentSizeForWallpaper;
+ (id)customWallpaperWithAssetIdentifier:(id)a0;

- (id)wallpaperIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)sliceIdentifierForVariant:(long long)a0;
- (id)initWithType:(long long)a0 assetIdentifier:(id)a1 cropInfo:(id)a2;

@end
