@class PVColorSpace;

@interface JFXStillMediaItem : JTAssetMediaItem

@property (nonatomic) struct CGSize { double width; double height; } sourceImageSize;
@property (retain, nonatomic) PVColorSpace *imageColorSpace;

+ (void)stillMediaItemWithLocalURL:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;

- (id)colorSpace;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)commonInit;
- (unsigned long long)hash;
- (id)info;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)assetURL;
- (int)durationAt30fps;
- (BOOL)canBeAddedToSequence;
- (BOOL)hasVisualCharacteristic;
- (BOOL)hasPhotoCharacteristic;
- (struct CGSize { double x0; double x1; })sizeForQuality:(int)a0;
- (struct CGSize { double x0; double x1; })playBackImageSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })exportImageSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })imageSizeForRenderingIntent:(int)a0 originalSize:(struct CGSize { double x0; double x1; })a1;
- (double)JT_maximumPixelsForStillImage:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForMaxPixels:(double)a0 sourceSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })thumbImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)generateLocalURLForAsset;
- (struct CGImage { } *)imageForURL:(id)a0 renderingIntent:(int)a1;
- (BOOL)isImageValid:(id)a0 renderingIntent:(int)a1 size:(struct CGSize { double x0; double x1; } *)a2;

@end
