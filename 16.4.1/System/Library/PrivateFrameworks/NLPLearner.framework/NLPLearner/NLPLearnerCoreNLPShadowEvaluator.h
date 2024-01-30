@interface NLPLearnerCoreNLPShadowEvaluator : NLPLearnerShadowEvaluator

@property (nonatomic) unsigned long long maxSequenceLength;

+ (void)initialize;

- (id)evaluateModel:(id)a0 onRecords:(id)a1 options:(id)a2 completion:(id /* block */)a3 error:(id *)a4;
- (id)evaluateModel:(struct CoreLanguageModelWithState { } *)a0 onSingleExample:(id)a1 tokenizer:(void *)a2;
- (id)modelCreationOptionsForModelURL:(id)a0 options:(id)a1;
- (BOOL)setMaxSequenceLengthForModelURL:(id)a0;

@end
