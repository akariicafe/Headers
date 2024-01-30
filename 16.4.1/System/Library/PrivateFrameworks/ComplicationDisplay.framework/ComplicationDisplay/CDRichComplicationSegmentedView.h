@class NSMutableArray;

@interface CDRichComplicationSegmentedView : CDRichComplicationCurveView

@property (retain, nonatomic) NSMutableArray *segments;

+ (BOOL)isXL;

- (void)setProgress:(double)a0;
- (void).cxx_destruct;
- (void)setGradientColors:(id)a0;
- (void)_setupShapeLayer:(id)a0;
- (id)_shapeStrokeColor;
- (void)_addSegmentsToLayer:(id)a0;
- (double)_arcAngleWithOuterRadius:(double)a0 segmentGapAngle:(double)a1 numberOfSegments:(unsigned long long)a2;
- (id)_colorForSegment:(id)a0;
- (long long)_segmentShapeStyleForIndex:(unsigned long long)a0 angle:(double)a1;
- (void)_updateSegmentsWithColors:(id)a0;

@end
