@interface MPSNDArrayUnaryKernel : MPSNDArrayMultiaryKernel

@property (nonatomic) struct { long long dimensions[16]; } offsets;
@property (nonatomic) unsigned long long edgeMode;
@property (nonatomic) struct { unsigned long long dimensions[16]; } kernelSizes;
@property (nonatomic) struct { long long dimensions[16]; } strides;
@property (nonatomic) struct { unsigned long long dimensions[16]; } dilationRates;

+ (unsigned long long)expectedVirtualSourceCount;

- (id)initWithDevice:(id)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)encodeToCommandBuffer:(id)a0 sourceArray:(id)a1;
- (void)encodeToCommandBuffer:(id)a0 sourceArray:(id)a1 destinationArray:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 sourceArray:(id)a1 resultState:(id)a2 destinationArray:(id)a3;
- (id)encodeToCommandBuffer:(id)a0 sourceArray:(id)a1 resultState:(id *)a2 outputStateIsTemporary:(BOOL)a3;

@end
