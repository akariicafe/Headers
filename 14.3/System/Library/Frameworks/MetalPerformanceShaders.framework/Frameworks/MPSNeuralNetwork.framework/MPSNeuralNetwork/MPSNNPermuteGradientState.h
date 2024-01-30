@interface MPSNNPermuteGradientState : MPSNNGradientState {
    struct MPSNNDimensionOrder { unsigned long long dimensions[4]; } _fwdPermuteOrder;
    struct MPSNNDimensionOrder { unsigned long long dimensions[4]; } _revPermuteOrder;
}

+ (id)temporaryStateWithCommandBuffer:(id)a0;

- (id)initWithResource:(id)a0;

@end
