@interface TTKSimpleContinuousPathGenerator : TTKDefaultContinuousPathGenerator {
    double _currentTimestamp;
}

- (id)initWithParams:(id)a0;
- (BOOL)canHandleDoubleLetter;
- (id)generatePathFromInflectionPoints:(id)a0 segmentTiming:(id)a1 keys:(id)a2 string:(id)a3 layout:(id)a4;
- (id)generatePathFromInflectionPoints:(id)a0 timestamp:(double)a1 duration:(double)a2 segmentTiming:(id)a3 keys:(id)a4 string:(id)a5 layout:(id)a6;
- (id)generatePathFromInflectionPoints:(id)a0 timestamp:(double)a1 segmentTiming:(id)a2 keys:(id)a3 string:(id)a4 layout:(id)a5;

@end
