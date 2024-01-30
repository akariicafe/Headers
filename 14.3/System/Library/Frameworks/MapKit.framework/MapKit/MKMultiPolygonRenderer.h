@class MKMultiPolygon, VKVectorOverlayPolygonGroup;

@interface MKMultiPolygonRenderer : MKOverlayPathRenderer {
    const struct CGPath **_paths;
    unsigned long long _pathsCount;
    VKVectorOverlayPolygonGroup *_vectorData;
    double _strokeStart;
    double _strokeEnd;
}

@property (nonatomic, getter=_strokeStart, setter=_setStrokeStart:) double strokeStart;
@property (nonatomic, getter=_strokeEnd, setter=_setStrokeEnd:) double strokeEnd;
@property (readonly, nonatomic) MKMultiPolygon *multiPolygon;

+ (Class)_mapkitLeafClass;

- (void)setFillColor:(id)a0;
- (void)setStrokeColor:(id)a0;
- (void)setLineWidth:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_canProvideVectorGeometry;
- (void)setMiterLimit:(double)a0;
- (void)setAlpha:(double)a0;
- (void)_performInitialConfiguration;
- (void)fillPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)strokePath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)overlayCanProvideVectorData:(id)a0;
- (id)vectorDataForOverlay:(id)a0;
- (void)createPath;
- (id)_vectorGeometry;
- (id)initWithMultiPolygon:(id)a0;
- (void)setLineJoin:(int)a0;
- (void)_updateRenderColors;

@end
