@class NSURL, UIImage;

@interface WKThumbnailWallpaper : WKAbstractWallpaper

@property (copy, nonatomic) NSURL *thumbnailImageURL;
@property (retain, nonatomic) UIImage *_thumbnailImage;

+ (id)na_identity;

- (BOOL)supportsCopying;
- (BOOL)supportsSerialization;
- (id)thumbnailImage;
- (id /* block */)descriptionBuilderBlock;
- (id)propertyListRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)copyWallpaperContentsToDestinationDirectoryURL:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithIdentifier:(long long)a0 name:(id)a1 type:(unsigned long long)a2 representedType:(unsigned long long)a3 backingType:(unsigned long long)a4 thumbnailImageURL:(id)a5;

@end
