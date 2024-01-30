@interface _MLCGPUPooling : _MLCGPULayer

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (id)layerWithDevice:(id)a0 descriptor:(id)a1 paddingSizes:(unsigned long long[4])a2;

- (id)initWithDevice:(id)a0 descriptor:(id)a1 paddingSizes:(unsigned long long[4])a2;

@end
