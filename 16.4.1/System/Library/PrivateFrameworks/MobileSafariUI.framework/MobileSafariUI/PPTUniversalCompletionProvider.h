@class NSTimer, NSString;

@interface PPTUniversalCompletionProvider : UniversalSearchCompletionProvider {
    NSTimer *networkDelaySimulatorTimer;
    NSString *querySimulated;
}

- (void).cxx_destruct;
- (id)_generateResultsForString:(id)a0;
- (id)_generateSingleResult;
- (void)setQueryToComplete:(id)a0;

@end
