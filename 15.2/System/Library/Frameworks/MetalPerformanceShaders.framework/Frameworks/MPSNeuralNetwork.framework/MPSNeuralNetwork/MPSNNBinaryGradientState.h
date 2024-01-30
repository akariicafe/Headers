@protocol MPSNNPadding;

@interface MPSNNBinaryGradientState : MPSState {
    struct { long long x; long long y; long long z; } _primaryOffset;
    struct { long long x; long long y; long long z; } _secondaryOffset;
    struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } _clipRect;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _destSize;
    unsigned long long _destFeatureChannels;
    unsigned long long _destinationFeatureChannelOffset;
    unsigned long long _primarySourceFeatureChannelOffset;
    unsigned long long _secondarySourceFeatureChannelOffset;
    unsigned long long _primarySourceFeatureChannelMaxCount;
    unsigned long long _secondarySourceFeatureChannelMaxCount;
    unsigned long long _primaryKernelWidth;
    unsigned long long _primaryKernelHeight;
    unsigned long long _secondaryKernelWidth;
    unsigned long long _secondaryKernelHeight;
    unsigned long long _primaryStrideInPixelsX;
    unsigned long long _primaryStrideInPixelsY;
    unsigned long long _secondaryStrideInPixelsX;
    unsigned long long _secondaryStrideInPixelsY;
    unsigned long long _primaryDilationRateX;
    unsigned long long _primaryDilationRateY;
    unsigned long long _secondaryDilationRateX;
    unsigned long long _secondaryDilationRateY;
    id<MPSNNPadding> _padding;
    unsigned long long _maxBatchSize;
    BOOL _isBackwards;
    unsigned long long _primaryEdgeMode;
    unsigned long long _secondaryEdgeMode;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _primarySrcSize;
    unsigned long long _primarySourceFeatureChannels;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _secondarySrcSize;
    unsigned long long _secondarySourceFeatureChannels;
    BOOL _initOnce;
    unsigned int _provenance;
}

- (void)dealloc;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 forKernel:(id)a2 suggestedDescriptor:(id)a3;

@end
