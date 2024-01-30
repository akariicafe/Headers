@class NSString;

@interface TTKDefaultContinuousPathGenerator : NSObject <TTKContinuousPathGenerator> {
    BOOL _genMidPoint;
    double _fingerKeyWdithMultiple;
    double _midPointKeyWidthMultiple;
    double _midPointDevKeyHeightMultiple;
    double _betaParam;
    double _normalKeyWidthMultiple;
    NSString *_touchTimingAlgorithm;
    double _acceleration;
    void *m_generator;
    void *m_gamma_distribution;
    void *m_normal_distribution;
}

@property double velocity;
@property double force;
@property double timeDelta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pathGeneratorWithAttributes:(id)a0;

- (id)initWithParams:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (struct CGPoint { double x0; double x1; })addPoint:(struct CGPoint { double x0; double x1; })a0 andPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)boxPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)canHandleDoubleLetter;
- (double)distanceBetween:(struct CGPoint { double x0; double x1; })a0 andPoint:(struct CGPoint { double x0; double x1; })a1;
- (double)dotProduct:(struct CGPoint { double x0; double x1; })a0 andPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)generateAngularTiming:(id)a0;
- (id)generateEquidistantTiming:(id)a0;
- (id)generateInflections:(id)a0;
- (id)generateKeyCentersFromKeys:(id)a0 string:(id)a1 layout:(id)a2;
- (id)generateKeysFromString:(id)a0 layout:(id)a1;
- (id)generatePathFromInflectionPoints:(id)a0 segmentTiming:(id)a1 keys:(id)a2 string:(id)a3 layout:(id)a4;
- (id)generatePathFromInflectionPoints:(id)a0 timestamp:(double)a1 duration:(double)a2 segmentTiming:(id)a3 keys:(id)a4 string:(id)a5 layout:(id)a6;
- (id)generatePathFromInflectionPoints:(id)a0 timestamp:(double)a1 segmentTiming:(id)a2 keys:(id)a3 string:(id)a4 layout:(id)a5;
- (id)generatePathFromString:(id)a0 layout:(id)a1;
- (id)generatePathFromString:(id)a0 timestamp:(double)a1 duration:(double)a2 layout:(id)a3;
- (id)generatePathFromString:(id)a0 timestamp:(double)a1 layout:(id)a2;
- (id)generateTimingArray:(id)a0;
- (double)randomNumberFromBetaDistribution;
- (double)randomNumberFromNormalDistribution;
- (struct CGPoint { double x0; double x1; })scalarMultiplyPoint:(struct CGPoint { double x0; double x1; })a0 by:(double)a1;
- (void)setRandomNumberSeed:(unsigned int)a0;
- (struct CGPoint { double x0; double x1; })subtractPoint:(struct CGPoint { double x0; double x1; })a0 byPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })targetDeviatedNormallyFromPoint:(struct CGPoint { double x0; double x1; })a0 withKeyWidth:(double)a1;

@end
