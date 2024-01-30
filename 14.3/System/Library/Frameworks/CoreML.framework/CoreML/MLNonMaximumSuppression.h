@class MLNonMaximumSuppressionParameters, NSString;

@interface MLNonMaximumSuppression : MLModel <MLModelSpecificationLoader>

@property (readonly) MLNonMaximumSuppressionParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 configuration:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithParameters:(id)a0 modelDescription:(id)a1 configuration:(id)a2 error:(id *)a3;

@end
