@class NSTimer, NSString;

@interface PPTUniversalCompletionProvider : UniversalSearchCompletionProvider {
    NSTimer *networkDelaySimulatorTimer;
    NSString *querySimulated;
}

- (void).cxx_destruct;
- (void)setQueryToComplete:(id)a0;
- (id)_generateResultsForString:(id)a0;
- (id)_generateSingleResult;

@end
