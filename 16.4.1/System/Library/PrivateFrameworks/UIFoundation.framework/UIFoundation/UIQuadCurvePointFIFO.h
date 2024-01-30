@class _UIPointVector, UIView;

@interface UIQuadCurvePointFIFO : UIPointFIFO

@property (nonatomic) float unitScale;
@property (nonatomic) BOOL emitInterpolatedPoints;
@property (copy) id /* block */ emissionHandler;
@property (nonatomic) struct CGPath { } *path;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) _UIPointVector *prevPoints;
@property (retain, nonatomic) _UIPointVector *points;
@property (retain, nonatomic) _UIPointVector *controlPoints;
@property (nonatomic) void /* unknown type, empty encoding */ lastPoint;
@property (retain, nonatomic) UIView *view;

+ (void /* unknown type, empty encoding */)interpolateFromPoint:(id)a0 toPoint:(SEL)a1 controlPoint:(float)a2 time:(void /* unknown type, empty encoding */)a3;

- (void)addPoint:(SEL)a0;
- (void)flush;
- (void)dealloc;
- (void)clear;
- (id)initWithFIFO:(id)a0;
- (void)enumerateInterpolationFromPoint:(id)a0 toPoint:(SEL)a1 controlPoint:(id /* block */)a2 usingBlock:(void /* unknown type, empty encoding */)a3;
- (id)initWithFIFO:(id)a0 strokeView:(id)a1;
- (void)setUnitScaleForViewSize:(struct CGSize { double x0; double x1; })a0 normalizedSize:(struct CGSize { double x0; double x1; })a1 contentScaleFactor:(double)a2;

@end
