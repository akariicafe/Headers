@class _PASRng;

@interface SGQuickResponsesRanking : NSObject {
    _PASRng *_rng;
}

- (id)initWithSeed:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)classResultsForScores:(id)a0 numResponses:(id)a1 responseCount:(unsigned long long)a2 config:(id)a3;
- (id)indexesForScores:(id)a0 numResponses:(id)a1;
- (id)resultsForModelScores:(id)a0 responseCount:(unsigned long long)a1 config:(id)a2;
- (id)semanticClassesForCategory:(unsigned long long)a0 responseCount:(unsigned long long)a1 configReplies:(id)a2;
- (id)semanticClassesForResults:(id)a0 scores:(id)a1 numResponses:(id)a2 config:(id)a3;

@end
