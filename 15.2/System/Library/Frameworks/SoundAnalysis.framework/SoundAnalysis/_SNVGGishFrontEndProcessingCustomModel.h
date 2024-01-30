@class SNDSPGraphCustomModel;

@interface _SNVGGishFrontEndProcessingCustomModel : NSObject <MLCustomModel> {
    SNDSPGraphCustomModel *_model;
}

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
