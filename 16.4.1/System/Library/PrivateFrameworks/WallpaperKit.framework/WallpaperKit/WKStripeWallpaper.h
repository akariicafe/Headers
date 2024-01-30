@class UIColor, NSString, NSURL, UIImage;

@interface WKStripeWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>

@property (retain, nonatomic) NSURL *_thumbnailImageURL;
@property (retain, nonatomic) UIColor *_backgroundColor;
@property (retain, nonatomic) UIImage *_thumbnailImage;
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
- (id)initWithIdentifier:(long long)a0 name:(id)a1 backgroundColor:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(long long)a0 name:(id)a1;
- (void).cxx_destruct;

@end
