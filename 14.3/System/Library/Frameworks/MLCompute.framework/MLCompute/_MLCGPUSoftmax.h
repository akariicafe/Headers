@interface _MLCGPUSoftmax : _MLCGPULayer

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (id)layerWithDevice:(id)a0 operation:(int)a1 dimension:(unsigned long long)a2;

- (id)initWithDevice:(id)a0 operation:(int)a1 dimension:(unsigned long long)a2;

@end
