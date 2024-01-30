@class NSString, ATXAnchorModelHyperParameters, ATXXPCActivity, NSDate;
@protocol ATXAnchorModelDataStoreWrapperProtocol;

@interface ATXAnchorModelTrainer : NSObject <ATXAnchorModelTrainerProtocol> {
    ATXXPCActivity *_xpcActivity;
    id<ATXAnchorModelDataStoreWrapperProtocol> _dataStoreWrapper;
    ATXAnchorModelHyperParameters *_hyperparameters;
    NSDate *_trainingStartDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)train;
- (void).cxx_destruct;
- (id)init;
- (id)trainAnchorModel:(id)a0;
- (id)initWithXPCActivity:(id)a0 dataStoreWrapper:(id)a1;
- (id)anchorsToIncludeInTraining;
- (BOOL)anchorWasRecentlyTrained:(id)a0;
- (id)trainAnchorModel:(id)a0 phase1Trainer:(id)a1 phase2Trainer:(id)a2 phase3Trainer:(id)a3;
- (id)trainModelPerCandidateSelectedInPhase1:(id)a0 phase2Trainer:(id)a1 phase3Trainer:(id)a2 phase1Results:(id)a3;
- (id)candidateTypeFromCandidateId:(id)a0;
- (id)initWithXPCActivity:(id)a0;

@end
