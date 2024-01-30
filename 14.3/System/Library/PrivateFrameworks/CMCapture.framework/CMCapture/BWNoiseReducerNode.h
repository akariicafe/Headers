@class NSDictionary;

@interface BWNoiseReducerNode : BWNode {
    NSDictionary *_cameraTuningOptions;
    NSDictionary *_noiseReductionOptions;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    struct NoiseReductionCtx_s { } *_context;
    int _contextSynchronization;
    int _gpuPriority;
    BOOL _threaded;
    BOOL _processLuma;
    BOOL _useInPlaceAlgorithm;
    BOOL _quadraHighResStillImageCaptureEnabled;
    struct __CVBuffer { } *_quadraResampledIntermediateBuffer;
    struct opaqueCMFormatDescription { } *_quadraResampledIntermediaBufferFormatDescription;
    struct OpaqueVTPixelTransferSession { } *_quadraResampledTransferSession;
}

+ (void)initialize;

- (BOOL)quadraHighResStillImageCaptureEnabled;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (struct opaqueCMSampleBuffer { } *)_newQuadraResampledSampleBufferFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 outputPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)setQuadraHighResStillImageCaptureEnabled:(BOOL)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithCameraTuningDictionary:(id)a0 sensorIDDictionary:(id)a1;
- (id)_outputRequirementsForInputFormat:(id)a0;

@end
