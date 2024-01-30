@class NSString, NSArray, MLModelDescription;

@interface _SNSoundPrintAFeatureEmbeddingCustomModel : _SNSoundPrintFeatureEmbeddingCustomModel <MLCustomModel> {
    MLModelDescription *_modelDescription;
    NSString *_inputFeatureName;
    NSString *_outputFeatureName;
    NSArray *_outputShape;
}

+ (BOOL)validateModelDescription:(id)a0 underlyingModelDescription:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
