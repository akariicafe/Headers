@class MLModelInterface, MLModelMetadata, MLModelDescription;

@interface MLClassifier : MLModel <MLClassifier>

@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly) MLModelInterface *interface;
@property (readonly) MLModelMetadata *metadata;

+ (id)predictionFromFeatures:(id)a0 classifier:(id)a1 options:(id)a2 error:(id *)a3;

- (id)initDescriptionOnlyWithSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 configuration:(id)a1 error:(id *)a2;
- (id)classify:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)classifierResultFromOutputFeatures:(id)a0 error:(id *)a1;
- (id)classLabels;
- (id)initWithInterface:(id)a0 metadata:(id)a1 configuration:(id)a2 error:(id *)a3;

@end
