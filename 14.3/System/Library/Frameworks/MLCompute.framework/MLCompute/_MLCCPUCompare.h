@interface _MLCCPUCompare : _MLCCPULayer

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (id)layerWithDevice:(id)a0 predicate:(int)a1;

- (id)initWithDevice:(id)a0 predicate:(int)a1;

@end
