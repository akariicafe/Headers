@class NSCache, UIColor;

@interface PXPlacesPopoverImageFactory : NSObject

@property (class, readonly) PXPlacesPopoverImageFactory *sharedInstance;

@property (retain, nonatomic) NSCache *cachedBackgroundImages;
@property (retain, nonatomic) UIColor *defaultBackgroundColor;

+ (struct CGSize { double x0; double x1; })backgroundImageSizeForType:(unsigned long long)a0 usingTraitCollection:(id)a1;

- (id)imageNamed:(id)a0;
- (struct CGSize { double x0; double x1; })backgroundImageSizeForType:(unsigned long long)a0 usingTraitCollection:(id)a1;
- (struct CGImage { } *)newImage:(struct CGImage { } *)a0 croppedToAspectRatio:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })thumbnailImageSizeForImageType:(unsigned long long)a0 usingTraitCollection:(id)a1 includeScale:(BOOL)a2;
- (id)_fetchAndCacheBackgroundImageWithName:(id)a0;
- (struct CGSize { double x0; double x1; })backgroundImageSizeForPopoverAnnotation;
- (id)createPopoverImageForGeotaggable:(id)a0 withImage:(struct CGImage { } *)a1 imageType:(unsigned long long)a2 imageOptions:(unsigned long long)a3 usingTraitCollection:(id)a4;
- (id)annotationPlaceHolderImageUsingTraitCollection:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)thumbnailTopMarginForImageType:(unsigned long long)a0 usingTraitCollection:(id)a1;
- (id)_thumbnailShadowForType:(unsigned long long)a0 usingTraitCollection:(id)a1;
- (id)createAlbumPlaceHolderImageUsingTraitCollection:(id)a0;
- (id)backgroundImageNameForType:(unsigned long long)a0 usingTraitCollection:(id)a1;

@end
