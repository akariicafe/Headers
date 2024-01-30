@class NSDictionary, NLModelConfiguration;

@interface NLModelImplM : NLModelImpl {
    const void *_mrlModel;
    NLModelConfiguration *_configuration;
    NSDictionary *_labelMap;
    NSDictionary *_vocabularyMap;
    unsigned long long _numberOfTrainingInstances;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)configuration;
- (id)modelData;
- (id)predictedLabelForString:(id)a0;
- (id)initWithModelData:(id)a0 configuration:(id)a1 labelMap:(id)a2 vocabularyMap:(id)a3 documentFrequencyMap:(id)a4 customEmbeddingData:(id)a5 trainingInfo:(id)a6 error:(id *)a7;
- (id)initWithModelTrainer:(id)a0 error:(id *)a1;
- (id)predictedLabelsForTokens:(id)a0;
- (id)labelMap;
- (id)vocabularyMap;
- (id)predictedLabelHypothesesForString:(id)a0 maximumCount:(unsigned long long)a1;
- (id)predictedLabelHypothesesForTokens:(id)a0 maximumCount:(unsigned long long)a1;
- (unsigned long long)numberOfTrainingInstances;
- (id)initWithOwnedModelObject:(const void *)a0 configuration:(id)a1 labelMap:(id)a2 vocabularyMap:(id)a3 numberOfTrainingInstances:(unsigned long long)a4;

@end
