@interface _MLCCPUScatter : _MLCCPULayer

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (id)layerWithDevice:(id)a0 dimension:(unsigned long long)a1 reduceType:(int)a2;

- (id)initWithDevice:(id)a0 dimension:(unsigned long long)a1 reduceType:(int)a2;

@end
