@class CMPhotoTiledLayer;

@interface FigPhotoTiledLayer : CALayer {
    CMPhotoTiledLayer *_tiledLayer;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (readonly, nonatomic) long long imageOrientation;

- (void)flushCache;
- (void)sizeToFit;
- (void)dealloc;
- (id)initWithContainerData:(id)a0 containerImageIndex:(long long)a1 backgroundImageSize:(struct CGSize { double x0; double x1; })a2 screenSize:(struct CGSize { double x0; double x1; })a3;
- (id)initWithContainerData:(id)a0 containerImageIndex:(long long)a1 placeholderImage:(struct CGImage { } *)a2 screenSize:(struct CGSize { double x0; double x1; })a3;
- (id)initWithContainerURL:(id)a0 containerImageIndex:(long long)a1 backgroundImageSize:(struct CGSize { double x0; double x1; })a2 screenSize:(struct CGSize { double x0; double x1; })a3;
- (void)setVisibleRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1;

@end
