@class UIColor, NSString, NSURL, UIImage;

@interface WKStripeWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>

@property (retain, nonatomic) NSURL *_thumbnailImageURL;
@property (retain, nonatomic) UIColor *_backgroundColor;
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
- (unsigned long long)hash;
- (id)wallpaperValue;
- (id)initWithIdentifier:(long long)a0 name:(id)a1 backgroundColor:(id)a2;
- (id /* block */)descriptionBuilderBlock;

@end
