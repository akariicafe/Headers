@interface AXMDataRegressionModelLinear : AXMDataRegressionModel

@property (readonly, nonatomic) double rSquared;

- (id)modelDescription;
- (id /* block */)modelFunction;
- (int)modelParameterCount;
- (void)getInitialParams:(double *)a0;
- (id)partialDerivatives;
- (id)modelFunctionStringForParameters:(double *)a0 significantFigures:(int)a1;
- (double)fitDataWithModelParams:(double *)a0 finalParams:(double *)a1;

@end
