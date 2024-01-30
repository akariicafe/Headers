@class ATXCandidateRelevanceModelDataStoreDatasetMetadata, NSUUID, NSString, ATXCandidate, NSDate, ATXCandidateRelevanceModelFeaturizationManager, ATXCandidateRelevanceModel;

@interface ATXCandidateRelevanceModelDataStoreTrainingResult : NSObject

@property (readonly, nonatomic) ATXCandidateRelevanceModel *model;
@property (readonly, nonatomic) ATXCandidate *candidate;
@property (readonly, nonatomic) ATXCandidateRelevanceModelFeaturizationManager *featurizationManager;
@property (readonly, nonatomic) NSUUID *modelUUID;
@property (readonly, nonatomic) ATXCandidateRelevanceModelDataStoreDatasetMetadata *datasetMetadata;
@property (readonly, nonatomic) NSString *clientModelName;
@property (readonly, nonatomic) NSDate *trainDate;
@property (readonly, nonatomic) BOOL isVerified;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToATXCandidateRelevanceModelDataStoreTrainingResult:(id)a0;
- (id)initWithModel:(id)a0 candidate:(id)a1 featurizationManager:(id)a2 modelUUID:(id)a3 datasetMetadata:(id)a4 clientModelName:(id)a5 trainDate:(id)a6 isVerified:(BOOL)a7;

@end
