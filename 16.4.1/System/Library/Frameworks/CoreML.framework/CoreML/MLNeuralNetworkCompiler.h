@interface MLNeuralNetworkCompiler : MLModel <MLSpecificationCompiler>

+ (id)compileSpecification:(void *)a0 toArchive:(void *)a1 options:(id)a2 error:(id *)a3;
+ (id)compiledVersionForSpecification:(void *)a0 options:(id)a1 error:(id *)a2;
+ (void)collectEspressoModelDetails:(void *)a0 modelPath:(const void *)a1;
+ (BOOL)collectNNModelDetailsFromArchive:(void *)a0 spec:(void *)a1 error:(id *)a2;

@end
