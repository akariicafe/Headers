@class NLEmbedding, NSData;

@interface NLModelImplE : NLModelImpl {
    NLEmbedding *_embedding;
    NSData *_embeddingData;
}

- (void).cxx_destruct;
- (unsigned long long)systemVersion;
- (id)modelData;
- (id)predictedLabelForString:(id)a0;
- (id)initWithModelData:(id)a0 configuration:(id)a1 labelMap:(id)a2 vocabularyMap:(id)a3 documentFrequencyMap:(id)a4 customEmbeddingData:(id)a5 trainingInfo:(id)a6 error:(id *)a7;
- (id)initWithModelTrainer:(id)a0 error:(id *)a1;
- (id)predictedLabelsForTokens:(id)a0;
- (id)embedding;
- (id)embeddingData;

@end
