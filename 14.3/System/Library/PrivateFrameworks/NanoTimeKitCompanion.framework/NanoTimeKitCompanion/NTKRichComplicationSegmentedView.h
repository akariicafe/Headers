@class NSMutableArray;

@interface NTKRichComplicationSegmentedView : NTKRichComplicationCurveView

@property (retain, nonatomic) NSMutableArray *segments;

+ (BOOL)isXL;

- (void).cxx_destruct;
- (void)setProgress:(double)a0;
- (void)setGradientColors:(id)a0;
- (void)_updateSegmentsWithColors:(id)a0;
- (void)_addSegmentsToLayer:(id)a0;
- (double)_arcAngleWithOuterRadius:(double)a0 segmentGapAngle:(double)a1 numberOfSegments:(unsigned long long)a2;
- (long long)_segmentShapeStyleForIndex:(unsigned long long)a0 angle:(double)a1;
- (id)_colorForSegment:(id)a0;
- (void)_setupShapeLayer:(id)a0;
- (id)_shapeStrokeColor;

@end
