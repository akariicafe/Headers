@class NSMutableDictionary;

@interface BWVideoProcessingInferenceStorage : BWInferenceProviderStorage {
    NSMutableDictionary *_metadataDictionaryForRequirement;
}

- (void)dealloc;
- (id)initWithRequirementsNeedingPixelBuffers:(id)a0 requirementsNeedingPixelBufferPools:(id)a1;
- (void)setDictionary:(id)a0 forMetadataRequirement:(id)a1;
- (id)newMetadataDictionarySatisfyingRequirement:(id)a0;

@end
