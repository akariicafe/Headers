@class NSString, MLAppleAudioFeatureExtractorParameters;
@protocol MLCustomModel;

@interface MLAppleAudioFeatureExtractor : MLModel <MLModelSpecificationLoader> {
    NSString *_inputFeatureName;
    NSString *_outputFeatureName;
    id<MLCustomModel> _featureEmbeddingModel;
}

@property (readonly) MLAppleAudioFeatureExtractorParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0 modelDescription:(id)a1 configuration:(id)a2 error:(id *)a3;

@end
