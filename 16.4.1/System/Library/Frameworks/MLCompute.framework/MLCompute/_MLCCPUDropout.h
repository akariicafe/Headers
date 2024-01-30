@interface _MLCCPUDropout : _MLCCPULayer

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (id)layerWithDevice:(id)a0 rate:(float)a1 seed:(unsigned long long)a2;

- (id)initWithDevice:(id)a0 rate:(float)a1 seed:(unsigned long long)a2;

@end
