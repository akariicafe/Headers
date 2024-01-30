@class PDFTilePoolPrivate;

@interface PDFTilePool : NSObject {
    PDFTilePoolPrivate *_private;
}

+ (id)sharedPool;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_renderTileForRequest:(id)a0;
- (int)tileSurfaceType;
- (int)tileSurfaceSize;
- (id)_createTileSurfaceForRequest:(id)a0;
- (struct CGContext { } *)_createContextForTileSurface:(id)a0 ofRequest:(id)a1;
- (void)setTileSurfaceType:(int)a0;
- (void)saveBitmapFiles;
- (void)requestPDFTileSurfaceForTarget:(id)a0 forPage:(id)a1 withRenderingProperties:(id)a2 atZoomFactor:(double)a3 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a5 tag:(int)a6;
- (void)releasePDFTileSurface:(id)a0;
- (int)activeTileCount;

@end
