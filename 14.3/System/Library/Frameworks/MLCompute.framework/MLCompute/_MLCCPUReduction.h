@interface _MLCCPUReduction : _MLCCPULayer

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (id)layerWithDevice:(id)a0 reduceType:(int)a1 dimension:(unsigned long long)a2 sourceShapeCount:(unsigned long long)a3;

- (id)initWithDevice:(id)a0 reduceType:(int)a1 dimension:(unsigned long long)a2;

@end
