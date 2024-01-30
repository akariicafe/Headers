@class NSDictionary, NLModelConfiguration, NSString;

@interface NLModelImplNX : NLModelImpl {
    void *_nlModel;
    void *_modelContainer;
    NLModelConfiguration *_configuration;
    NSDictionary *_labelMap;
    unsigned long long _numberOfTrainingInstances;
    NSString *_trainingLanguage;
}

- (id)configuration;
- (void)dealloc;
- (id)modelData;
- (unsigned long long)systemVersion;
- (void).cxx_destruct;
- (id)labelMap;
- (id)initWithModelContainer:(void *)a0 configuration:(id)a1 labelMap:(id)a2 vocabularyMap:(id)a3 documentFrequencyMap:(id)a4 customEmbeddingData:(id)a5 trainingInfo:(id)a6;
- (id)initWithModelData:(id)a0 configuration:(id)a1 labelMap:(id)a2 vocabularyMap:(id)a3 documentFrequencyMap:(id)a4 customEmbeddingData:(id)a5 trainingInfo:(id)a6 error:(id *)a7;
- (id)initWithModelTrainer:(id)a0 error:(id *)a1;
- (unsigned long long)numberOfTrainingInstances;
- (id)predictedLabelForString:(id)a0;
- (id)predictedLabelHypothesesDictionaryForString:(id)a0 maximumCount:(unsigned long long)a1;
- (id)predictedLabelHypothesesForString:(id)a0 maximumCount:(unsigned long long)a1;
- (id)predictedLabelHypothesesForTokens:(id)a0 maximumCount:(unsigned long long)a1;
- (id)predictedLabelsDictionaryForString:(id)a0;
- (id)predictedLabelsForTokens:(id)a0;
- (id)trainingInfo;

@end
