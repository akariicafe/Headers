@interface MLNeuralNetworkCompiler : MLModel <MLSpecificationCompiler>

+ (BOOL)collectNNModelDetailsFromArchive:(void *)a0 spec:(void *)a1 error:(id *)a2;
+ (id)compileSpecification:(void *)a0 toArchive:(void *)a1 options:(id)a2 error:(id *)a3;
+ (id)compiledVersionForSpecification:(void *)a0 options:(id)a1 error:(id *)a2;

@end
