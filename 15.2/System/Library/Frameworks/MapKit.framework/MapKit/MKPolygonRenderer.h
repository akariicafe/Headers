@class VKVectorOverlayPolygonGroup, MKPolygon;

@interface MKPolygonRenderer : MKOverlayPathRenderer {
    VKVectorOverlayPolygonGroup *_vectorData;
    double _strokeStart;
    double _strokeEnd;
}

@property (readonly, nonatomic) MKPolygon *polygon;
@property (nonatomic) double strokeStart;
@property (nonatomic) double strokeEnd;

+ (Class)_mapkitLeafClass;

- (void)setLineWidth:(double)a0;
- (void)setFillColor:(id)a0;
- (void)setStrokeColor:(id)a0;
- (void)setAlpha:(double)a0;
- (void)setMiterLimit:(double)a0;
- (void).cxx_destruct;
- (void)_performInitialConfiguration;
- (void)fillPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)strokePath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (id)vectorDataForOverlay:(id)a0;
- (BOOL)overlayCanProvideVectorData:(id)a0;
- (id)initWithPolygon:(id)a0;
- (BOOL)_canProvideVectorGeometry;
- (void)setLineJoin:(int)a0;
- (void)createPath;
- (id)_vectorGeometry;
- (void)_updateRenderColors;

@end
