@class NSString, NSArray, BWInferenceVideoRequirement, NSSet, NSDictionary, FigMetalContext, NSNumber, MTLTextureDescriptor;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, BWInferenceExecutable;

@interface BWInferenceDepthScalingProvider : NSObject <BWInferenceProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferencePropagatable> {
    BWInferenceVideoRequirement *_inputRequirement;
    NSArray *_outputRequirements;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    FigMetalContext *_metalContext;
    int _requestedRotation;
    BOOL _GPUDepthConversionSupported;
    NSDictionary *_pipelineStates;
    NSNumber *_NANValue;
    NSNumber *_clampMin;
    NSNumber *_clampMax;
    BOOL _flipX;
    BOOL _allowUpsampling;
    unsigned long long _concurrencyWidth;
    MTLTextureDescriptor *_srcdesc;
    MTLTextureDescriptor *_dstdesc;
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

- (void)dealloc;
- (id)newStorage;
- (int)prewarmUsingLimitedMemory:(BOOL)a0;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3;
- (int)prepareForExecution;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withExecutionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (id)bindVideoInputFromAttachedMediaUsingKey:(id)a0 preparedByAttachedMediaKey:(id)a1 withVideoFormatProvider:(id /* block */)a2;
- (id)initWithOutputRequirements:(id)a0 configuration:(id)a1;
- (void)setInputRequirement:(id)a0;

@end
