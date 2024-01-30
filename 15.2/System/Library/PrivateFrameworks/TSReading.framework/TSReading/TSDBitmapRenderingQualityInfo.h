@class NSMutableDictionary;

@interface TSDBitmapRenderingQualityInfo : NSObject {
    float mCanvasScale;
    NSMutableDictionary *mImageMap;
}

@property (readonly, nonatomic) int quality;

- (void)dealloc;
- (void)cacheProvider:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGImage { } *)degradedImageRefForProvider:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithQuality:(int)a0 canvasScale:(float)a1;

@end
