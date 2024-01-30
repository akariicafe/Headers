@interface MPSNNConcatenationGradientState : MPSNNGradientState {
    unsigned int _sliceCount;
    struct MPSSliceInfo { unsigned long long x0; unsigned long long x1; } *_info;
}

+ (id)temporaryStateWithCommandBuffer:(id)a0;

- (id)initWithResource:(id)a0;
- (id)debugDescription;
- (void)dealloc;

@end
