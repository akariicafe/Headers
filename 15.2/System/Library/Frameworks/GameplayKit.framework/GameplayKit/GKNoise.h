@class NSDictionary, NSMutableArray;

@interface GKNoise : NSObject {
    NSMutableArray *_modules;
}

@property (copy, nonatomic) NSDictionary *gradientColors;

+ (id)noiseWithNoiseSource:(id)a0;
+ (id)noiseWithComponentNoises:(id)a0 selectionNoise:(id)a1 componentBoundaries:(id)a2 boundaryBlendDistances:(id)a3;
+ (id)noiseWithNoiseSource:(id)a0 gradientColors:(id)a1;
+ (id)noiseWithComponentNoises:(id)a0 selectionNoise:(id)a1;

- (void)invert;
- (void)scaleBy:(SEL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)rotateBy:(SEL)a0;
- (void)moveBy:(SEL)a0;
- (void)dealloc;
- (id)__modules;
- (float)valueAtPosition:(SEL)a0;
- (id)initWithNoiseSource:(id)a0;
- (id)initWithNoiseSource:(id)a0 gradientColors:(id)a1;
- (void)multiplyWithNoise:(id)a0;
- (void)addWithNoise:(id)a0;
- (void)__blendWithNoise:(id)a0 selectionNoise:(id)a1 selectionRangeLowerBound:(double)a2 selectionRangeUpperBound:(double)a3 selectionBoundaryBlendDistance:(double)a4;
- (id)cloneRecursive:(id)a0;
- (void)cacheUnaryModule:(id)a0;
- (void)cacheBinaryModule:(id)a0 rhsNoise:(id)a1;
- (void)cacheQuaternaryModule:(id)a0 xDisplacementNoise:(id)a1 yDisplacementNoise:(id)a2 zDisplacementNoise:(id)a3;
- (void)cacheTernaryModule:(id)a0 rhsNoise:(id)a1 selectionNoise:(id)a2;
- (void)applyAbsoluteValue;
- (void)clampWithLowerBound:(double)a0 upperBound:(double)a1;
- (void)raiseToPower:(double)a0;
- (void)applyTurbulenceWithFrequency:(double)a0 power:(double)a1 roughness:(int)a2 seed:(int)a3;
- (void)remapValuesToCurveWithControlPoints:(id)a0;
- (void)remapValuesToTerracesWithPeaks:(id)a0 terracesInverted:(BOOL)a1;
- (void)minimumWithNoise:(id)a0;
- (void)maximumWithNoise:(id)a0;
- (void)raiseToPowerWithNoise:(id)a0;
- (void)displaceXWithNoise:(id)a0 yWithNoise:(id)a1 zWithNoise:(id)a2;

@end
