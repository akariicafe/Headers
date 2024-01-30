@class FigM2MController, NSSet, NSArray, NSString, BWInferenceVideoRequirement, NSMutableArray, NSDictionary;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, BWInferenceExecutable;

@interface BWInferenceVideoScalingProvider : NSObject <BWInferenceProvider, BWInferenceExecutable, BWInferencePreventable, BWInferencePropagatable> {
    BWInferenceVideoRequirement *_inputRequirement;
    BWInferenceVideoRequirement *_derivedFromRequirement;
    NSArray *_outputRequirements;
    NSDictionary *_colorSpaceProperties;
    BOOL _applyUprightExifOrientation;
    int _offsetRotationDegrees;
    BOOL _applyValidBufferRect;
    BOOL _applyCustomCrop;
    BOOL _computeAndApplyAspectRatioCrop;
    FigM2MController *_scalerController;
    float _customFiltersLastUsedHorizontalRatio;
    float _customFiltersLastUsedVerticalRatio;
    BOOL _enableFencing;
    float _outputAspectRatio;
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
@property (readonly, nonatomic) BOOL mustExecuteWhenAllowed;
@property (readonly, nonatomic) BOOL allowsAsyncPropagation;

+ (void)initialize;

- (id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 executionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3;
- (int)prewarmUsingLimitedMemory:(BOOL)a0;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withExecutionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (void)dealloc;
- (id)newStorage;
- (id)bindOutputByCloningInputRequirement:(id)a0 toAttachedMediaUsingKey:(id)a1;
- (id)initWithInputRequirement:(id)a0 derivedFromRequirement:(id)a1 outputRequirements:(id)a2 enableFencing:(BOOL)a3;
- (int)prepareForExecution;

@end
