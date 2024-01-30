@interface MLProgramContainer : MLNeuralNetworkContainer

+ (id)containerFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;
+ (BOOL)extractAndValidateShapesInProgram:(const void *)a0 container:(id)a1 error:(id *)a2;
+ (void)extractOptionalDefaultValueParams:(const void *)a0 container:(id)a1;

@end
