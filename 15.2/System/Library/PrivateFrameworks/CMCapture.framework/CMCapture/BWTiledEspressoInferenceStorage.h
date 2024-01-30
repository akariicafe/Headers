@class NSArray;

@interface BWTiledEspressoInferenceStorage : BWInferenceProviderStorage

@property (readonly, nonatomic) NSArray *espressoStorages;

- (void)dealloc;
- (id)initWithRequirementsNeedingPixelBuffers:(id)a0 requirementsNeedingPixelBufferPools:(id)a1 espressoStorages:(id)a2;

@end
