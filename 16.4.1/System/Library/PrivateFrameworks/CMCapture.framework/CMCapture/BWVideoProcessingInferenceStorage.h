@class NSMutableDictionary;

@interface BWVideoProcessingInferenceStorage : BWInferenceProviderStorage {
    NSMutableDictionary *_metadataDictionaryForRequirement;
}

- (id)newMetadataDictionarySatisfyingRequirement:(id)a0;
- (void)dealloc;
- (id)initWithRequirementsNeedingPixelBuffers:(id)a0 requirementsNeedingPixelBufferPools:(id)a1;
- (void)setDictionary:(id)a0 forMetadataRequirement:(id)a1;

@end
