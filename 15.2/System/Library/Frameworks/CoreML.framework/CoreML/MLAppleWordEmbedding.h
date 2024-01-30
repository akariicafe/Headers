@class NSString, MLAppleWordEmbeddingParameters;

@interface MLAppleWordEmbedding : MLModel <MLModelSpecificationLoader> {
    void *wordEmbeddingModel;
}

@property (readonly) MLAppleWordEmbeddingParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (BOOL)saveAppleWordEmbeddingModelToURL:(id)a0 wordEmbeddingParameters:(id)a1 error:(id *)a2;

@end
