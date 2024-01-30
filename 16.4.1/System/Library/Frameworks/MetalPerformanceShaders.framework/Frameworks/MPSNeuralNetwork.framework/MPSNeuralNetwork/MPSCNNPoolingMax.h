@interface MPSCNNPoolingMax : MPSCNNPooling

- (unsigned long long)maxBatchSize;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)resultStateForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)newPlugin;
- (id)temporaryResultStateForCommandBuffer:(id)a0 sourceImage:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;
- (BOOL)isResultStateReusedAcrossBatch;
- (id)initWithDevice:(id)a0 kernelWidth:(unsigned long long)a1 kernelHeight:(unsigned long long)a2 strideInPixelsX:(unsigned long long)a3 strideInPixelsY:(unsigned long long)a4;

@end
