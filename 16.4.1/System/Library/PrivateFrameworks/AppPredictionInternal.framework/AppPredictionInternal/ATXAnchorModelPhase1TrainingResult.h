@class NSString, ATXAnchorModelPBLaunchHistoryMetadata;

@interface ATXAnchorModelPhase1TrainingResult : NSObject

@property (retain, nonatomic) NSString *candidateId;
@property (nonatomic) long long numUniqueAnchorOccurrencesWithUniqueCandidateOccurrence;
@property (nonatomic) long long numShownSuggestions;
@property (nonatomic) long long numEngagedSuggestions;
@property (nonatomic) long long numRejectedSuggestion;
@property (nonatomic) double posteriorProbability;
@property (nonatomic) double classConditionalProbability;
@property (nonatomic) double standardDeviationOfOffsetFromAnchor;
@property (nonatomic) double anchorPopularity;
@property (nonatomic) double globalPopularity;
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *launchHistory;

- (id)description;
- (void).cxx_destruct;

@end
