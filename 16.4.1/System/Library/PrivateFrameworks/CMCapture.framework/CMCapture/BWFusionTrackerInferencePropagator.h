@class NSString, BWInferenceVideoRequirement, NSMutableDictionary;

@interface BWFusionTrackerInferencePropagator : NSObject <BWInferencePropagatable> {
    BWInferenceVideoRequirement *_inputVideoRequirement;
    NSMutableDictionary *_outputTensorRequirements;
    long long _operation;
}

@property (readonly, nonatomic) BOOL allowsAsyncPropagation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3;
- (void)dealloc;
- (id)initWithInputVideoRequirement:(id)a0 outputTensorRequirements:(id)a1 operation:(long long)a2;

@end
