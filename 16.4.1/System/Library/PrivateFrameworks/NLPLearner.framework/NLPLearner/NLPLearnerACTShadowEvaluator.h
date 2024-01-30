@class NSString;

@interface NLPLearnerACTShadowEvaluator : NLPLearnerShadowEvaluator

@property (retain, nonatomic) NSString *tempCorpusPath;

+ (void)initialize;

- (void).cxx_destruct;
- (id)evaluateModel:(id)a0 onRecords:(id)a1 options:(id)a2 completion:(id /* block */)a3 error:(id *)a4;

@end
