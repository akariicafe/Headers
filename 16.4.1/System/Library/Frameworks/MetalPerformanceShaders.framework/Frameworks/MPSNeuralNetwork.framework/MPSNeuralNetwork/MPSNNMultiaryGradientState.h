@protocol MPSNNPadding;

@interface MPSNNMultiaryGradientState : MPSState {
    unsigned long long _srcCount;
    struct NNKernelSourceParams { struct { long long x0; long long x1; long long x2; } x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; } *_srcInfo;
    struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *_srcSizes;
    struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } _clipRect;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _destSize;
    unsigned long long _destFeatureChannels;
    unsigned long long _destinationFeatureChannelOffset;
    id<MPSNNPadding> _padding;
    unsigned long long _maxBatchSize;
    BOOL _isBackwards;
    BOOL _initOnce;
    unsigned int _provenance;
}

- (void)dealloc;
- (id)initWithSourceCount:(unsigned long long)a0;

@end
