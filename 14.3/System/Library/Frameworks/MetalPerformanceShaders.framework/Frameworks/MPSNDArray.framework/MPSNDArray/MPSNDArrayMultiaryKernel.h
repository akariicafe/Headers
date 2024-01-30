@interface MPSNDArrayMultiaryKernel : MPSNDArrayMultiaryBase {
    void /* function */ *_encode;
}

- (id)initWithDevice:(id)a0 sourceCount:(unsigned long long)a1;
- (void)encodeToCommandBuffer:(id)a0 sourceArrays:(id)a1 destinationArray:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)encodeToCommandBuffer:(id)a0 sourceArrays:(id)a1 resultState:(id)a2 destinationArray:(id)a3;
- (BOOL)supportsGradientForSourceIndex:(unsigned long long)a0;
- (id)encodeToCommandBuffer:(id)a0 sourceArrays:(id)a1;
- (id)encodeToCommandBuffer:(id)a0 sourceArrays:(id)a1 resultState:(id *)a2 outputStateIsTemporary:(BOOL)a3;
- (void)encodeToCommandBuffer:(id)a0 sourceArrays:(id)a1 resultState:(id)a2 destinationArray:(id)a3 kernelDAGObject:(id)a4;
- (id)destinationGradientArrayDescriptorsForSourceArrays:(id)a0 sourceGradient:(id)a1 sourceState:(id)a2;
- (void)encodeGradientsToCommandBuffer:(id)a0 sourceArrays:(id)a1 sourceGradient:(id)a2 gradientState:(id)a3 destinationGradients:(id)a4;
- (void)encodeGradientsToCommandBuffer:(id)a0 sourceArrays:(id)a1 sourceGradient:(id)a2 gradientState:(id)a3 destinationGradients:(id)a4 kernelDAGObject:(id)a5;
- (id)encodeGradientsToCommandBuffer:(id)a0 sourceArrays:(id)a1 sourceGradient:(id)a2 gradientState:(id)a3;
- (id)destinationGradientsSupported;

@end
