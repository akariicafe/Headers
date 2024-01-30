@class NSObject;
@protocol MLCustomModel;

@interface MLCustomModelWrapper : MLModel

@property (retain) NSObject<MLCustomModel> *customModel;

- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithModelDescription:(id)a0 customModel:(id)a1 configuration:(id)a2;

@end
