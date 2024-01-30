@class NSString, ATXAnchorModelPBLaunchHistoryMetadata;

@interface ATXAnchorModelPhase1TrainingResult : NSObject

@property (retain, nonatomic) NSString *candidateId;
@property (nonatomic) long long numUniqueAnchorOccurrencesWithUniqueCandidateOccurrence;
@property (nonatomic) double posteriorProbability;
@property (nonatomic) double classConditionalProbability;
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *launchHistory;

- (void).cxx_destruct;
- (id)description;

@end
