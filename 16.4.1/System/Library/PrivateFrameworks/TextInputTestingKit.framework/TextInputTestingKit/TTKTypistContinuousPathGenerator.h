@interface TTKTypistContinuousPathGenerator : TTKDefaultContinuousPathGenerator {
    double _currentTimestamp;
}

@property (nonatomic) double alpha;

- (id)initWithParams:(id)a0;
- (id)_generateControlPoints:(id)a0 alpha:(double)a1;
- (id)_generateTouchPointsOnPath:(id)a0 withSegmentTiming:(id)a1;
- (struct CGPoint { double x0; double x1; })_pointOnCurve:(id)a0 atTime:(double)a1;
- (id)generatePathFromInflectionPoints:(id)a0 segmentTiming:(id)a1 keys:(id)a2 string:(id)a3 layout:(id)a4;
- (id)generatePathFromInflectionPoints:(id)a0 timestamp:(double)a1 segmentTiming:(id)a2 keys:(id)a3 string:(id)a4 layout:(id)a5;

@end
