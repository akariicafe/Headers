@class UIColor, NSArray, NSMutableDictionary, MKUsageCounter;

@interface MKOverlayPathRenderer : MKOverlayRenderer {
    UIColor *_fillColor;
    UIColor *_strokeColor;
    double _lineWidth;
    int _lineJoin;
    int _lineCap;
    double _miterLimit;
    double _lineDashPhase;
    NSArray *_lineDashPattern;
    struct CGPath { } *_path;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _runningVectorGeometryAnimationsLock;
    NSMutableDictionary *_runningVectorGeometryAnimations;
}

@property (readonly, nonatomic, getter=_externalSubclassOverridesDrawingMethods) BOOL externalSubclassOverridesDrawingMethods;
@property (weak, nonatomic, getter=_usageCounter, setter=_setUsageCounter:) MKUsageCounter *usageCounter;
@property (retain) UIColor *fillColor;
@property (retain) UIColor *strokeColor;
@property double lineWidth;
@property int lineJoin;
@property int lineCap;
@property double miterLimit;
@property double lineDashPhase;
@property (copy) NSArray *lineDashPattern;
@property (nonatomic) BOOL shouldRasterize;
@property const struct CGPath { } *path;

+ (BOOL)_externalSubclassOverridesDrawingMethods;
+ (Class)_mapkitLeafClass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_animateVectorGeometryIfNecessaryForKey:(id)a0 withStepHandler:(id /* block */)a1;
- (BOOL)_canProvideVectorGeometry;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1 inContext:(struct CGContext { } *)a2;
- (id)initWithOverlay:(id)a0;
- (void)_performInitialConfiguration;
- (void)applyFillPropertiesToContext:(struct CGContext { } *)a0 atZoomScale:(double)a1;
- (void)fillPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)applyStrokePropertiesToContext:(struct CGContext { } *)a0 atZoomScale:(double)a1;
- (void)strokePath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)invalidatePath;
- (BOOL)canDrawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (void)createPath;

@end
