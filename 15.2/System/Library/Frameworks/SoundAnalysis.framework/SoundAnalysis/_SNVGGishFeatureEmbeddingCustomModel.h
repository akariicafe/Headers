@class MLModel, MLModelDescription;

@interface _SNVGGishFeatureEmbeddingCustomModel : NSObject <MLCustomModel> {
    MLModelDescription *_modelDescription;
    MLModel *_model;
}

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
