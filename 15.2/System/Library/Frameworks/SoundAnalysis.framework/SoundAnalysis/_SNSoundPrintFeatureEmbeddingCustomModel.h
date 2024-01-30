@class NSDictionary, MLModelDescription;
@protocol SNMLModel;

@interface _SNSoundPrintFeatureEmbeddingCustomModel : NSObject {
    MLModelDescription *_modelDescription;
    id<SNMLModel> _model;
    NSDictionary *_outerToInnerInputFeatureNameMappings;
    NSDictionary *_outerToInnerOutputFeatureNameMappings;
}

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModel:(id)a0 modelDescription:(id)a1;

@end
