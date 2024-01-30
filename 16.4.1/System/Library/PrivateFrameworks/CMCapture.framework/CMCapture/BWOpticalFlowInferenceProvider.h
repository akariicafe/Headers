@class NSString, NSArray, BWMetalInferenceContext, NSSet, BWInferenceVideoRequirement, PTDisparityPostProcessing, NSMutableArray, MTLTextureDescriptor;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, BWInferenceExecutable;

@interface BWOpticalFlowInferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable, BWInferencePropagatable> {
    BWInferenceVideoRequirement *_inputRequirement;
    BWInferenceVideoRequirement *_outputRequirement;
    PTDisparityPostProcessing *_disparityPostProcessor;
    BWMetalInferenceContext *_metalInferenceContext;
    MTLTextureDescriptor *_colorOutputDescriptor;
    MTLTextureDescriptor *_colorInputDescriptor;
    NSString *_portType;
    unsigned long long _concurrencyWidth;
}

@property (readonly, nonatomic) int executionTarget;
@property (readonly, copy, nonatomic) NSSet *preventionReasons;
@property (readonly, nonatomic) NSArray *inputVideoRequirements;
@property (readonly, nonatomic) NSArray *outputVideoRequirements;
@property (readonly, nonatomic) NSMutableArray *cloneVideoRequirements;
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
- (id)bindOutputByCloningInputRequirement:(id)a0 toAttachedMediaUsingKey:(id)a1;
- (id)initWithInputRequirement:(id)a0 outputRequirement:(id)a1 portType:(id)a2 resourceProvider:(id)a3 configuration:(id)a4;

@end
