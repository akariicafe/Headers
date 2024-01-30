@interface MPSNNPadGradientState : MPSNNGradientState {
    struct MPSImageCoordinate { unsigned long long x; unsigned long long y; unsigned long long channel; } _fwdPadBefore;
    struct MPSImageCoordinate { unsigned long long x; unsigned long long y; unsigned long long channel; } _fwdPadAfter;
    unsigned long long _srcImgFcCount;
}

+ (id)temporaryStateWithCommandBuffer:(id)a0;

- (id)initWithResource:(id)a0;
- (id)debugDescription;
- (void)dealloc;

@end
