@class NSString, NSArray;

@interface AXMDataRegressionModel : NSObject

@property (readonly, nonatomic) BOOL dataSatisfiesInitialConditions;
@property (readonly, nonatomic) NSString *modelDescription;
@property (readonly, nonatomic) double error;
@property (readonly, nonatomic) double score;
@property (nonatomic) BOOL isDisqualified;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) double *bestFitParameters;
@property (readonly, nonatomic) int modelParameterCount;
@property (readonly, nonatomic) id /* block */ modelFunction;
@property (readonly, nonatomic) NSArray *partialDerivatives;
@property (readonly, nonatomic) int iterations;
@property (readonly, nonatomic) double *x;
@property (readonly, nonatomic) double *y;
@property (readonly, nonatomic) int n;

+ (id)getModelForX:(double *)a0 y:(double *)a1 n:(int)a2;

- (void)dealloc;
- (double)magnitude:(double *)a0 size:(int)a1;
- (void)computeScore;
- (void)disqualifyModelIfNecessary;
- (double)fitDataWithModelParams:(double *)a0 finalParams:(double *)a1;
- (void)getDiagonal:(double *)a0 size:(int)a1 result:(double *)a2;
- (void)getGradientForX:(double)a0 parameterValues:(double *)a1 result:(double *)a2;
- (void)getIdentityMatrixWithSize:(int)a0 scalar:(double)a1 result:(double *)a2;
- (void)getInitialParams:(double *)a0;
- (void)getJacobianForParameters:(double *)a0 gradient:(double *)a1 result:(double *)a2;
- (int)getMatrixInverse:(double *)a0 size:(int)a1 pivot:(int *)a2 tmp:(double *)a3 result:(double *)a4;
- (void)getResidualsVector:(double *)a0 result:(double *)a1;
- (void)getSMA:(double *)a0 lookback:(int)a1;
- (id)initWithXValues:(double *)a0 yValues:(double *)a1 count:(int)a2;
- (id)modelFunctionStringForParameters:(double *)a0 significantFigures:(int)a1;
- (void)printMatrix:(double *)a0 rows:(int)a1 cols:(int)a2;
- (double)roundNumber:(double)a0 withSignificantFigures:(unsigned long long)a1;
- (void)sortDataPoints;

@end
