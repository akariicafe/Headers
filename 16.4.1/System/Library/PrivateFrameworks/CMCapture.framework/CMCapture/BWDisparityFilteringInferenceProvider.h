@class MTLTextureDescriptor, NSSet, NSArray, NSString, BWInferenceVideoRequirement, BWMetalInferenceContext, ADPCEDisparityColorPipeline;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, BWInferenceExecutable;

@interface BWDisparityFilteringInferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable, BWInferencePropagatable> {
    BWInferenceVideoRequirement *_disparityInputRequirement;
    BWInferenceVideoRequirement *_outputRequirement;
    ADPCEDisparityColorPipeline *_stereoPipeline;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    BWMetalInferenceContext *_metalInferenceContext;
    MTLTextureDescriptor *_disparityInputDescriptor;
    MTLTextureDescriptor *_disparityOutputDescriptor;
    long long _requestedRotation;
    unsigned long long _inputSource;
    unsigned long long _concurrencyWidth;
    BOOL _isPreProcessing;
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

- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3;
- (int)prewarmUsingLimitedMemory:(BOOL)a0;
- (void)dealloc;
- (id)newStorage;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithDisparityInputRequirement:(id)a0 disparityOutputRequirement:(id)a1 resourceProvider:(id)a2 configuration:(id)a3 isPreprocessing:(BOOL)a4;

@end
