@class ATXCandidateRelevanceModelConfig;

@interface ATXCandidateRelevanceModelServer : NSObject {
    ATXCandidateRelevanceModelConfig *_config;
}

+ (id)currentContextForConfig:(id)a0 contextOverride:(id)a1;
+ (id)mergeHeuristicSuggestions:(id)a0 withSuggestions:(id)a1;
+ (id)suggestionExecutableIdsFromSuggestions:(id)a0;

- (void)sendSuggestionsToBlending;
- (void)sendSuggestionsToBlendingForContext:(id)a0;
- (id)initWithConfig:(id)a0;
- (id)sortedProactiveSuggestionsForContext:(id)a0;
- (void).cxx_destruct;

@end
