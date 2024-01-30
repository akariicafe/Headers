@class NSString, NSSet, ATXProactiveSuggestionClientModel, NSArray, NSObject, NSDictionary;
@protocol ATXCandidateRelevanceModelTrainingPlanProtocol, ATXCandidateRelevanceModelDataStoreProtocol;

@interface ATXCandidateRelevanceModelConfig : NSObject {
    NSDictionary *_parameters;
}

@property (readonly, nonatomic) NSString *abGroupIdentifier;
@property (retain, nonatomic) NSSet *installedAppsKnownToSpringBoard;
@property (retain, nonatomic) NSObject<ATXCandidateRelevanceModelTrainingPlanProtocol> *modelTrainingPlan;
@property (retain, nonatomic) id<ATXCandidateRelevanceModelDataStoreProtocol> datastore;
@property (retain, nonatomic) ATXProactiveSuggestionClientModel *clientModel;
@property (readonly, nonatomic) NSArray *featurizers;

- (BOOL)isEnabled;
- (id)heuristicSuggestionsForContext:(id)a0 currentSuggestionExecutableIds:(id)a1;
- (id)proactiveSuggestionForCandidate:(id)a0 prediction:(float)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)candidateIsStillValidToSuggest:(id)a0;
- (id)datasetGenerator;
- (id)candidatePublisherFromStartTime:(double)a0;
- (id)initWithAppIconState:(id)a0;
- (id)featurizersFromConfigPlist;
- (int)minimumNumberOfPositiveSamplesForCandidate;
- (int)minimumNumberOfDaysWithPositiveSamplesForCandidate;
- (int)minimumNumberOfSamplesForCandidate;
- (int)minimumNumberOfDaysWithSamplesForCandidate;
- (int)minimumNumberOfPositiveSamplesOverall;
- (int)minimumNumberOfDaysWithPositiveSamplesOverall;
- (BOOL)shouldTrainModelWithPositiveCandidateDatasetMetadata:(id)a0;
- (BOOL)shouldTrainModelWithCandidateDatasetMetadata:(id)a0;
- (BOOL)shouldTrainModelWithOverallDatasetMetadata:(id)a0;
- (float)dataHarvestingSamplingRate;
- (int)maximumNumberOfTrainedCandidates;
- (id)modelTrainingPlanParameters;

@end
