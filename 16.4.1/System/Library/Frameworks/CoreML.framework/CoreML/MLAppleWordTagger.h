@class NSString, MLAppleWordTaggerParameters;

@interface MLAppleWordTagger : MLModel <MLModelSpecificationLoader> {
    void *wordTaggingModel;
}

@property (readonly) MLAppleWordTaggerParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (BOOL)saveAppleWordTaggingModelToURL:(id)a0 wordTaggerParameters:(id)a1 error:(id *)a2;

@end
