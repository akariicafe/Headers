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

- (void)setLineWidth:(double)a0;
- (void)setStrokeColor:(id)a0;
- (void)setAlpha:(double)a0;
- (id)initWithMultiPolyline:(id)a0;
- (void)setMiterLimit:(double)a0;
- (void).cxx_destruct;
- (void)_performInitialConfiguration;
- (id)vectorDataForOverlay:(id)a0;
- (BOOL)overlayCanProvideVectorData:(id)a0;
- (BOOL)_canProvideVectorGeometry;
- (void)setLineCap:(int)a0;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1 inContext:(struct CGContext { } *)a2;
- (void)setLineJoin:(int)a0;
- (void)createPath;
- (id)_vectorGeometry;
- (void)_updateRenderColors;

@end
