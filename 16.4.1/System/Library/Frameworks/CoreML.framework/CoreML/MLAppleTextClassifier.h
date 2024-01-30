@class MLAppleTextClassifierParameters, NSString;

@interface MLAppleTextClassifier : MLModel <MLModelSpecificationLoader> {
    void *textClassifierModel;
}

@property (readonly) MLAppleTextClassifierParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (BOOL)saveAppleTextClassifierModelToURL:(id)a0 textClassifierParameters:(id)a1 error:(id *)a2;

@end
