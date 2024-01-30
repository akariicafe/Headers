@interface _MLCCPUArithmetic : _MLCCPULayer

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (id)layerWithDevice:(id)a0 operation:(int)a1;
+ (unsigned int)bnnsArithmeticFunctionFor:(int)a0;
+ (int)arithmeticOperatorTypeFor:(int)a0;

- (id)initWithDevice:(id)a0 operation:(int)a1;

@end
