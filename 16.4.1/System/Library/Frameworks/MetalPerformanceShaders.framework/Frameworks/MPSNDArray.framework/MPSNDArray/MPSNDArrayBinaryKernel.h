@interface MPSNDArrayBinaryKernel : MPSNDArrayMultiaryKernel

@property (readonly, nonatomic) struct { long long x0[16]; } primaryOffsets;
@property (readonly, nonatomic) unsigned long long primaryEdgeMode;
@property (readonly, nonatomic) struct { unsigned long long x0[16]; } primaryKernelSizes;
@property (readonly, nonatomic) struct { long long x0[16]; } primaryStrides;
@property (readonly, nonatomic) struct { unsigned long long x0[16]; } primaryDilationRates;
@property (readonly, nonatomic) struct { long long x0[16]; } secondaryOffsets;
@property (readonly, nonatomic) unsigned long long secondaryEdgeMode;
@property (readonly, nonatomic) struct { unsigned long long x0[16]; } secondaryKernelSizes;
@property (readonly, nonatomic) struct { long long x0[16]; } secondaryStrides;
@property (readonly, nonatomic) struct { unsigned long long x0[16]; } secondaryDilationRates;

+ (unsigned long long)expectedVirtualSourceCount;

- (id)initWithDevice:(id)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)encodeToCommandBuffer:(id)a0 primarySourceArray:(id)a1 secondarySourceArray:(id)a2 destinationArray:(id)a3;
- (id)encodeToCommandBuffer:(id)a0 primarySourceArray:(id)a1 secondarySourceArray:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 primarySourceArray:(id)a1 secondarySourceArray:(id)a2 resultState:(id)a3 destinationArray:(id)a4;
- (id)encodeToCommandBuffer:(id)a0 primarySourceArray:(id)a1 secondarySourceArray:(id)a2 resultState:(id *)a3 outputStateIsTemporary:(BOOL)a4;

@end
