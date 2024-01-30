@class MKCircle, VKVectorOverlayCircle;

@interface MKCircleRenderer : MKOverlayPathRenderer {
    VKVectorOverlayCircle *_vectorData;
    double _strokeStart;
    double _strokeEnd;
}

@property (readonly, nonatomic) MKCircle *circle;
@property (nonatomic) double strokeStart;
@property (nonatomic) double strokeEnd;

+ (Class)_mapkitLeafClass;

- (void)setFillColor:(id)a0;
- (void)setStrokeColor:(id)a0;
- (void)setLineWidth:(double)a0;
- (void).cxx_destruct;
- (BOOL)_canProvideVectorGeometry;
- (void)setAlpha:(double)a0;
- (id)initWithCircle:(id)a0;
- (void)_performInitialConfiguration;
- (void)strokePath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)overlayCanProvideVectorData:(id)a0;
- (id)vectorDataForOverlay:(id)a0;
- (void)createPath;
- (id)_vectorData;
- (void)_updateRenderColors;

@end
