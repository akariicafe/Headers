@interface MLNeuralNetworkV1Container : MLNeuralNetworkContainer

+ (BOOL)setShapesFromNetwork:(id)a0 arc:(void *)a1 shapePath:(const void *)a2 error:(id *)a3;
+ (id)containerFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

@end
