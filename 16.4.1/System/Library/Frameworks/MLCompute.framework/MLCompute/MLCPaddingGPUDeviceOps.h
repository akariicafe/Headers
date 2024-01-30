@interface MLCPaddingGPUDeviceOps : MLCGPUDeviceOps

@property (nonatomic) int paddingType;
@property (nonatomic) float paddingValue;
@property (retain, nonatomic) id paddingGradientAccumulateKernel;

+ (id)deviceOpsWithForwardKernel:(id)a0 gradientKernel:(id)a1;

- (void).cxx_destruct;
- (id)initWithForwardKernel:(id)a0 gradientKernel:(id)a1;

@end
