@class NSString, BWInferenceVideoRequirement, NSArray;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, BWInferenceExecutable;

@interface BWInferenceDepthScalingProvider : NSObject <BWInferenceScalingProvider, BWInferenceExecutable> {
    BWInferenceVideoRequirement *_inputRequirement;
    NSArray *_outputRequirements;
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

- (id)newStorage;
- (void)dealloc;
- (int)prepareForExecution;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withExecutionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (id)initWithInputRequirement:(id)a0 outputRequirements:(id)a1;

@end
