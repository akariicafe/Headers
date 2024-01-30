@protocol MPSNNPadding;

@interface MPSNNGradientState : MPSState {
    struct { long long x; long long y; long long z; } _offset;
    struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } _clipRect;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _destSize;
    unsigned long long _destFeatureChannels;
    unsigned long long _destinationFeatureChannelOffset;
    unsigned long long _sourceFeatureChannelOffset;
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _strideInPixelsX;
    unsigned long long _strideInPixelsY;
    unsigned long long _dilationRateX;
    unsigned long long _dilationRateY;
    id<MPSNNPadding> _padding;
    unsigned long long _maxBatchSize;
    BOOL _isBackwards;
    unsigned long long _edgeMode;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _srcSize;
    unsigned long long _sourceFeatureChannels;
    BOOL _initOnce;
    unsigned int _provenance;
}

- (id)debugDescription;
- (void)dealloc;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 forKernel:(id)a2 suggestedDescriptor:(id)a3;

@end
