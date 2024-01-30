@class NSString, NSURL, WKLayeredAnimationWallpaperInput, UIImage;

@interface WKLayeredAnimationWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>

@property (retain, nonatomic) WKLayeredAnimationWallpaperInput *_wallpaperValue;
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
- (id)initWithIdentifier:(long long)a0 name:(id)a1 backgroundAnimationFileURL:(id)a2 foregroundAnimationFileURL:(id)a3 floatingAnimationFileURL:(id)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)copyWallpaperContentsToDestinationDirectoryURL:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
