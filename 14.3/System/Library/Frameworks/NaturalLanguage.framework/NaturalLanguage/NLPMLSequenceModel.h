@class MLModelDescription;

@interface NLPMLSequenceModel : NLModel <MLCustomModel> {
    MLModelDescription *_modelDescription;
}

@property (readonly, copy) MLModelDescription *modelDescription;

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
