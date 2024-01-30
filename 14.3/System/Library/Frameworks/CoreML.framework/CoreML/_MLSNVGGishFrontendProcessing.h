@class MLModelDescription;
@protocol MLCustomModel;

@interface _MLSNVGGishFrontendProcessing : NSObject <MLCustomModel> {
    id<MLCustomModel> _frontendProcessingModel;
}

@property (readonly, nonatomic) MLModelDescription *modelDescription;

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
