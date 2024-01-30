@class ATXContextHeuristics;

@interface ATXContextHeuristicsServer : NSObject <ATXContextHeuristicsDelegate> {
    ATXContextHeuristics *_heuristics;
}

+ (id)sharedInstance;

- (void)contextHeuristics:(id)a0 didUpdateSuggestions:(id)a1;
- (void)contextHeuristics:(id)a0 didUpdateSpotlightRecents:(id)a1;
- (void)_updateBlendingLayerWithSuggestionsFromContextHeuristics:(id)a0;
- (void)_updateBlendingLayerWithSuggestionsFromSpotlightRecents:(id)a0;
- (id)init;
- (id)initWithHeuristics:(id)a0;
- (void).cxx_destruct;

@end
