@class VKVectorOverlayPolylineGroup, MKMultiPolyline;

@interface MKMultiPolylineRenderer : MKOverlayPathRenderer {
    VKVectorOverlayPolylineGroup *_vectorGeometry;
    double _strokeStart;
    double _strokeEnd;
}

@property (nonatomic, getter=_strokeStart, setter=_setStrokeStart:) double strokeStart;
@property (nonatomic, getter=_strokeEnd, setter=_setStrokeEnd:) double strokeEnd;
@property (readonly, nonatomic) MKMultiPolyline *multiPolyline;

+ (Class)_mapkitLeafClass;

- (void)setStrokeColor:(id)a0;
- (void)setLineWidth:(double)a0;
- (void).cxx_destruct;
- (id)initWithMultiPolyline:(id)a0;
- (void)setLineCap:(int)a0;
- (BOOL)_canProvideVectorGeometry;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1 inContext:(struct CGContext { } *)a2;
- (void)setMiterLimit:(double)a0;
- (void)setAlpha:(double)a0;
- (void)_performInitialConfiguration;
- (BOOL)overlayCanProvideVectorData:(id)a0;
- (id)vectorDataForOverlay:(id)a0;
- (void)createPath;
- (id)_vectorGeometry;
- (void)setLineJoin:(int)a0;
- (void)_updateRenderColors;

@end
