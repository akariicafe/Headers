@class BWInferenceVideoRequirement, NSArray, NSString;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, BWInferenceScalingProvider, BWInferenceExecutable;

@interface BWInferenceSchedulerScaler : NSObject <BWInferenceJobProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferenceJobProvider, BWInferencePreventable> {
    id<BWInferenceScalingProvider> _provider;
}

@property (readonly, nonatomic) BWInferenceVideoRequirement *inputRequirement;
@property (readonly, nonatomic) NSArray *outputRequirements;
@property (readonly, nonatomic) id<BWInferenceExecutable> executable;
@property (readonly, nonatomic) id<BWInferenceSubmittable> submittable;
@property (readonly, nonatomic) id<BWInferenceExtractable> extractable;
@property (readonly, nonatomic) id<BWInferencePropagatable> propagatable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL mustExecuteWhenAllowed;

- (int)prepare;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newStorage;
- (void)dealloc;
- (int)prepareForExecution;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withExecutionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 executionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (id)_newProviderForWithOptions:(unsigned long long)a0;
- (id)initWithInputRequirement:(id)a0 outputRequirements:(id)a1 options:(unsigned long long)a2;

@end
