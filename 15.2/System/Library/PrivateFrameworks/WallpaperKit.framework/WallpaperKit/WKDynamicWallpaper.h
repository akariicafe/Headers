@class NSDictionary, UIImage, NSString;

@interface WKDynamicWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>

@property (retain, nonatomic) NSDictionary *_dynamicDictionary;
@property (retain, nonatomic) UIImage *_thumbnailImage;
@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long backingType;

+ (id)na_identity;

- (id)thumbnailImage;
- (id)initWithIdentifier:(long long)a0 name:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(long long)a0 dictionary:(id)a1;
- (id)wallpaperValue;
- (id /* block */)descriptionBuilderBlock;

@end
