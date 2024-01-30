@interface MPSNDArrayMultiaryGradientKernel : MPSNDArrayMultiaryBase {
    unsigned long long _sourceGradientIndex;
}

- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)initWithDevice:(id)a0 sourceCount:(unsigned long long)a1 sourceGradientIndex:(unsigned long long)a2;
- (void)encodeToCommandBuffer:(id)a0 sourceArrays:(id)a1 sourceGradient:(id)a2 gradientState:(id)a3 destinationArray:(id)a4;
- (id)encodeToCommandBuffer:(id)a0 sourceArrays:(id)a1 sourceGradient:(id)a2 gradientState:(id)a3;
- (void)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceArrays:(id)a2 sourceGradient:(id)a3 gradientState:(id)a4 destinationArray:(id)a5 kernelDAGObject:(id)a6;
- (void)encodeToCommandBuffer:(id)a0 sourceArrays:(id)a1 sourceGradient:(id)a2 gradientState:(id)a3 destinationArray:(id)a4 kernelDAGObject:(id)a5;

@end
