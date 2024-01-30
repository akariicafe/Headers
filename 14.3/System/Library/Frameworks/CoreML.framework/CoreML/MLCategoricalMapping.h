@class NSDictionary, NSString, MLFeatureValue;

@interface MLCategoricalMapping : MLModel <MLModelSpecificationLoader>

@property (readonly, nonatomic) NSDictionary *mapping;
@property (readonly, nonatomic) MLFeatureValue *valueOnUnknown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 configuration:(id)a1 error:(id *)a2;

@end
