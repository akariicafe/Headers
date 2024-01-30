@class NSString, NSArray, BWMetalInferenceContext, NSSet, BWInferenceVideoRequirement, FTMSRScaler, BWInferenceFusionTrackerMeanPixelCalculator, NSMutableArray;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, BWInferenceExecutable;

@interface BWInferenceFusionTrackerScalingProvider : NSObject <BWInferenceProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferencePreventable, BWInferencePropagatable> {
    BWInferenceVideoRequirement *_inputRequirement;
    BWInferenceVideoRequirement *_orderBufferRequirement;
    BWInferenceVideoRequirement *_outputRequirement;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    NSMutableArray *_outputMetadataRequirements;
    long long _operation;
    FTMSRScaler *_scaler;
    BWMetalInferenceContext *_metalInferenceContext;
    BWInferenceFusionTrackerMeanPixelCalculator *_meanPixelCalculator;
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
@property (readonly, nonatomic) BOOL mustExecuteWhenAllowed;
@property (readonly, nonatomic) BOOL allowsAsyncPropagation;

- (void)dealloc;
- (id)newStorage;
- (int)prewarmUsingLimitedMemory:(BOOL)a0;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3;
- (int)prepareForExecution;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withExecutionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 executionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (int)_executeOnSampleBuffer:(SEL)a0 usingStorage:(struct opaqueCMSampleBuffer { } *)a1 meanPixel:(id)a2 withExecutionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 completionHandler:(id /* block */)a4;
- (id)initWithInputRequirement:(id)a0 orderBufferRequirement:(id)a1 descriptor:(id)a2 resourceProvider:(id)a3 meanPixelCalculator:(id)a4 operation:(long long)a5;

@end
