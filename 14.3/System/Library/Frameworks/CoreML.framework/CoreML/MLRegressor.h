@class MLModelInterface, MLModelMetadata, MLModelDescription;

@interface MLRegressor : MLModel <MLRegressor>

@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly) MLModelInterface *interface;
@property (readonly) MLModelMetadata *metadata;

+ (id)predictionFromFeatures:(id)a0 regressor:(id)a1 options:(id)a2 error:(id *)a3;

- (id)initDescriptionOnlyWithSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 configuration:(id)a1 error:(id *)a2;
- (id)regress:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithInterface:(id)a0 metadata:(id)a1 error:(id *)a2;
- (id)regressorResultFromOutputFeatures:(id)a0 error:(id *)a1;

@end
