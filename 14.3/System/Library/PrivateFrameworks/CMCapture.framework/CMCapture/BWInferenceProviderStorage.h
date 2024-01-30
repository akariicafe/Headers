@class NSArray, NSDictionary, NSString, NSMutableDictionary;

@interface BWInferenceProviderStorage : NSObject <BWInferenceStorage> {
    NSMutableDictionary *_pixelBufferByRequirement;
    NSMutableDictionary *_pixelBufferPoolByRequirement;
}

@property (readonly, nonatomic) BWInferenceProviderStorage *inferenceStorage;
@property (readonly, copy, nonatomic) NSArray *requirementsNeedingPixelBufferPools;
@property (readonly, copy, nonatomic) NSArray *requirementsNeedingPixelBuffers;
@property (retain, nonatomic) NSDictionary *inferenceResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)clear;
- (struct opaqueCMSampleBuffer { } *)newSampleBufferSatisfyingRequirement:(id)a0 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (id)newMetadataDictionarySatisfyingRequirement:(id)a0;
- (void)dealloc;
- (id)initWithRequirementsNeedingPixelBuffers:(id)a0 requirementsNeedingPixelBufferPools:(id)a1;
- (struct opaqueCMSampleBuffer { } *)newSampleBufferSatisfyingCloneRequirement:(id)a0;
- (id)pixelBufferPoolForRequirement:(id)a0;
- (struct __CVBuffer { } *)pixelBufferForRequirement:(id)a0;
- (void)setPixelBufferPool:(id)a0 forRequirement:(id)a1;
- (void)setPixelBuffer:(struct __CVBuffer { } *)a0 forRequirement:(id)a1;

@end
