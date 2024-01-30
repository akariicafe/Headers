@class NSString, NSArray, BWInferenceVideoRequirement, NSSet, BWInferenceCloneVideoRequirement, NSDictionary, NSMutableDictionary, NSMutableArray, FigMatting, BWInferenceMetadataRequirement;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, MTLCommandQueue, BWInferenceExecutable;

@interface BWMattingV2InferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable, BWInferencePropagatable> {
    NSDictionary *_sensorConfigurationsByPortType;
    FigMatting *_mattingProcessor;
    int _mattingProcessorVersion;
    int _mattingTuningConfiguration;
    BOOL _submitWithoutSynchronization;
    NSMutableArray *_inputVideoRequirements;
    NSMutableArray *_outputVideoRequirements;
    NSMutableArray *_inputMetadataRequirements;
    NSMutableArray *_outputMetadataRequirements;
    BWInferenceVideoRequirement *_primaryFormatInputVideoRequirement;
    BWInferenceVideoRequirement *_depthInputVideoRequirement;
    BWInferenceVideoRequirement *_disparityInputVideoRequirement;
    BWInferenceVideoRequirement *_segmentationInputVideoRequirement;
    BWInferenceVideoRequirement *_segmentationOutputVideoRequirement;
    BWInferenceCloneVideoRequirement *_lowResSegmentationCloneOutputVideoRequirement;
    BWInferenceVideoRequirement *_refinedDepthOutputVideoRequirement;
    NSArray *_enabledSemanticMattingOutputTypes;
    NSMutableDictionary *_semanticMatteInputVideoRequirementsByMattingOutputType;
    NSMutableDictionary *_semanticMatteOutputVideoRequirementsByMattingOutputType;
    BWInferenceMetadataRequirement *_faceSegmentsWithLandmarksMetadataRequirement;
    BWInferenceMetadataRequirement *_outputMasksContainsValidContentRequirement;
    id<MTLCommandQueue> _metalCommandQueue;
    struct OpaqueVTPixelTransferSession { } *_lowResSegmentationCloneCopySession;
}

@property (readonly, nonatomic) int executionTarget;
@property (readonly, copy, nonatomic) NSSet *preventionReasons;
@property (readonly, nonatomic) NSArray *inputVideoRequirements;
@property (readonly, nonatomic) NSArray *outputVideoRequirements;
@property (readonly, nonatomic) NSArray *cloneVideoRequirements;
@property (readonly, nonatomic) NSArray *inputMetadataRequirements;
@property (readonly, nonatomic) NSArray *outputMetadataRequirements;
@property (readonly, nonatomic) unsigned int allowedPixelBufferCompressionDirection;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) id<BWInferenceExecutable> executable;
@property (readonly, nonatomic) id<BWInferenceSubmittable> submittable;
@property (readonly, nonatomic) id<BWInferenceExtractable> extractable;
@property (readonly, nonatomic) id<BWInferencePropagatable> propagatable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL allowsAsyncPropagation;

+ (void)initialize;

- (id)initWithConfiguration:(id)a0;
- (void)dealloc;
- (id)newStorage;
- (int)prewarmUsingLimitedMemory:(BOOL)a0;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3;
- (id)_processorOptions;
- (int)_loadMattingProcessor;
- (int)_configureMattingProcessor;
- (struct __CVBuffer { } *)_outputPixelBufferForOutputVideoRequirement:(id)a0 storage:(id)a1 isMatte:(BOOL)a2;
- (void)propagateMattingOutputToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 storage:(id)a1;
- (id)mutableInputVideoRequirements;
- (id)mutableOutputVideoRequirements;
- (int)setInputsAndOutputsOnMattingProcessor:(id)a0 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 storage:(id)a2;

@end
