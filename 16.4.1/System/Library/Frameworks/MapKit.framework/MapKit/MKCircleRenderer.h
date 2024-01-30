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

- (void)setLineWidth:(double)a0;
- (void)setFillColor:(id)a0;
- (void)setStrokeColor:(id)a0;
- (void)setAlpha:(double)a0;
- (void)createPath;
- (void).cxx_destruct;
- (id)initWithCircle:(id)a0;
- (BOOL)_canProvideVectorGeometry;
- (void)_performInitialConfiguration;
- (void)_updateRenderColors;
- (id)_vectorData;
- (BOOL)overlayCanProvideVectorData:(id)a0;
- (void)strokePath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (id)vectorDataForOverlay:(id)a0;

@end
