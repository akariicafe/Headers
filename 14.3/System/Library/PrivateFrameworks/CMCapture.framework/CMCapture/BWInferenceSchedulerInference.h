@class NSString;
@protocol BWInferenceSubmittable, BWInferenceProvider, BWInferenceExtractable, BWInferencePropagatable, BWInferenceExecutable;

@interface BWInferenceSchedulerInference : NSObject <BWInferenceJobProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferencePreventable, BWInferencePropagatable> {
    _Atomic double _previousExecutionTimeInSeconds;
}

@property (readonly, nonatomic) id<BWInferenceProvider> provider;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) int inferenceType;
@property (readonly, nonatomic) unsigned int priority;
@property (readonly, nonatomic) float maximumFramesPerSecond;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } previousExecutionTime;
@property (readonly, nonatomic) id<BWInferenceExecutable> executable;
@property (readonly, nonatomic) id<BWInferenceSubmittable> submittable;
@property (readonly, nonatomic) id<BWInferenceExtractable> extractable;
@property (readonly, nonatomic) id<BWInferencePropagatable> propagatable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL mustExecuteWhenAllowed;
@property (readonly, nonatomic) int type;

+ (void)initialize;

- (int)prepare;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newStorage;
- (void)dealloc;
- (int)prepareForExecution;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withExecutionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 executionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 withExecutionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (id)initWithInferenceRequirement:(id)a0;

@end
