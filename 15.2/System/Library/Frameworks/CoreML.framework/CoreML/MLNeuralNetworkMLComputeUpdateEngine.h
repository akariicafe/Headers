@class MLUpdateProgressHandlers, MLNeuralNetworkMLComputeGraph, MLParameterContainer, NSDictionary, NSString, NSObject, MLShufflingBatchProvider;
@protocol OS_dispatch_queue;

@interface MLNeuralNetworkMLComputeUpdateEngine : MLNeuralNetworkV1Engine <MLUpdatable>

@property (nonatomic) BOOL continueWithUpdate;
@property (retain, nonatomic) MLShufflingBatchProvider *shuffableTrainingData;
@property (retain, nonatomic) MLParameterContainer *parameterContainer;
@property (retain, nonatomic) MLUpdateProgressHandlers *progressHandlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) float finalLossValue;
@property (retain, nonatomic) MLNeuralNetworkMLComputeGraph *mlcGraph;
@property (readonly, nonatomic) NSDictionary *classLabelToIndexMap;
@property (nonatomic) BOOL classifierOutputIsSigmoidOutput;
@property (readonly, nonatomic) NSString *lossTargetName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (void)resumeUpdate;
- (id)updateParameters;
- (id)parameterValueForKey:(id)a0;
- (void)resumeUpdateWithParameters:(id)a0;
- (void).cxx_destruct;
- (void)setUpdateProgressHandlers:(id)a0 dispatchQueue:(id)a1;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)initWithCompiledArchive:(void *)a0 nnContainer:(id)a1 configuration:(id)a2 error:(id *)a3;
- (id)loadLossTargetName:(void *)a0;
- (id)performInferenceWith:(id)a0 outputNameToLayerMap:(id)a1 error:(id *)a2;
- (void)cancelUpdate;
- (void)updateModelWithData:(id)a0;
- (void)updateLearningRateWithValue:(float)a0;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)performTrainingWith:(id)a0 callBacks:(id)a1 numberOfEpochs:(unsigned long long)a2 error:(id *)a3;

@end
