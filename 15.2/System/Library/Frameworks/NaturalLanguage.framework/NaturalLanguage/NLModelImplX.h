@class NSString, NSDictionary, NLEmbedding, NLModelConfiguration, NSData;

@interface NLModelImplX : NLModelImpl {
    struct MontrealNeuralNetwork { } *_montrealModel;
    NLModelConfiguration *_configuration;
    NLEmbedding *_embedding;
    NSData *_customEmbeddingData;
    NSDictionary *_labelMap;
    unsigned long long _numberOfTrainingInstances;
    NSString *_trainingLanguage;
    NSString *_trainingEmbeddingType;
    NSData *_modelData;
}

- (unsigned long long)systemVersion;
- (id)configuration;
- (void).cxx_destruct;
- (id)modelData;
- (void)dealloc;
- (id)labelMap;
- (id)predictedLabelHypothesesForString:(id)a0 maximumCount:(unsigned long long)a1;
- (id)predictedLabelForString:(id)a0;
- (id)initWithModelData:(id)a0 configuration:(id)a1 labelMap:(id)a2 vocabularyMap:(id)a3 documentFrequencyMap:(id)a4 customEmbeddingData:(id)a5 trainingInfo:(id)a6 error:(id *)a7;
- (id)initWithModelTrainer:(id)a0 error:(id *)a1;
- (id)predictedLabelsForTokens:(id)a0;
- (id)trainingInfo;
- (id)customEmbeddingData;
- (id)predictedLabelHypothesesForTokens:(id)a0 maximumCount:(unsigned long long)a1;
- (unsigned long long)numberOfTrainingInstances;
- (float *)outputForString:(id)a0;

@end
