@class NSDictionary, NLModelConfiguration, NSString;

@interface NLModelImplNX : NLModelImpl {
    void *_nlModel;
    void *_modelContainer;
    NLModelConfiguration *_configuration;
    NSDictionary *_labelMap;
    unsigned long long _numberOfTrainingInstances;
    NSString *_trainingLanguage;
}

- (void).cxx_destruct;
- (unsigned long long)systemVersion;
- (void)dealloc;
- (id)configuration;
- (id)modelData;
- (id)predictedLabelForString:(id)a0;
- (id)initWithModelData:(id)a0 configuration:(id)a1 labelMap:(id)a2 vocabularyMap:(id)a3 documentFrequencyMap:(id)a4 customEmbeddingData:(id)a5 trainingInfo:(id)a6 error:(id *)a7;
- (id)initWithModelTrainer:(id)a0 error:(id *)a1;
- (id)predictedLabelsForTokens:(id)a0;
- (id)labelMap;
- (id)trainingInfo;
- (id)predictedLabelHypothesesForString:(id)a0 maximumCount:(unsigned long long)a1;
- (id)predictedLabelHypothesesForTokens:(id)a0 maximumCount:(unsigned long long)a1;
- (unsigned long long)numberOfTrainingInstances;
- (id)initWithModelContainer:(void *)a0 configuration:(id)a1 labelMap:(id)a2 vocabularyMap:(id)a3 documentFrequencyMap:(id)a4 customEmbeddingData:(id)a5 trainingInfo:(id)a6;
- (id)predictedLabelsDictionaryForString:(id)a0;
- (id)predictedLabelHypothesesDictionaryForString:(id)a0 maximumCount:(unsigned long long)a1;

@end
