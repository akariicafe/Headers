@class NSDictionary, NLModelConfiguration;

@interface NLModelImplL : NLModelImpl {
    const void *_maxEntModel;
    NLModelConfiguration *_configuration;
    NSDictionary *_labelMap;
    NSDictionary *_vocabularyMap;
    NSDictionary *_documentFrequencyMap;
    unsigned long long _numberOfTrainingInstances;
}

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
- (id)vocabularyMap;
- (id)documentFrequencyMap;
- (id)predictedLabelHypothesesForTokens:(id)a0 maximumCount:(unsigned long long)a1;
- (unsigned long long)numberOfTrainingInstances;
- (id)initWithOwnedModelObject:(const void *)a0 configuration:(id)a1 labelMap:(id)a2 vocabularyMap:(id)a3 documentFrequencyMap:(id)a4 numberOfTrainingInstances:(unsigned long long)a5;

@end
