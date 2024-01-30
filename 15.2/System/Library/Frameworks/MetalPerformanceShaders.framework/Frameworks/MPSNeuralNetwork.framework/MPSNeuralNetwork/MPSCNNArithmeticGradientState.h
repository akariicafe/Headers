@interface MPSCNNArithmeticGradientState : MPSNNBinaryGradientState {
    unsigned long long _resourcePixelFormat;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _resourceSize;
    unsigned long long _primaryFCStride;
    unsigned long long _secondaryFCStride;
}

- (id)init;
- (void)dealloc;

@end
