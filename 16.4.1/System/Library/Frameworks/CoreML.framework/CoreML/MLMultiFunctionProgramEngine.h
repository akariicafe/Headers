@class NSString, NSMutableDictionary, MLModelDescription, MLMultiFunctionProgramContainer, MLModelMetadata;

@interface MLMultiFunctionProgramEngine : MLModel <MLProgramInternal, MLNeuralNetwork, MLClassifier, MLRegressor, MLCompiledModelLoader, MLProgram> {
    NSMutableDictionary *_functionNameToEngineMap;
}

@property (readonly, nonatomic) MLMultiFunctionProgramContainer *container;
@property (readonly, nonatomic) NSString *modelFileBasePath;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly) MLModelMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver { } *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (id)program;
- (id)regress:(id)a0 options:(id)a1 error:(id *)a2;
- (id)evaluate:(id)a0 error:(id *)a1;
- (void)enableInstrumentsTracing;
- (id)classify:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (id)executionSchedule;
- (id)modelPath;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)classLabels;
- (void).cxx_destruct;
- (id)programEngineForFunction:(id)a0 error:(id *)a1;
- (id)evaluateFunction:(id)a0 arguments:(id)a1 error:(id *)a2;
- (id)initWithProgramContainer:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)newContextAndReturnError:(id *)a0;
- (void)removeEngineForFunctionName:(id)a0;
- (void)setModelPath:(id)a0 modelName:(id)a1;
- (void)updateModelFilePath:(id)a0;
- (BOOL)verifyArgumentNames:(id)a0 functionName:(id)a1 error:(id *)a2;

@end
