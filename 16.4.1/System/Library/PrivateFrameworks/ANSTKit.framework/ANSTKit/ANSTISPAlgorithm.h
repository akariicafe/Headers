@class ANSTISPAlgorithmConfiguration, ANSTBaseNetworkEspresso;

@interface ANSTISPAlgorithm : ANSTAlgorithm {
    ANSTISPAlgorithmConfiguration *_config;
    ANSTBaseNetworkEspresso *_network;
    BOOL _readyForInference;
    struct __CVBuffer { } *_resizedInputBuffer;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    float _smoothedSmudgeConfidence;
}

+ (id)new;

- (id)_init;
- (void)dealloc;
- (id)init;
- (BOOL)prepareWithError:(id *)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (float)_float32_fromEspressoBufferFloat32:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0;
- (id)_networkResult;
- (id)resultForPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (void)undoPrepareSideEffects;

@end
