@class MLAppleTextClassifierParameters, NSString;

@interface MLAppleTextClassifier : MLModel <MLModelSpecificationLoader> {
    void *textClassifierModel;
}

@property (readonly) MLAppleTextClassifierParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)saveAppleTextClassifierModelToURL:(id)a0 textClassifierParameters:(id)a1 error:(id *)a2;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 configuration:(id)a1 error:(id *)a2;

@end
