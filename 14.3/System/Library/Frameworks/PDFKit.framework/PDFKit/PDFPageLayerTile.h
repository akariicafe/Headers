@class PDFPageLayer, PDFTileSurface;

@interface PDFPageLayerTile : CALayer <PDFTilePoolDelegate> {
    PDFPageLayer *pageLayer;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } renderingTransform;
    double tileContentsScale;
    PDFTileSurface *pageSurface;
    int generationID;
    _Atomic BOOL isWorking;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalFrame;
}

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rootViewFrame;

- (void).cxx_destruct;
- (void)dealloc;
- (void)hasStartedWork;
- (void)recievePDFTileSurface:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPageLayer:(id)a1 withRenderingTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 tileContentsScale:(double)a3 generationID:(int)a4;
- (BOOL)isWorking;

@end
