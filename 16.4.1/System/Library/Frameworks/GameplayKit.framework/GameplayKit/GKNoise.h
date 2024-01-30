@class NSDictionary, NSMutableArray;

@interface GKNoise : NSObject {
    NSMutableArray *_modules;
}

@property (copy, nonatomic) NSDictionary *gradientColors;

+ (id)noiseWithComponentNoises:(id)a0 selectionNoise:(id)a1;
+ (id)noiseWithComponentNoises:(id)a0 selectionNoise:(id)a1 componentBoundaries:(id)a2 boundaryBlendDistances:(id)a3;
+ (id)noiseWithNoiseSource:(id)a0;
+ (id)noiseWithNoiseSource:(id)a0 gradientColors:(id)a1;

- (void)invert;
- (void)scaleBy:(SEL)a0;
- (void)rotateBy:(SEL)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)moveBy:(SEL)a0;
- (void)__blendWithNoise:(id)a0 selectionNoise:(id)a1 selectionRangeLowerBound:(double)a2 selectionRangeUpperBound:(double)a3 selectionBoundaryBlendDistance:(double)a4;
- (void)clampWithLowerBound:(double)a0 upperBound:(double)a1;
- (id)cloneRecursive:(id)a0;
- (id)__modules;
- (void)addWithNoise:(id)a0;
- (void)applyAbsoluteValue;
- (void)applyTurbulenceWithFrequency:(double)a0 power:(double)a1 roughness:(int)a2 seed:(int)a3;
- (void)cacheBinaryModule:(id)a0 rhsNoise:(id)a1;
- (void)cacheQuaternaryModule:(id)a0 xDisplacementNoise:(id)a1 yDisplacementNoise:(id)a2 zDisplacementNoise:(id)a3;
- (void)cacheTernaryModule:(id)a0 rhsNoise:(id)a1 selectionNoise:(id)a2;
- (void)cacheUnaryModule:(id)a0;
- (void)displaceXWithNoise:(id)a0 yWithNoise:(id)a1 zWithNoise:(id)a2;
- (id)initWithNoiseSource:(id)a0;
- (id)initWithNoiseSource:(id)a0 gradientColors:(id)a1;
- (void)maximumWithNoise:(id)a0;
- (void)minimumWithNoise:(id)a0;
- (void)multiplyWithNoise:(id)a0;
- (void)raiseToPower:(double)a0;
- (void)raiseToPowerWithNoise:(id)a0;
- (void)remapValuesToCurveWithControlPoints:(id)a0;
- (void)remapValuesToTerracesWithPeaks:(id)a0 terracesInverted:(BOOL)a1;
- (float)valueAtPosition:(SEL)a0;

@end
