@interface AXMDataRegressionModelExponential : AXMDataRegressionModel

- (id /* block */)modelFunction;
- (int)modelParameterCount;
- (void)getInitialParams:(double *)a0;
- (id)partialDerivatives;
- (id)modelFunctionStringForParameters:(double *)a0 significantFigures:(int)a1;
- (BOOL)dataSatisfiesInitialConditions;
- (id)modelDescription;

@end
