@interface MPSNDArrayUnaryGradientKernel : MPSNDArrayMultiaryGradientKernel

+ (unsigned long long)expectedVirtualSourceCount;

- (id)initWithDevice:(id)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)encodeToCommandBuffer:(id)a0 sourceArray:(id)a1 sourceGradient:(id)a2 gradientState:(id)a3 destinationArray:(id)a4;
- (id)encodeToCommandBuffer:(id)a0 sourceArray:(id)a1 sourceGradient:(id)a2 gradientState:(id)a3;

@end
