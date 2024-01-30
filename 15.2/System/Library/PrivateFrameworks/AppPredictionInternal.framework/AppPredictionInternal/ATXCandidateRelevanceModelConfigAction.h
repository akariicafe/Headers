@class ATXActionPredictionBlacklist, ATXDigitalHealthBlacklist;

@interface ATXCandidateRelevanceModelConfigAction : ATXCandidateRelevanceModelConfig

@property (retain, nonatomic) ATXDigitalHealthBlacklist *appDigitalHealthBlacklist;
@property (retain, nonatomic) ATXActionPredictionBlacklist *actionBlacklist;

- (id)heuristicSuggestionsForContext:(id)a0 currentSuggestionExecutableIds:(id)a1;
- (id)proactiveSuggestionForCandidate:(id)a0 prediction:(float)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)candidateIsStillValidToSuggest:(id)a0;
- (id)datasetGenerator;
- (id)candidatePublisherFromStartTime:(double)a0;

@end
