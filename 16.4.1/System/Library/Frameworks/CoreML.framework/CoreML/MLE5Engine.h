@class MLE5ExecutionStreamPool, NSString, MLModelDescription, MLModelMetadata, MLE5ExecutionStreamOperationPool;

@interface MLE5Engine : MLModel <MLClassifier, MLRegressor>

@property (readonly) MLE5ExecutionStreamPool *streamPool;
@property (readonly) MLE5ExecutionStreamOperationPool *operationPool;
@property (readonly) NSString *classProbabilitiesFeatureName;
@property (readonly) id classLabelsSharedKey;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly) MLModelMetadata *metadata;

- (id)regress:(id)a0 options:(id)a1 error:(id *)a2;
- (id)classify:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)classLabels;
- (void).cxx_destruct;
- (id)_classProbabilitiesInOutputFeatures:(id)a0 error:(id *)a1;
- (id)_classifierResultFromOutputFeatures:(id)a0 classifyTopK:(unsigned long long)a1 error:(id *)a2;
- (id)_outputFeaturesByAddingClassifierResultTo:(id)a0 classifyTopK:(unsigned long long)a1 error:(id *)a2;
- (id)_predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)_predictionFromFeatures:(id)a0 options:(id)a1 usingStream:(id)a2 operation:(id)a3 error:(id *)a4;
- (id)_probabilityDictionaryWithMultiArray:(id)a0 classifyTopK:(long long)a1;
- (id)initWithE5BundleAtURL:(id)a0 modelDescription:(id)a1 classProbabilitiesFeatureName:(id)a2;

@end
