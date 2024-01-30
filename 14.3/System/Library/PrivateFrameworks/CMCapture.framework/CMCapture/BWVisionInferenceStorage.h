@class NSMutableDictionary;

@interface BWVisionInferenceStorage : BWInferenceProviderStorage {
    NSMutableDictionary *_requestsByRequirement;
}

+ (void)initialize;

- (void)removeRequest:(id)a0;
- (struct opaqueCMSampleBuffer { } *)newSampleBufferSatisfyingRequirement:(id)a0 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (id)newMetadataDictionarySatisfyingRequirement:(id)a0;
- (void)dealloc;
- (id)initWithRequirementsNeedingPixelBuffers:(id)a0 requirementsNeedingPixelBufferPools:(id)a1;
- (id)requestForRequirement:(id)a0;
- (void)setRequest:(id)a0 forRequirement:(id)a1;

@end
