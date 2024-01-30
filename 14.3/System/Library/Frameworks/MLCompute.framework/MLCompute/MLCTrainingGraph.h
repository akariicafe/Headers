@class MLCLayer, MLCOptimizer, NSMutableArray;
@protocol MLCLayerCompiling;

@interface MLCTrainingGraph : MLCGraph

@property (retain, nonatomic) MLCOptimizer *optimizer;
@property (retain, nonatomic) NSMutableArray *optimizerUpdateLayerList;
@property (retain, nonatomic) NSMutableArray *optimizerParameterList;
@property (retain, nonatomic) NSMutableArray *rootSourceGradientTensor;
@property (retain, nonatomic) NSMutableArray *lossLayersInTrainingGraph;
@property (retain, nonatomic) NSMutableArray *stopGradientTensorList;
@property (retain, nonatomic) MLCLayer<MLCLayerCompiling> *lossLayer;
@property (nonatomic) BOOL gradientTensorsAreTemporary;
@property (readonly, nonatomic) MLCLayer *dummyLayer;
@property (nonatomic) unsigned long long compilerOptions;
@property (nonatomic) unsigned long long firstTrainableLayerIndex;
@property (nonatomic) BOOL allocateResultGradientTensors;
@property (nonatomic) BOOL allocateOptimizerData;
@property (nonatomic) BOOL updateOptimizerTimeStep;
@property (readonly, nonatomic) unsigned long long deviceMemorySize;

+ (id)graphWithGraphObjects:(id)a0 lossLayer:(id)a1 optimizer:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)addOutputs:(id)a0;
- (id)description;
- (BOOL)addInputs:(id)a0 lossLabels:(id)a1 lossLabelWeights:(id)a2;
- (BOOL)setTrainingTensorParameters:(id)a0;
- (BOOL)compileWithOptions:(unsigned long long)a0 device:(id)a1;
- (void)synchronizeUpdates;
- (BOOL)executeWithInputsData:(id)a0 lossLabelsData:(id)a1 lossLabelWeightsData:(id)a2 batchSize:(unsigned long long)a3 options:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (id)initWithGraphObjects:(id)a0 lossLayer:(id)a1 optimizer:(id)a2;
- (void)sumRootSourceGradientTensor:(id)a0 device:(id)a1;
- (void)updateIsTrainableForLayerWithStopGradientTensor:(id)a0 checkChildLayers:(BOOL)a1;
- (void)markLayersAsTrainable;
- (BOOL)allocateGradientTensorsForMultipleChildrenOfLayer:(id)a0 gradientTensorsAreTemporary:(BOOL)a1 device:(id)a2;
- (id)resultGradientTensorToUseByExecuteGradientForLayer:(id)a0 sourceIndex:(unsigned long long)a1 incrementIntermediateIndex:(BOOL)a2;
- (void)linkRelatedGradientTensorsForConcatLayer:(id)a0 device:(id)a1;
- (void)updateTrainableLayerList:(BOOL)a0;
- (BOOL)allocateRootSourceGradientTensors:(id)a0;
- (void)allocateGradientTensorsForLayersInGraph:(BOOL)a0;
- (BOOL)compileOptimizer:(id)a0;
- (void)sumIntermediateGradientTensorsForLayer:(id)a0;
- (void)sumAllRootSourceGradientTensors:(id)a0;
- (unsigned long long)layerIndexToStoreSummedGradientsForTensor:(id)a0;
- (BOOL)allocateOptimizerDataForGraph;
- (BOOL)checkAndSumIfSharedParameterUpdateForNormalizationLayerTensor:(id)a0 layer:(id)a1 device:(id)a2 isBetaTensor:(BOOL)a3;
- (BOOL)recompile;
- (void)executeForwardToLayerIndex:(unsigned long long)a0 resultTensor:(id)a1 resultStateIsTemporary:(BOOL)a2 batchSize:(unsigned long long)a3 forTraining:(BOOL)a4;
- (BOOL)executeForwardWithBatchSize:(unsigned long long)a0 options:(unsigned long long)a1 outputsData:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)compileAndAllocateGradientTensorsForGraph:(BOOL)a0;
- (void)executeGradientFromLayerIndex:(unsigned long long)a0 batchSize:(unsigned long long)a1;
- (BOOL)executeGradientWithBatchSize:(unsigned long long)a0 options:(unsigned long long)a1 outputsData:(id)a2 completionHandler:(id /* block */)a3;
- (void)executeOptimizerUpdate;
- (BOOL)executeWithInputsData:(id)a0 lossLabelsData:(id)a1 lossLabelWeightsData:(id)a2 outputsData:(id)a3 batchSize:(unsigned long long)a4 options:(unsigned long long)a5 completionHandler:(id /* block */)a6;
- (id)resultGradientTensorsForLayer:(id)a0 summedGradientForInputTensors:(BOOL)a1;
- (BOOL)bindOptimizerData:(id)a0 deviceData:(id)a1 withTensor:(id)a2;
- (BOOL)stopGradientForTensors:(id)a0;
- (unsigned long long)deviceMemorySizeWithDevice:(id)a0;
- (BOOL)addInputs:(id)a0 lossLabels:(id)a1;
- (BOOL)executeForwardWithBatchSize:(unsigned long long)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)executeGradientWithBatchSize:(unsigned long long)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)executeOptimizerUpdateWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)gradientTensorForInput:(id)a0;
- (id)resultGradientTensorsForLayer:(id)a0;
- (id)sourceGradientTensorsForLayer:(id)a0;
- (id)resultTensorsForLayer:(id)a0;
- (id)sourceTensorsForLayer:(id)a0;
- (id)allocateUserGradientForTensor:(id)a0;
- (BOOL)linkWithGraphs:(id)a0;
- (id)gradientDataForParameter:(id)a0 layer:(id)a1;

@end
