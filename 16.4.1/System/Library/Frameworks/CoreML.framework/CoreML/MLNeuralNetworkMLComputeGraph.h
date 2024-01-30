@class MLCDevice, NSString, MLCGraph, MLCInferenceGraph, MLModelDescription, NSDictionary, MLCTrainingGraph;

@interface MLNeuralNetworkMLComputeGraph : NSObject

@property (retain, nonatomic) MLCGraph *graph;
@property (retain, nonatomic) MLCTrainingGraph *trainingGraph;
@property (retain, nonatomic) MLCInferenceGraph *inferenceGraph;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (retain, nonatomic) NSDictionary *mlcInputs;
@property (retain, nonatomic) NSDictionary *mlcLabels;
@property (nonatomic) unsigned long long executionOptions;
@property (retain, nonatomic) NSDictionary *layersMap;
@property (nonatomic) BOOL layerFusedToLoss;
@property (retain, nonatomic) NSString *fusedLayerInputName;
@property (retain, nonatomic) MLCDevice *device;
@property (readonly, nonatomic) NSDictionary *outputNameToLayerMap;
@property (nonatomic) BOOL classifierOutputIsSigmoidOutput;

+ (id)graphFromCompiledArchive:(void *)a0 modelDescription:(id)a1 batchSize:(unsigned long long)a2 numberOfClasses:(unsigned long long)a3 computeUnits:(long long)a4 error:(id *)a5;

- (void).cxx_destruct;
- (BOOL)buildGraphsFor:(void *)a0 batchSize:(unsigned long long)a1 numberOfClasses:(unsigned long long)a2 error:(id *)a3;
- (id)buildInferenceGraph:(id)a0 updateParams:(const void *)a1 layers:(const void *)a2 mlcTensorByName:(id)a3 outputNameToLayerMap:(id)a4 error:(id *)a5;
- (id)buildMLComputeTensorDescriptorWith:(id)a0 featureName:(id)a1 batchSize:(unsigned long long)a2 numberOfClasses:(unsigned long long)a3 error:(id *)a4;
- (id)buildTrainingGraphFrom:(id)a0 updateParams:(const void *)a1 numberOfClasses:(unsigned long long)a2 mlcTensorByName:(id)a3 error:(id *)a4;
- (BOOL)copyWeightsFrom:(id)a0 to:(void *)a1 error:(id *)a2;
- (id)createMultiArrayFromTensor:(id)a0 error:(id *)a1;
- (id)getBiasesForLayerNamed:(id)a0 error:(id *)a1;
- (id)getWeightsForLayerNamed:(id)a0 error:(id *)a1;
- (id)initWithCompiledArchive:(void *)a0 modelDescription:(id)a1 batchSize:(unsigned long long)a2 numberOfClasses:(unsigned long long)a3 computeUnits:(long long)a4 error:(id *)a5;
- (id)inputTensorMapWithBatchSize:(unsigned long long)a0 numberOfClasses:(unsigned long long)a1 error:(id *)a2;
- (id)labelTensorMapWithBatchSize:(unsigned long long)a0 numberOfClasses:(unsigned long long)a1 error:(id *)a2;
- (id)lossInputsFromUpdateParams:(const void *)a0;
- (int)mlcDeviceTypeForComputeUnit:(long long)a0;
- (BOOL)saveUpdatedWeightsTo:(void *)a0 error:(id *)a1;

@end
