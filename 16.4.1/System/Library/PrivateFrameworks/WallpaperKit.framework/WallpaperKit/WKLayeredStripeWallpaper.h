@class NSString, UIImage, NSURL, WKLayeredStripeWallpaperInput;

@interface WKLayeredStripeWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>

@property (retain, nonatomic) UIImage *_thumbnailImage;
@property (retain, nonatomic) WKLayeredStripeWallpaperInput *_wallpaperValue;
@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long representedType;
@property (readonly, nonatomic) unsigned long long backingType;
@property (readonly, nonatomic) BOOL supportsSerialization;
@property (readonly, nonatomic) BOOL supportsCopying;
@property (readonly, copy, nonatomic) NSURL *thumbnailImageURL;
@property (readonly, nonatomic) UIImage *thumbnailImage;

+ (id)na_identity;

- (id)wallpaperValue;
- (id /* block */)descriptionBuilderBlock;
- (id)propertyListRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithIdentifier:(long long)a0 name:(id)a1 backgroundColor:(id)a2 stripeAngleDegrees:(double)a3 stripeHeightFactor:(double)a4 firstStripeOffsetScaleFactor:(double)a5;

@end
