@class NSString, BWInferenceVideoRequirement, NSArray, NSDictionary, FigM2MController;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, BWInferenceExecutable;

@interface BWInferenceVideoScalingProvider : NSObject <BWInferenceScalingProvider, BWInferenceExecutable, BWInferencePreventable> {
    BWInferenceVideoRequirement *_inputRequirement;
    NSArray *_outputRequirements;
    NSDictionary *_colorSpaceProperties;
    BOOL _applyUprightExifOrientation;
    BOOL _applyValidBufferRect;
    BOOL _applyFinalCropRect;
    BOOL _computeAndApplyAspectRatioCrop;
    FigM2MController *_scalerController;
    float _customFiltersLastUsedHorizontalRatio;
    float _customFiltersLastUsedVerticalRatio;
    BOOL _enableFencing;
    float _outputAspectRatio;
}

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

+ (void)initialize;

- (id)newStorage;
- (void)dealloc;
- (void)_configureCustomFiltersForScalingFromSourceWidth:(unsigned long long)a0 sourceHeight:(unsigned long long)a1 destinationWidth:(unsigned long long)a2 destinationHeight:(unsigned long long)a3;
- (int)prepareForExecution;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withExecutionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 executionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithInputRequirement:(id)a0 outputRequirements:(id)a1 enableFencing:(BOOL)a2;

@end
