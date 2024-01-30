@class NSMutableDictionary;

@interface BWMattingInferenceStorage : BWInferenceProviderStorage {
    NSMutableDictionary *_metadataDictionaryByRequirement;
}

+ (void)initialize;

- (void)setDictionary:(id)a0 forMetadataRequirement:(id)a1;
- (struct opaqueCMSampleBuffer { } *)newSampleBufferSatisfyingRequirement:(id)a0 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (id)newMetadataDictionarySatisfyingRequirement:(id)a0;
- (void)dealloc;

@end
