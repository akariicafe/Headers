@class NSURL, NSString, UIImage;

@interface WKLiveWallpaper : WKStillWallpaper <WKFileBasedWallpaper>

@property (copy, nonatomic) NSURL *videoAssetURL;
@property (nonatomic) double stillTimeInVideo;
@property (readonly, copy, nonatomic) NSURL *fullsizeImageURL;
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

- (id /* block */)descriptionBuilderBlock;
- (id)propertyListRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)copyWallpaperContentsToDestinationDirectoryURL:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithIdentifier:(long long)a0 name:(id)a1 type:(unsigned long long)a2 thumbnailImageURL:(id)a3 fullsizeImageURL:(id)a4 videoAssetURL:(id)a5 stillTimeInVideo:(double)a6;

@end
