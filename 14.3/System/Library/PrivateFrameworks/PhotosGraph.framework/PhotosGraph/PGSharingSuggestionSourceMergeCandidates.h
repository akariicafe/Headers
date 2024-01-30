@interface PGSharingSuggestionSourceMergeCandidates : PGSharingSuggestionPhotoKitBasedSource

- (id)details;
- (double)weight;
- (id)name;
- (id)suggestedResultsForInput:(id)a0 withOptions:(id)a1;
- (BOOL)canRunWithOptions:(id)a0;
- (id)filterMeNodePredicateForInput:(id)a0;

@end
