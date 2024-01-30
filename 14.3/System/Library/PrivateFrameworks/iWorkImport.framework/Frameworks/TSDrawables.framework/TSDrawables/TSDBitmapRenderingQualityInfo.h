@class NSMutableDictionary;

@interface TSDBitmapRenderingQualityInfo : NSObject {
    NSMutableDictionary *mImageMap;
}

@property (readonly, nonatomic) int quality;
@property (readonly, nonatomic) double canvasScale;

- (void)dealloc;
- (void)cacheProvider:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGImage { } *)degradedImageRefForProvider:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithQuality:(int)a0 canvasScale:(float)a1;
- (double)qualityScaleForSize:(struct CGSize { double x0; double x1; })a0;
- (Class)imageMapValueClass;
- (void)doneCaching:(id)a0 forProvider:(id)a1;

@end
