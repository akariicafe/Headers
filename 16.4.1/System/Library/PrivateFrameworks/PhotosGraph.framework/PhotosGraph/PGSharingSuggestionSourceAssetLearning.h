@class MALearningStreamUtils;

@interface PGSharingSuggestionSourceAssetLearning : PGSharingSuggestionSource {
    MALearningStreamUtils *_learningStreamUtils;
}

- (double)weight;
- (id)details;
- (void).cxx_destruct;
- (id)name;
- (id)initWithLearningStreamUtils:(id)a0;
- (id)suggestedResultsForInput:(id)a0 withOptions:(id)a1;

@end
