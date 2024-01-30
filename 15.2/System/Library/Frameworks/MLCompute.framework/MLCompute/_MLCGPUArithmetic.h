@interface _MLCGPUArithmetic : _MLCGPULayer

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (id)layerWithDevice:(id)a0 operation:(int)a1 activationDescriptor:(id)a2;

- (id)initWithDevice:(id)a0 operation:(int)a1 activationDescriptor:(id)a2;

@end
