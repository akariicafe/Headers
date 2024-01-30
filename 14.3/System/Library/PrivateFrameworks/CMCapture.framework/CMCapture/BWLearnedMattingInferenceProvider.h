@class BWEspressoInferenceProvider, NSString, NSArray, BWInferenceVideoRequirement, FigLearnedMattingMetalStage, NSSet, BWLearnedMattingInferenceConfiguration, NSObject;
@protocol BWInferenceResourceProvider, BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, OS_dispatch_queue, BWInferenceExecutable;

@interface BWLearnedMattingInferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable> {
    BWInferenceVideoRequirement *_inputImageVideoRequirement;
    BWInferenceVideoRequirement *_inputAlphaVideoRequirement;
    BWInferenceVideoRequirement *_outputAlphaVideoRequirement;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    FigLearnedMattingMetalStage *_metalProcessor;
    BWInferenceVideoRequirement *_tileImageInputVideoRequirement;
    BWInferenceVideoRequirement *_tileAlphaInputVideoRequirement;
    BWInferenceVideoRequirement *_tileAlphaOutputVideoRequirement;
    BWInferenceVideoRequirement *_accumulateAlphaVideoRequirement;
    BWEspressoInferenceProvider *_espressoProvider;
    NSObject<OS_dispatch_queue> *_espressoWorkQueue;
    void /* unknown type, empty encoding */ _outputTileSize;
    void /* unknown type, empty encoding */ _inputTileSize;
    void /* unknown type, empty encoding */ _inputAlphaScale;
    void /* unknown type, empty encoding */ _outputTileOverlap;
    void /* unknown type, empty encoding */ _inputTileOverlap;
    void /* unknown type, empty encoding */ _numTiles;
    BWLearnedMattingInferenceConfiguration *_configuration;
    id<BWInferenceResourceProvider> _resourceProvider;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int executionTarget;
@property (readonly, copy, nonatomic) NSSet *preventionReasons;
@property (readonly, nonatomic) NSArray *inputVideoRequirements;
@property (readonly, nonatomic) NSArray *outputVideoRequirements;
@property (readonly, nonatomic) NSArray *cloneVideoRequirements;
@property (readonly, nonatomic) NSArray *inputMetadataRequirements;
@property (readonly, nonatomic) NSArray *outputMetadataRequirements;
@property (readonly, nonatomic) unsigned int allowedPixelBufferCompressionDirection;
@property (readonly, nonatomic) id<BWInferenceExecutable> executable;
@property (readonly, nonatomic) id<BWInferenceSubmittable> submittable;
@property (readonly, nonatomic) id<BWInferenceExtractable> extractable;
@property (readonly, nonatomic) id<BWInferencePropagatable> propagatable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (id)newStorage;
- (void)dealloc;
- (id)_networkURLForVersion:(unsigned int)a0;
- (int)_initEspressoProvider;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (id)initWithConfiguration:(id)a0 resourceProvider:(id)a1;
- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2;
- (int)prewarmUsingLimitedMemory:(BOOL)a0;

@end
