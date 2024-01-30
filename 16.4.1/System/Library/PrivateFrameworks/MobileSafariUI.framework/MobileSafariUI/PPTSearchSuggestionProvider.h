@class NSTimer, NSString;

@interface PPTSearchSuggestionProvider : SearchSuggestionProvider {
    NSTimer *networkDelaySimulatorTimer;
    NSString *querySimulated;
}

- (void).cxx_destruct;
- (id)_generateResultsForQuery:(id)a0;
- (void)setQueryToComplete:(id)a0;

@end
