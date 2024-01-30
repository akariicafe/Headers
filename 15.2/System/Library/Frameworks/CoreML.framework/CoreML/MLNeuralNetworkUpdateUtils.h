@interface MLNeuralNetworkUpdateUtils : NSObject

+ (BOOL)loadUpdateParameters:(void *)a0 fromCompiledArchive:(void *)a1 error:(id *)a2;
+ (id)loadParameterDescriptionsAndContainerFromUpdateParameters:(const void *)a0 modelDescription:(id)a1;
+ (id)createClassLabelToIndexMapWith:(id)a0;

@end
