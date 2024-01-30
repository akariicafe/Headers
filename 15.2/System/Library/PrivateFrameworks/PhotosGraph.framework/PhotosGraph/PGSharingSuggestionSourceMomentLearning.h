@class MALearningStreamUtils;

@interface PGSharingSuggestionSourceMomentLearning : PGSharingSuggestionSource {
    MALearningStreamUtils *_learningStreamUtils;
}

- (double)weight;
- (id)details;
- (void).cxx_destruct;
- (id)name;
- (id)suggestedResultsForInput:(id)a0 withOptions:(id)a1;
- (id)initWithLearningStreamUtils:(id)a0;

@end
