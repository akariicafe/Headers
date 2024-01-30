@class NSMutableDictionary, NSSet, NSString, NSURL, BWEspressoInferenceContext, NSMutableArray, BWFigCaptureISPProcessingSession;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWEspressoInferenceTensorMemoryProvider, BWInferenceExtractable, BWInferenceExecutable;

@interface BWEspressoInferenceProvider : NSObject <BWInferenceProvider, BWInferenceExecutable, BWInferenceSubmittable> {
    unsigned long long _concurrentSubmissionLimit;
    NSURL *_networkURL;
    NSString *_networkConfiguration;
    NSString *_espressoNetworkVersion;
    BWEspressoInferenceContext *_context;
    BWFigCaptureISPProcessingSession *_ispProcessingSession;
    void *_espressoPlan;
    struct { void *plan; int network_index; } _espressoNetwork;
    int _espressoPriority;
    NSMutableDictionary *_bindingNamesByRequirement;
    id<BWInferencePropagatable> _propagator;
    id<BWEspressoInferenceTensorMemoryProvider> _tensorMemoryProvider;
    NSMutableArray *_pixelBuffersLockedDuringExecution;
}

@property (retain, nonatomic) id<BWInferencePropagatable> propagatable;
@property (retain, nonatomic) id<BWEspressoInferenceTensorMemoryProvider> tensorMemoryProvider;
@property (readonly, nonatomic) int executionTarget;
@property (readonly, copy, nonatomic) NSSet *preventionReasons;
@property (readonly, nonatomic) NSMutableArray *inputVideoRequirements;
@property (readonly, nonatomic) NSMutableArray *outputVideoRequirements;
@property (readonly, nonatomic) NSMutableArray *cloneVideoRequirements;
@property (readonly, nonatomic) NSMutableArray *inputMetadataRequirements;
@property (readonly, nonatomic) NSMutableArray *outputMetadataRequirements;
@property (readonly, nonatomic) unsigned int allowedPixelBufferCompressionDirection;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) id<BWInferenceExecutable> executable;
@property (readonly, nonatomic) id<BWInferenceSubmittable> submittable;
@property (readonly, nonatomic) id<BWInferenceExtractable> extractable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)bindEspressoOutput:(id)a0 asConsolidatedMetadataUsingKeys:(id)a1;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (int)prewarmUsingLimitedMemory:(BOOL)a0;
- (id)bindEspressoOutput:(id)a0 asMetadataUsingKey:(id)a1;
- (id)bindEspressoOutput:(id)a0 asMetadataUsingKeys:(id)a1;
- (id)bindEspressoInput:(id)a0 fromMetadataUsingKeys:(id)a1;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withExecutionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (void)dealloc;
- (id)newStorage;
- (id)bindEspressoInput:(id)a0 fromAttachedMediaUsingKey:(id)a1 withVideoFormat:(id)a2;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (id)bindOutputByCloningInputRequirement:(id)a0 toAttachedMediaUsingKey:(id)a1;
- (id)bindEspressoOutput:(id)a0 asAttachedMediaUsingKey:(id)a1 withVideoFormat:(id)a2;
- (id)initWithType:(int)a0 networkURL:(id)a1 networkConfiguration:(id)a2 context:(id)a3 executionTarget:(int)a4 schedulerPriority:(unsigned int)a5 preventionReasons:(id)a6 resourceProvider:(id)a7 allowedCompressionDirection:(unsigned int)a8 concurrentSubmissionLimit:(unsigned long long)a9;
- (int)prepareForExecution;

@end
