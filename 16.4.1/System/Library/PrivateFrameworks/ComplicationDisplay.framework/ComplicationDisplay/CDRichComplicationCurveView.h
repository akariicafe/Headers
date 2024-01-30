@interface CDRichComplicationCurveView : CDRichComplicationShapeView {
    double _curveWidth;
    double _padding;
    double _drawingBeginAngle;
    double _drawingEndAngle;
}

@property (nonatomic) double beginAngle;
@property (nonatomic) double endAngle;
@property (nonatomic) BOOL clockwise;

- (void)layoutSubviews;
- (void)_updatePath;
- (struct CGPoint { double x0; double x1; })_centerPoint;
- (double)_shapeLineWidth;
- (const struct CGPath { } *)_generatePath;
- (id)_normalizeGradientLocations:(id)a0;
- (struct CGPoint { double x0; double x1; })_pointAtProgress:(float)a0;
- (void)_setupGradientLayer:(id)a0;
- (BOOL)_shouldReverseGradient;
- (double)_outerRadius;
- (double)_angleAtProgress:(float)a0;
- (double)_totalDrawableAngle;
- (id)initWithCurveWidth:(double)a0 padding:(double)a1 beginAngle:(double)a2 endAngle:(double)a3 forDevice:(id)a4 withFilterStyle:(long long)a5;

@end
