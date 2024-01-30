@class NSURL;

@interface WKLayeredStillWallpaperInput : WKLayeredThumbnailWallpaperInput

@property (readonly, copy, nonatomic) NSURL *backgroundFullSizeImageURL;
@property (readonly, copy, nonatomic) NSURL *foregroundFullSizeImageURL;
@property (readonly, copy, nonatomic) NSURL *floatingFullSizeImageURL;

+ (id)na_identity;

- (id /* block */)descriptionBuilderBlock;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)wk_descriptionBuilder;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBackgroundThumbnailImageURL:(id)a0 foregroundThumbnailImageURL:(id)a1 floatingThumbnailImageURL:(id)a2 backgroundFullSizeImageURL:(id)a3 foregroundFullSizeImageURL:(id)a4 floatingFullSizeImageURL:(id)a5;

@end
