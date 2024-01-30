@interface VNSuggestionsLogger : VNClusteringLogger

- (void)logString:(id)a0;
- (id)initWithOptions:(id)a0 logEnabled:(BOOL)a1;
- (void)logInputFaceIdsWithFlags:(id)a0;
- (void)logSuggestons:(id)a0 description:(id)a1;
- (void)logAllSuggestons:(id)a0;
- (void)logFilteredByInputQuerySuggestons:(id)a0;
- (void)logConnectedGroups:(id)a0;
- (void)logFinalSuggestionsList:(id)a0;

@end
