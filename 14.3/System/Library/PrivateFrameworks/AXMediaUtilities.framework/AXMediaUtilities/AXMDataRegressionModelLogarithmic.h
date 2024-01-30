@interface AXMDataRegressionModelLogarithmic : AXMDataRegressionModel

- (id /* block */)modelFunction;
- (int)modelParameterCount;
- (void)getInitialParams:(double *)a0;
- (id)partialDerivatives;
- (id)modelFunctionStringForParameters:(double *)a0 significantFigures:(int)a1;
- (id)modelDescription;

@end
