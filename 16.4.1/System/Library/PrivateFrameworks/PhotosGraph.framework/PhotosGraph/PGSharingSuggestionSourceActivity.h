@interface PGSharingSuggestionSourceActivity : PGSharingSuggestionGraphBasedSource

- (double)weight;
- (id)details;
- (id)name;
- (id)suggestedResultsForInput:(id)a0 withOptions:(id)a1;

@end
