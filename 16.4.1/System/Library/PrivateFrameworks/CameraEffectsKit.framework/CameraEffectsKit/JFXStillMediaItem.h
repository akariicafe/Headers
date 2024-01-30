@class PVColorSpace;

@interface JFXStillMediaItem : JTAssetMediaItem

@property (nonatomic) struct CGSize { double width; double height; } sourceImageSize;
@property (nonatomic) BOOL hasGainMap;
@property (retain, nonatomic) PVColorSpace *imageColorSpace;
@property (nonatomic) float meteorPlusHeadroom;

+ (void)stillMediaItemWithLocalURL:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;

- (id)assetURL;
- (void)commonInit;
- (id)info;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)colorSpace;
- (struct CGImage { } *)hdrGainMapImageForURL:(id)a0 renderingIntent:(int)a1;
- (struct CGImage { } *)imageForURL:(id)a0 renderingIntent:(int)a1;
- (BOOL)isImageValid:(id)a0 renderingIntent:(int)a1 size:(struct CGSize { double x0; double x1; } *)a2;
- (int)durationAt30fps;
- (struct CGSize { double x0; double x1; })sizeForQuality:(int)a0;
- (struct CGSize { double x0; double x1; })thumbImageSize:(struct CGSize { double x0; double x1; })a0;
- (double)JT_maximumPixelsForStillImage:(BOOL)a0;
- (BOOL)canBeAddedToSequence;
- (struct CGSize { double x0; double x1; })exportImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)generateLocalURLForAsset;
- (BOOL)hasPhotoCharacteristic;
- (BOOL)hasVisualCharacteristic;
- (struct CGImage { } *)imageForURL:(id)a0 renderingIntent:(int)a1 useAuxillaryMap:(BOOL)a2;
- (struct CGSize { double x0; double x1; })imageSizeForRenderingIntent:(int)a0 originalSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })playBackImageSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForMaxPixels:(double)a0 sourceSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateAssetImageColorSpace;

@end
