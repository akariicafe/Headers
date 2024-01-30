@interface _MLCCPUSlice : _MLCCPULayer

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (id)layerWithDevice:(id)a0 begin:(id)a1 end:(id)a2 stride:(id)a3;

- (id)initWithDevice:(id)a0 begin:(id)a1 end:(id)a2 stride:(id)a3;

@end
