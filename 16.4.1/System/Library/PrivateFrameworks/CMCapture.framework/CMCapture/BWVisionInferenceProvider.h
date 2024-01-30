@class NSString, NSArray, BWInferenceVideoRequirement, NSSet, NSMutableDictionary, NSMutableArray, BWVisionInferenceContext, BWVisionInferenceConfiguration, NSMapTable;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, BWInferenceExecutable;

@interface BWVisionInferenceProvider : NSObject <BWInferenceProvider, BWInferenceExecutable, BWInferencePropagatable> {
    BWVisionInferenceConfiguration *_configuration;
    NSArray *_prototypeRequests;
    BWVisionInferenceContext *_context;
    unsigned long long _indexOfRequestForMaximumNumberOfFaces;
    unsigned long long _maximumNumberOfFaces;
    BOOL _clampToLargestMaximumNumberOfFaces;
    BOOL _alwaysExecuteForRedEyeReduction;
    unsigned long long _indexOfRequestForMergedFaceDetection;
    unsigned long long _indexOfRequestForMergedFoodAndDrinkRecognition;
    NSMapTable *_requestIndexByRequest;
    NSMutableDictionary *_requestIndexByRequirement;
    BOOL _executesRequestsIndividually;
    BOOL _considerISPRectsIfVisionFails;
}

@property (retain, nonatomic) BWInferenceVideoRequirement *primaryInputVideoRequirement;
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
@property (readonly, nonatomic) id<BWInferencePropagatable> propagatable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL allowsAsyncPropagation;

+ (void)initialize;

- (id)bindInputForRequest:(id)a0 fromMetadataUsingKeys:(id)a1;
- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3;
- (int)prewarmUsingLimitedMemory:(BOOL)a0;
- (id)bindOutputForRequest:(id)a0 asConsolidatedMetadataUsingKeys:(id)a1;
- (id)initWithConfiguration:(id)a0 requests:(id)a1 executesRequestsIndividually:(BOOL)a2 executionTarget:(int)a3 preventionReasons:(id)a4 resourceProvider:(id)a5;
- (id)bindInputForRequest:(id)a0 fromAttachedMediaUsingKey:(id)a1 preparedByAttachedMediaKey:(id)a2 withVideoFormatProvider:(id /* block */)a3;
- (id)bindIdealInputForRequest:(id)a0 fromAttachedMediaUsingKey:(id)a1;
- (id)bindOutputForRequest:(id)a0 asAttachedMediaUsingKey:(id)a1 withVideoFormat:(id)a2;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withExecutionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (void)dealloc;
- (id)bindOutputForRequest:(id)a0 asMetadataUsingKeys:(id)a1;
- (id)newStorage;
- (id)bindOutputByCloningInputRequirement:(id)a0 toAttachedMediaUsingKey:(id)a1;
- (id)bindOutputForRequest:(id)a0 asMetadataUsingKey:(id)a1;
- (int)prepareForExecution;

@end
